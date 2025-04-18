#include <iostream>
#include <string>
using namespace std;

struct data {
    int age;
    string name;
    string date;
    string id;
}info;

int main()
{
    cout << "enter your name :";
    cin >> info.name;
    cout << "enter your id :";
    cin >> info.id;
    cout << "enter your date :";
    cin >> info.date;
    cout << "enter your age :";
    cin >> info.age;
    system("clear");
    cout << "your information is : " << endl;    
    cout << "your name is : " << info.name << endl;
    cout << "your id is : " << info.id << endl;
    cout << "your date is : " << info.date << endl;
    cout << "your age is : " << info.age << endl;
    return 0;
}