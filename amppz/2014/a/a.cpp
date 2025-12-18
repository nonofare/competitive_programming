#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    int words_count;
    std::cin >> words_count;

    std::vector<std::string> words;
    std::unordered_map<char, std::vector<std::string>> words_by_letter;

    for (int i = 0; i < words_count; i++) {
        std::string word;
        std::cin >> word;
        words.push_back(word);
        words_by_letter[word[0]].push_back(word);
    }

    for (auto& word : words) {
        std::vector<std::string> sentence;
        for (char letter : word) {
            if (!words_by_letter[letter].empty()) {
                sentence.push_back(words_by_letter[letter][0]);
            } else {
                sentence.clear();
                break;
            }
        }

        if (sentence.size() == word.size()) {
            std::cout << sentence.size() << std::endl;
            for (int i = 0; i < sentence.size(); i++) {
                if (i) {
                    std::cout << " ";
                }
                std::cout << sentence[i];
            }
            std::cout << std::endl;
            return 0;
        }
    }

    std::cout << -1 << std::endl;
    return 0;
}
