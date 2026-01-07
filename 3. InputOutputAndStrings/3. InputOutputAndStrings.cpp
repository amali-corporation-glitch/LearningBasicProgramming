#include <iostream>
#include <iomanip>
#include <string>

int main() {

    // ЗАДАНИЕ №1
    std::string name{ "" };
    std::string surname{ "" };

    std::cout << "Введите свое имя и фамилию через пробел: ";
    std::cin >> name >> surname;

    std::cout << "Здравствуйте, " << surname << " " << name << "!\n\n";


    // ЗАДАНИЕ №2


    std::string full_name{ "" };
    int est_1{ 0 };
    int est_2{ 0 };
    int est_3{ 0 };

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // это "очень большое число", чтобы гарантированно сбросить весь буфер до \n.

    std::cout << "Введите свое ФИО через пробел: ";
    std::getline(std::cin, full_name);

    std::cout << "Введите 3 оценки через пробел (целые числа): ";
    std::cin >> est_1 >> est_2 >> est_3;

    double average_score = (est_1 + est_2 + est_3) / 3.0;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\n+-------------------------------------------+\n";
    std::cout << "| Студент: " << std::setw(35) << std::left << full_name << "|\n";
    std::cout << "| Оценки: "
              << std::setw(10) << est_1
              << std::setw(10) << est_2
              << std::setw(10) << est_3 << "|\n";
    std::cout << "| Средний балл: " << std::setw(28) << average_score << "|\n";
    std::cout << "+-------------------------------------------+\n";


    // ЗАДАНИЕ №3

    std::string stroke_1{};
    std::cout << "Введите любую строку #1: ";
    std::getline(std::cin, stroke_1);

    std::string stroke_2{};
    std::cout << "Введите любую строку #2: ";
    std::getline(std::cin, stroke_2);

    std::cout << "Количество символов строки #1: " << stroke_1.length() << "\n";
    std::cout << "Количество символов строки #2: " << stroke_2.length() << "\n";
    std::cout << stroke_1 << " > " << stroke_2 << ": " << bool{ stroke_1 > stroke_2 } << "\n";
    std::cout << "Строки равны: " << bool{ stroke_1 == stroke_2 } << "\n";

    return 0;
}