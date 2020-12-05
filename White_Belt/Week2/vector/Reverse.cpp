#include <iostream>
#include <vector>

void Reverse(std::vector<int>& v){
    int boof = 0;
    for(int i = 0; i < v.size()/2; i++){
        boof = v[i];
        v[i] = v[v.size()-i-1];
        v[v.size()-i-1] = boof;
    }
}

std::vector<int> Reversed(const std::vector<int>& v){
    std::vector<int> rezult = v;
    Reverse(rezult);
    return rezult;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5,6};
    numbers = Reversed(numbers);
    std::cout << "numbers: ";
    for(auto s : numbers){
        std::cout << s << " ";
    }
    return 0;
}