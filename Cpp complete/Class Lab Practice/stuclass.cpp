#include<iostream>
using namespace std ;
class Employee{
char Name[25];
int age;
char desg[8];
long salary;
public:
void getdata();
void putdata();
};

void Employee::getdata()
{
    cout<<"Enter name:";
    cin>>Name;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter designation:";
    cin>>desg;
    cout<<"Enter salary:";
    cin>>salary;

}

void Employee::putdata()
{
    cout<<"NAME:"<<Name<<endl;
    cout<<"AGE:"<<age<<endl;
    cout<<"DESIGNATION:"<<desg<<endl;
    cout<<"SALARY:"<<salary<<endl;
}

int main() {
    Employee e[5];
    for(int i=0;i<3;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<3;i++)
    {
        e[i].putdata();
    }
    return 0 ;
}
