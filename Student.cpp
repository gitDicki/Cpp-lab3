#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Student {
public:
    string name;
    std::vector<int> points;

    string print() {

        string vec;

        for (const auto& num : points) {
            vec += to_string(num) + " "; 
        }

        string line_direction = "Имя: " + name + " " + vec;
        return line_direction;
    }

    void change(int index, int point){
        points[index] = point;
    } 

};

int main(){
    Student student1, student2, student3;
    student1.name = "Вася";
    student1.points.push_back(3);
    student1.points.push_back(4);
    student1.points.push_back(5);
    cout <<student1.print() << endl;

    student2.name = "Петя";
    student2.points = student1.points;
    cout << student2.print() << endl;

    student2.change(0, 5);
    cout << "\nОценки Пети после замены первой оценки" << endl;
    cout << student2.print() << endl;

    student3.name = "Андрей";
    student3.points = student1.points;

    cout << "\n" <<student3.print() << endl;

}