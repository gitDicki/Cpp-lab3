#include <iostream>
#include <string>
#include <cmath>
#include "Point.cpp"

using namespace std;

class Line {
private:
    Point begin;
    Point end;

public:
    void set_line (int x1, int y1, int x2, int y2){
        
        Line::begin.set_coordinates(x1, y1);
        Line::end.set_coordinates(x2, y2);

    }

    string print_line() {
        string line_direction = "Line from " + Line::begin.print_coordinates() 
            + " to " + Line::end.print_coordinates();
        return line_direction;
    }

    int length (){
        return std::sqrt(((Line::end.x - Line::begin.x) * (Line::end.x - Line::begin.x)) + 
            ((Line::end.y - Line::begin.y) * (Line::end.y - Line::begin.y)));

    }

    Point& get_begin() {
        return begin;
    }

    Point& get_end() {
        return end;
    }

    void set_begin(const Point& p) {
        begin = p;
    }

    void set_end(const Point& p) {
        end = p;
    }
};