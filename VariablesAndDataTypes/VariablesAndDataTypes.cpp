#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    std::cout << "Задание №1\n";
    int a{ 52 };
    double b{ 2.5623 };
    char c{ 'A' };
    bool d{ true };
    float e{ 7.1 };

    std::cout << "Переменная 'a' типа int = " << a << std::endl;
    std::cout << "Переменная 'b' типа double = " << b << std::endl;
    std::cout << "Переменная 'c' типа char = " << c << std::endl;
    std::cout << "Переменная 'd' типа bool = " << d << std::endl;
    std::cout << "Переменная 'e' типа float = " << e << std::endl;

    std::cout << "Задание №2\n";

    const double LIGHT_SPEED{ 299792458 };
    double meters{ 0 };
    std::cout << "Введите расстояние в метрах: ";
    std::cin >> meters;
    double result = meters / LIGHT_SPEED;
    std::cout << "\nЗа " << result << " секунд свет пройдет расстояние в " << meters << " метров." << std::endl;

    std::cout << "\nЗадание №3\n";
    std::cout << "Размер типа данных short равен " << sizeof(short) << " байт" << std::endl;
    std::cout << "Размер типа данных int равен " << sizeof(int) << " байт" << std::endl;
    std::cout << "Размер типа данных char равен " << sizeof(char) << " байт" << std::endl;
    std::cout << "Размер типа данных double равен " << sizeof(double) << " байт" << std::endl;
    std::cout << "Размер типа данных bool равен " << sizeof(bool) << " байт" << std::endl;
    std::cout << "Размер типа данных float равен " << sizeof(float) << " байт" << std::endl;
    std::cout << "Размер типа данных long равен " << sizeof(long) << " байт" << std::endl;
    std::cout << "Размер типа данных long long равен " << sizeof(long long) << " байт" << std::endl;


    std::cout << "\nСамый маленький размер у char и bool: 1 байт\n";
    std::cout << "Самый большой размер у double и long long: 8 байт\n";

    return 0;
}
