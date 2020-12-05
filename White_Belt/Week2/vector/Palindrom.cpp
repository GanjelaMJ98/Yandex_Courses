#include <iostream>
#include <string>

bool IsPalindrom(std::string example){
    for(int i = 0; i < example.size(); i++){
        if(example[i] != example[example.size()-1-i]){
            return false;
        }
    }
    return true;
}

int main() {
    std::string a;
    std::cin >> a;
    if (IsPalindrom(a)){
        std::cout << "true";
    } else{
        std::cout << "false";
    }
    return 0;
}
