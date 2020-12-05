#include <iostream>

int Factorial(int x){
    if(x <= 1){
        return 1;
    }
    return x * Factorial(x-1);
}

int main() {
    int a = 0;
    std::cin >> a;
    std::cout << Factorial(a);
    return 0;
}
