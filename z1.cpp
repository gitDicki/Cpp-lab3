#include <iostream>
#include <limits>
#include <string>
#include "Point.cpp"

int correct_input(const std::string& prompt) {
    int value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            std::cout << "Ошибка ввода. Ожидалось целое число." << std::endl;
            std::cin.clear();
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
    }
}

Point create_point() {
    Point point;
    point.x = correct_input("Введите x:");
    point.y = correct_input("Введите y:");
    return point;
}

int main(){
    Point point1, point2, point3;

    point1 = create_point();
    std::cout << point1.print_coordinates() << std::endl;

    point2 = create_point();
    std::cout << point2.print_coordinates() << std::endl;

    point3 = create_point();
    std::cout << point3.print_coordinates() << std::endl;
}