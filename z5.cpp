#include "Line.cpp"

int main() {
    Line one;
    one.set_line(1, 1, 10, 15);
    cout << one.print_line() << endl;
    cout << "Length line: "<< one.length() << endl; 
}