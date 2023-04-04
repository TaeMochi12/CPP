#include<iostream>
using namespace std ;
class dining
{
private:
char name[30];
int seat;
int choice;
int option;
public:
int AllotSeat();

};
int dining:: AllotSeat()
{
    int arr[50];
dining obj;
obj.seat=1;
cout<<"Enter an option"<<endl;
cout<<"1-> Book Table"<<endl;
cout<<"2-> Get data of a table"<<endl;
cout<<"3-> Exit"<<endl;
cin>>obj.option;
switch(obj.option)
{
case 1: 
cout<<"Enter name:";
cin>>obj.name;
cout<<"Name is "<<obj.name;
cout<<"Seat no. is "<<obj.seat;

break;
case 2:
cout<<"Enter name:";
cin>>obj.name;
cout<<"Name is "<<obj.name;
cout<<"Enter seat no. :";
cin>>obj.choice;
if(obj.choice==obj.seat)
{
    cout<<"Seat No. is: "<<obj.choice;
}
else if(obj.choice>obj.seat)
{
    cout<<"Seat no. "<<obj.choice<<" "<<"is not booked yet!"<<endl;
}
else if(obj.choice<obj.seat)
{
    cout<<"This seat is already booked!";
}
break;
case 3:
cout<<"Exit"<<endl;
cout<<"Remaining seats are "<<(50-obj.seat);
}
obj.seat++;
}

int main() {
    dining obj1,obj2,obj3;
    obj1.AllotSeat();
    obj1.AllotSeat();
    obj1.AllotSeat();
    obj2.AllotSeat();
    obj2.AllotSeat();
    obj3.AllotSeat();


    return 0 ;
}