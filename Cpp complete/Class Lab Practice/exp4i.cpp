#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length, width;
    public:
        Rectangle() {
            length = 0;
            width = 0;
            cout << "Default constructor called" << endl;
        }
        Rectangle(int l, int w) {
            length = l;
            width = w;
            cout << "Parameterized constructor called" << endl;
        }
        int getLength() {
            return length;
        }
        int getWidth() {
            return width;
        }
        int getArea() {
            return length * width;
        }
        ~Rectangle() {
            cout << "Destructor called" << endl;
        }
};

int main() {
    Rectangle obj1;
    Rectangle obj2(5, 10);
    cout << "Length of obj1 = " << obj1.getLength() << endl;
    cout << "Width of obj1 = " << obj1.getWidth() << endl;
    cout << "Area of obj1 = " << obj1.getArea() << endl;
    cout << "Length of obj2 = " << obj2.getLength() << endl;
    cout << "Width of obj2 = " << obj2.getWidth() << endl;
    cout << "Area of obj2 = " << obj2.getArea() << endl;
    cout<<"My name is Himanshi"<<endl;
    return 0;
}
