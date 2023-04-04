#include<iostream>
using namespace std ;
class student{
string name;
int RollNo;
int height;
int weight;
public:
student(string n,int r, int h, int w);
void display();
~student();

};
student::student(string n,int r,int h,int w)
{
    name=n;
    RollNo=r;
    height=h;
    weight=w;
}
void student::display()
{
cout<<"Name:"<<name<<endl<<"Roll No.:"<<RollNo<<endl<<"Height:"<<height<<endl<<"Weight:"<<weight<<endl;
}
student::~student()
{
    cout<<"Destructor is called"<<endl;
}
int main() {
    student s1;
    
    return 0 ;
}