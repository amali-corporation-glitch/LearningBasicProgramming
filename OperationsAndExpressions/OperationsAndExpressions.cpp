#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
    setlocale(LC_ALL, "ru");

    // ЗАДАНИЕ №1
    int a{ 0 };
    int b{ 0 };

    std::cout << "Введите первое целое число a: ";
    std::cin >> a;
    std::cout << "Введите второе целое число b: ";
    std::cin >> b;

    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a - b = " << a - b << "\n";
    std::cout << "a * b = " << a * b << "\n";
    std::cout << "a / b = " << a / b << "\n";
    std::cout << "a % b = " << a % b << "\n";
    std::cout << "Настоящее деление с плавающей точкой a / b = " << static_cast<double>(a) / b << "\n\n";

    // ЗАДАНИЕ №2

    int estimation_1{ 0 };
    int estimation_2{ 0 };
    int estimation_3{ 0 };
    double average_score{ 0 };

    std::cout << "Введите первую оценку (от 0 до 100): ";
    std::cin >> estimation_1;
    std::cout << "Введите вторую оценку (от 0 до 100): ";
    std::cin >> estimation_2;
    std::cout << "Введите третью оценку (от 0 до 100): ";
    std::cin >> estimation_3;

    average_score = (estimation_1 + estimation_2 + estimation_3) / 3;
    std::cout << std::fixed << std::setprecision(2) << "Средний балл составляет: " << average_score << "\n\n";

    // ЗАДАНИЕ №3

    // Стороны треугольника z x c
    int z = { 0 };
    int x = { 0 };
    int c = { 0 };
    bool triangle{ 1 };

    std::cout << "Определение существование треугольника по трем сторонам (1 - существует, 0 - нет)\n";
    std::cout << "Введите величину стороны Z: ";
    std::cin >> z;
    std::cout << "Введите величину стороны X: ";
    std::cin >> x;
    std::cout << "Введите величину стороны C: ";
    std::cin >> c;

    triangle = (z + x > c) && (x + c > z) && (c + z > x);

    std::cout << "Результат: " << triangle;

    return 0;
}
