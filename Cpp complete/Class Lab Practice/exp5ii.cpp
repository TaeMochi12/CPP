#include <iostream>
using namespace std;
class student
{
public:
    int uid;
    void getuid()
    {
        cout << "Enter UID:";
        cin >> uid;
    }
    void putuid()
    {
        cout << "UID:" << uid << endl;
    }
};
class test :virtual public student
{
public:
    int test_marks;
    void getmarks()
    {
        cout << "Enter marks obtained in tests:";
        cin >> test_marks;
    }
    void putmarks()
    {
        cout << "Marks obtained in tests:" << test_marks << endl;
    }
};
class sports :virtual public student
{
public:
    int score;
    void getscore()
    {
        cout << "Enter score obtained in sports:";
        cin >> score;
    }
    void putscore()
    {
        cout << "Score obtained in sports:" << score << endl;
    }
};
class result : public test, public sports
{
public:
    int result;
    void display()
    {
        int result = test_marks + score;
        cout << "UID:" << uid << endl;
        cout << "Test Marks:" << test_marks << endl;
        cout << "Sports score:" << score << endl;
        cout << "Total Marks:" << result << endl;
    }
};

int main()
{
    result r;
    r.getuid();
    r.putuid();
    r.getmarks();
    r.putmarks();
    r.getscore();
    r.putscore();
    r.display();

    return 0;
}