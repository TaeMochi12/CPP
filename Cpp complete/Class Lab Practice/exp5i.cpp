#include<iostream>
using namespace std ;
class teacher
{
public:
int code;
string name;
string subject;
int pubs;
void getcode()
{
    cout<<"Enter code:";
    cin>>code;
}
void getname()
{
    cout<<"Enter name:";
    cin>>name;
}
void getsub(){
    cout<<"Enter subject:";
    cin>>subject;
}
void getpub(){
    cout<<"Enter publications:";
    cin>>pubs;
}
void displayt();

};
void teacher::displayt()
{
cout<<"Teacher Code:"<<code<<endl;
cout<<"Teacher Name:"<<name<<endl;
cout<<"Teacher Subject:"<<subject<<endl;
cout<<"Teacher Publications:"<<pubs<<endl;
}
class officer:public teacher{
public:
char grade;
void getgrade()
{
    cout<<"Enter grade";
    cin>>grade;
    
}
void displayo();
};
void officer::displayo()
{
cout<<"Officer Code:"<<code<<endl;
cout<<"Officer Name:"<<name<<endl;
cout<<"Officer Grade:"<<grade<<endl;

}
class typist:public teacher{
public:
int speed;
int dw;
void getspeed()
{
    cout<<"Enter speed:";
    cin>>speed;
}
void getdw()
{
    cout<<"Enter daily wages:";
    cin>>dw;
}
void displayty();

};
void typist::displayty()
{
cout<<"Typist Code:"<<code<<endl;
cout<<"Typist Name:"<<name<<endl;
cout<<"Typist Speed:"<<speed<<endl;
cout<<"Typist Daily wages:"<<dw<<endl;
}

int main() {
    teacher t;
    officer o;
    typist ty;
    t.getname();
    t.getcode();
    t.getsub();
    t.getpub();
    t.displayt();
    o.getcode();
    o.getname();
    o.getgrade();
    o.displayo();
    ty.getcode();
    ty.getname();
    ty.getspeed();
    ty.getdw();
    ty.displayty();

    return 0 ;
}