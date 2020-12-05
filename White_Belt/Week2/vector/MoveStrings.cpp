#include <iostream>
#include <string>
#include <vector>

void MoveStrings(std::vector<std::string> &source ,std::vector<std::string> &destination){
    for(std::string s : source){
        destination.push_back(s);
    }
    source.clear();
}

int main() {
    std::vector<std::string> source = {"a", "b", "c"};
    std::vector<std::string> destination = {"z"};
    MoveStrings(source, destination);
    std::cout << "source: ";
    for(std::string s : source){
        std::cout << s << " ";
    }
    std::cout << "destination: ";
    for(std::string s : destination){
        std::cout << s << " ";
    }
    return 0;
}