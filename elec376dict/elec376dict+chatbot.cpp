#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <C:/FallQU24/ELEC376/elec376dict/json.hpp>
#include <C:/FallQU24/ELEC376/elec376dict/curl.h>

using namespace std;

// Dict Class
class Dict {
private:
    unordered_map<string, vector<string>> dict;

public:
    Dict();
    
    // Add a word with its meaning
    void addWord(string word, string meaning) {
        dict[word].push_back(meaning);
    }
    
    // Remove a word from the dictionary
    void removeWord(string word) {
        dict.erase(word);
    }
    
    // Get the first meaning of a word
    string getMeaning(string word) {
        if (dict.find(word) == dict.end()) {
            return "Definition not found.";
        } else {
            return dict[word][0];
        }
    }

    // Display all words and all their meanings
    void displayAllDefinitions() {
        for (auto i : dict) {
            cout << i.first << ":\n";  // Print the word (key)
            for (const auto& meaning : i.second) {  // Loop through all meanings for this word
                cout << "- " << meaning << "\n";  // Print each meaning
            }
        }
    }

    // Getter for dict
    unordered_map<string, vector<string>> getDict() {
        return dict;
    }

    // Setter for dict
    void setDict(unordered_map<string, vector<string>> dict) {
        this->dict = dict;
    }
};

// Callback function to capture response data from cURL
static size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* userp) {
    size_t totalSize = size * nmemb;
    userp->append((char*)contents, totalSize);
    return totalSize;
}

// Function to parse the GPT-3 response and print it
void handleGPTResponse(const string& jsonResponse) {
    try {
        auto json = nlohmann::json::parse(jsonResponse);
        string responseText = json["choices"][0]["message"]["content"];
        cout << "GPT-3: " << responseText << endl;
    } catch (const exception& e) {
        cerr << "Error parsing JSON response: " << e.what() << endl;
    }
}

// Function to send user input to OpenAI API and capture the response
string sendToGPT(const string& input) {
    CURL* curl;
    CURLcode res;
    string responseString;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        string api_url = "https://api.openai.com/v1/chat/completions";
        
        // Set up headers for the API request
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        headers = curl_slist_append(headers, "Authorization: Bearer sk-0hp-fAMWPh4WUoJsv5xSVA4z_wCuv973hnszwB8rfrT3BlbkFJ0WfgkZDOuRAsbJShHIDI_RB-UzSXqr6PCmiFNWI4QA");

        // Prepare the data payload (request body)
        string post_data = R"({
            "model": "gpt-3.5-turbo",
            "messages": [{"role": "system", "content": "You are a helpful chatbot."},
                         {"role": "user", "content": ")" + input + R"("}]
        })";

        // Set the options for the curl request
        curl_easy_setopt(curl, CURLOPT_URL, api_url.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data.c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        
        // Set callback to capture response
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &responseString);

        // Perform the request
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
        }

        // Clean up
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    
    return responseString;
}

// Main function that integrates everything together
int main() {
    Dict dictionary;

    // Prepopulate dictionary with some words
    dictionary.addWord("hello", "a greeting");
    dictionary.addWord("goodbye", "a farewell");

    string user_input;
    cout << "Ask something: ";
    getline(cin, user_input);

    // Send user input to GPT-3 and get response
    string gptResponse = sendToGPT(user_input);

    // Handle GPT response
    handleGPTResponse(gptResponse);

    // Display the current dictionary entries
    cout << "\nCurrent dictionary entries:\n";
    dictionary.displayAllDefinitions();

    return 0;
}

// Constructor for Dict class
Dict::Dict() {
    dict = unordered_map<string, vector<string>>();
}
