/*
Aditya Patra
Color Class Assignment

Purpose:
Create a Color class that has as its private member variables three integers representing the RBG values

Code normal setter & getter member functions. Also code a member print() method to print the object data.

In main(), create several Color objects, populate them with data, and output their values to the console in neatly-formatted output using the object's print() method.
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;
    public:
        Color(int r, int g, int b) {
            red = r;
            blue = b;
            green = g;
        }
        int getRed() {
            return red;
        }
        int getBlue() {
            return blue;
        }
        int getGreen() {
            return green;
        }
        void setRed(int val) {
            red = val;
        }
        void setBlue(int val) {
            blue = val;
        }
        void setGreen(int val) {
            green = val;
        }
        void print() {
            cout << setw(3) << setfill(0) << red << "::";
            cout << setw(3) << setfill(0) << green << "::";
            cout << setw(3) << setfill(0) << blue << "\n";
        }
};
int main() {
    Color color1 = Color(42, 32, 10);
    color1.print();
}
