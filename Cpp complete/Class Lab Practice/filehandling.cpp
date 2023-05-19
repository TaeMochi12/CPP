#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char arr[100];
    cout << "Enter name & age:";
    cin.getline(arr, 100);      // read entire line & store into an array
    ofstream myfile("xyz.txt"); // create..o is for writing into a file..stream is datatype..myflie is var of datatype..
    myfile << arr;
    myfile.close();
    cout << "File write operation done successfully!" << endl;
    ifstream obj("xyz.txt");
    obj.getline(arr, 100);
    cout << "Array content:" << endl << arr << endl;
    cout << "File read operation completed succesfully!" << endl;
    obj.close();
    return 0;
}
