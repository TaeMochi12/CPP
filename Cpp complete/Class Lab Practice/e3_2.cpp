#include <iostream>
using namespace std;

class hall {

string name;
int seatno;
static int count;

public:
    void set_seat(void);
    void get_name(void);
    void disp_data(void);
    static void disp_count(void);

}p[50];

void hall::set_seat(void){

seatno = ++count;

}

void hall::get_name(void){

cout << "Enter the name ";
cin >> name;

}

void hall::disp_count(void){

cout << count;

}

void hall::disp_data(void){

cout << "Name is " << name << endl;
cout << "Seat no. " << seatno << endl;

}


int hall::count;

int main(){


int availbale_seat = 50;
int i = 0;
while(true){
    if(!availbale_seat){
       cout << "No seats available " << endl;
       break;
    }

    cout << "Enter a option \n 1 -> Book  table \n 2 -> get data of a table \n 3-> exit" << endl;
    int o ;
    cin >> o;
    switch(o){

    case 1: break;
    case 2: cout << "Enter table no. ";
            int table_no;
            cin >> table_no;
            if(table_no <= (50-availbale_seat)){
                p[table_no-1].disp_data();
            }else{
            cout << "Seat is not booked yet !" << endl;
            }
            continue;
    case 3: cout << "Available seats are " << availbale_seat;
            exit(0);
    }
    p[i].get_name();
    p[i].set_seat();
    p[i].disp_data();
    i++;
    availbale_seat--;

}

return 0;

}

