#include <iostream>

int main()
{
    // ЗАДАНИЕ 1
    int age{0};
    std::cout << "ЗАДАНИЕ №1\n\n";

    std::cout << "Введите свой возраст: ";
    std::cin >> age;

    if ((age < 1) || (age >= 120))
    {
        std::cout << "Ты серьезно?\n";
    }
    else if (age < 12)
    {
        std::cout << "Ребенок\n";
    }
    else if (age < 18)
    {
        std::cout << "Подросток\n";
    }
    else
    {
        std::cout << "Взрослый\n";
    }
    
    // ЗАДАНИЕ 2

    int score{0};
    std::cout << "\nЗадание №2\n";
    std::cout << "Введите числовую оценку (0 - 100): ";
    std::cin >> score;

    if (score >= 90 && score <= 100)
    {
        std::cout << "A\n";
    }
    else if (score >= 80 && score < 90)
    {
        std::cout << "B\n";
    }
    else if (score >= 70 && score < 80)
    {
        std::cout << "C\n";
    }
    else if (score >= 60 && score < 70)
    {
        std::cout << "D\n";
    }
    else if (score < 60 && score >= 0)
    {
        std::cout << "F\n";
    }
    else
    {
        std::cout << "Ошибка: оценка должна быть от 0 до 100!";
    }

    //ЗАДАНИЕ 3

    char sym{};
    std::cout << "\nЗАДАНИЕ 3\n";
    std::cout << "Введите любой символ латинского алфавита или цифру от 0 до 9: ";
    std::cin >> sym;

    if (sym >= '0' && sym <= '9')
    {
        std::cout << "Это цифра\n";
    }
    else if (sym >= 'A' && sym <= 'Z')
    {
        std::cout << "Это заглавная буква\n";
    }
    else if (sym >= 'a' && sym <= 'z')
    {
        std::cout << "Это строчная буква\n";
    }
    else
    {
        std::cout << "Все остальное\n";
    }

}