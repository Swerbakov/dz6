#include <iostream>

unsigned long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    unsigned long long prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        unsigned long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int count;
    std::cout << "Введите число: ";
    std::cin >> count;
    
    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < count; i++) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
