#include <iostream>
#include <string>

using namespace std;

class Point {
public:
    int x;
    int y;

    string print_coordinates() {
        string coordinates = "{" + to_string(Point::x) + ";" + to_string(Point::y) + "}";
        return coordinates;
    }

    void set_coordinates(int x, int y) {
        Point::x = x;
        Point::y = y;

    }

    void print(){
        cout << print_coordinates() << endl;
    }
};