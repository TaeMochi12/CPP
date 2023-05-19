#include <iostream>
using namespace std;
class staff
{
protected:
    int code;
    char name[20];

public:
    void getstaff(void)

    {
        cout << "

                n
\nEnter code
            : -";
              cin >>
            code;
        cout << "Enter name
            : -";
              cin >>
            name;
    }
    void dispstaff(void)

    {
        cout << "
\nNAME
            : -"<<name;
              cout
             << "
\nCODE
            : -"<<code;
    }
};
class teacher
    : public staff
{
    char sub[20];
    char pub[20];

public:
    void create(void)

    {
        getstaff();
        cout << "Enter Subject
            : -";
              cin >>
            sub;
        cout << "Enter Publication
            : -";
              cin >>
            pub;
    }
    void display(void)

    {
        dispstaff();
        cout << "
\nSUBJECT
            : -"<<sub;
              cout
             << "
\nPUBLICATION
            : -"<<pub;
    }
};
class officer
    : public staff
{
    char grade;

public:
    void create(void)

    {
        getstaff();
        cout << "Enter Grade
            : -";
              cin >>
            grade;
    }