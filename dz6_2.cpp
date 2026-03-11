#include <iostream>

int power(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= value;
    }
    return result;
}

int main(int argc, char** argv)
{
    int value = 5, p = 2;
    std::cout << value << " в степени " << p << " = " << power(value, p) << std::endl;

    value = 3;
    p = 3;
    std::cout << value << " в степени " << p << " = " << power(value, p) << std::endl;

    value = 4;
    p = 4;
    std::cout << value << " в степени " << p << " = " << power(value, p) << std::endl;

    return 0;
}
