#include<iostream>
#include<cstring>
using namespace std;
class Student{
    private:
        string name;
        int roll_no;
        float height;
        float weight;
    public:
        Student(string name, int roll_no, float height, float weight){
            this->name = name;
            this->roll_no = roll_no;
            this->height = height;
            this->weight = weight;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll No: " << roll_no << endl;
            cout << "Height: " << height << " cm" << endl;
            cout << "Weight: " << weight << " kg" << endl;
        }
        // Copy Constructor
        Student(const Student &obj){
            name = obj.name;
            roll_no = obj.roll_no;
            height = obj.height;
            weight = obj.weight;
        }
        // Destructor
        ~Student(){
            cout << "Object is destroyed" << endl;
        }
};
int main(){
    // Creating object of the class
    Student s1("Himanshi", 101, 175.0, 68.0);
    // Displaying details of the object
    s1.display();
    // Creating a copy of the object
    Student s2 = s1;
    // Displaying details of the copied object
    s2.display();
    cout<<"My name is Himanshi"<<endl;
    cout<<"I will be an engineer"<<endl;
    return 0;
}
