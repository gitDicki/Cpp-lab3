#include "Line.cpp"

Line change(Line line1, Line line2){
    Line line;
    line.set_line(line1.get_begin().x, line1.get_begin().y, line2.get_end().x, line2.get_end().y);
    return line;
}


int main(){
    Line line1;
    line1.set_line(1, 3, 23, 8);
    cout << line1.print_line() << endl;

    Line line2;
    line2.set_line(5, 10, 25, 10);
    cout << line2.print_line() << endl;

    Line line3;
    line3 = change(line1, line2);
    cout << line3.print_line() << endl;
} 