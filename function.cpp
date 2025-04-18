#include <iostream>
#include <string>

using namespace std;
int add(int a,int b)
{
    return a + b;
}
int sub(int a,int b)
{
    return a - b;
}
int pow(int a,int b)
{
    return a * b;
}
float divide(int a,int b)
{
    if (b > 0)
    {
        return a / b;
    }
    else
    exit(0);
}
int main()
{
    int a , b;
    int choice;
    cout << "enter the value of a:";
    cin >> a;
    cout << "\n";
    cout << "enter the value of b:";
    cin >> b;
    cout << "1.addition\n2.subtraction\n3.multiplication\n4.division\n";
    cout << "enter your choice";
    cin >> choice;
    system("clear");
    switch (choice)
    {
    case 1:
        cout << "addition is" << add(a, b);
        break;
    case 2:
        cout << "subtraction is" << sub(a, b);
        break;
    case 3:
        cout << "multiplication is" << pow(a, b);
        break;
    case 4:
        cout << "division is" << divide(a, b);
        break;
    default:
        cout << "invalid choice";
        break;
    }
    cout << "\n";
    return 0;
}