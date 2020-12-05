#include <iostream>
#include <string>
#include <vector>

bool IsPalindrom(std::string example){
    for(int i = 0; i < example.size(); i++){
        if(example[i] != example[example.size()-1-i]){
            return false;
        }
    }
    return true;
}

std::vector<std::string> PalindromFilter( std::vector<std::string> words, int minLength){
    std::vector<std::string> result;
    for(auto word : words){
        if((word.size() >= minLength) && IsPalindrom(word)){
            result.push_back(word);
        }
    }
    return result;
}


int main() {
    std::vector<std::string> words = {"abacaba","aba"};
    std::vector<std::string> rez = PalindromFilter(words,5);
    for(auto a:rez){
        std::cout << a;
    }
    return 0;
}
