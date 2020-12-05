#include <iostream>
#include <vector>

std::vector<int> Temperature_filter(const std::vector<int>& v){
    std::vector<int> rezult;
    int avarage = 0;
    for(int i = 0; i < v.size(); i++)
        avarage += v[i];
    avarage = avarage/v.size();
    for(int i = 0; i < v.size(); i++){
        if(v[i] > avarage){
            rezult.push_back(i);
        }
    }
    return rezult;
}


int main() {
    int count = 0;
    std::vector<int> numbers;
    std::cin >> count;
    while(count != 0){
        int boof = 0;
        std::cin >> boof;
        numbers.push_back(boof);
        count--;
    }
    numbers = Temperature_filter(numbers);
    std::cout << numbers.size() << std::endl;
    for(auto s : numbers){
        std::cout << s << " ";
    }
    return 0;
}