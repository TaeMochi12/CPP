#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
    int marks;

public:
    Student()
    {
        marks = 0;
    }
    Student(int marks)
    {
        this->marks = marks;
    }

    int giveMarks()
    {
        return marks;
    }
};

int main()
{

    int n;
    int sum = 0;
    cout << "Enter number of students:";
    cin >> n;

    Student *s = new Student[n];
    cout << "Enter marks of students:" << endl;
    for (int i = 0; i < n; i++)
    {
        int marks;
        cin >> marks;

        s[i] = Student(marks);
        sum += s[i].giveMarks();
    }

    cout << "Sum of marks of students:" << sum << endl;

    delete[] s;

    return 0;
}