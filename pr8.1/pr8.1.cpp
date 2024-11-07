#include <iostream>
#include <cmath>

double computeInverse(double x, int n) {
    if (x == 0) {
        std::cerr << "Ошибка: Деление на ноль!" << std::endl;
        return 0;
    }
    double sum = 0.0;
    double term = 1.0; 
    for (int i = 0; i < n; i++) {
        sum += term;
        term *= (1 - x); 
    }

    return sum;
}

int main() {
    setlocale(0, "ru");
    double x;
    int n;

    std::cout << "Введите x (|x| < 1): ";
    std::cin >> x;
    std::cout << "Введите количество членов ряда n: ";
    std::cin >> n;

    if (fabs(x) >= 1) {
        std::cerr << "Ошибка: x должно быть в диапазоне |x| < 1." << std::endl;
        return 1;
    }

    double result = computeInverse(x, n);
    std::cout << "Приближенное значение 1/x: " << result << std::endl;

    return 0;
}
