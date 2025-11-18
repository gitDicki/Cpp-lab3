#include "Line.cpp"


Line change(Line line1, Line line2){
    Line line;
    line.set_line(line1.get_begin().x, line1.get_begin().y, line2.get_end().x, line2.get_end().y);
    return line;
}

int main() {
    Line line1, line2, line3;

    line1.set_line(1, 3, 23, 8);
    line2.set_line(5, 10, 25, 10);
    line3 = change(line1, line2);

    cout << line1.print_line() << endl;
    cout << line2.print_line() << endl;
    cout << line3.print_line() << endl;

    line1.set_line(2, 4, 20, 7);
    line2.set_line(10, 10, 30, 10);

    line3 = change(line1, line2);

    cout << "\nПосле изменения 1 и 2 линии:" << endl;
    cout << line1.print_line() << endl;
    cout << line2.print_line() << endl;
    cout << line3.print_line() << endl;

    line1.set_line(0, 0, 1, 0);

    cout << "\nИзменили координаты 1 линии, не изменяя 3:" << endl;
    cout << line1.print_line() << endl;
    cout << line3.print_line() << endl;
}