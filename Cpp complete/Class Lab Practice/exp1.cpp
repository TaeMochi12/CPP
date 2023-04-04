#include <iostream>
using namespace std;
int main()
{
    int subjects, total_marks = 0, marks;
    float average;
    cout << "Enter the number of subjects: ";
    cin >> subjects;
    cout << "Enter the marks of the subjects:" << endl;
    for (int i = 0; i < subjects; i++)
    {
        cin >> marks;
        total_marks += marks;
    }
    average = total_marks / subjects;
    cout << "The average marks of the student is: " << average << endl;

    return 0;
}