#include <iostream> //it's like include stdio.h in c

using namespace std; //using namespace std; is used to avoid writing std::

int main() //ofc this is the main function
{
    int age; // declare a integer variable
    string name; //in c++ you can use a data type called string to stock more than a charcter "it's like use array in c
    float n;//declare a float variable
    const float pi = 3.14; //const is used to declare a constant variable
    bool isTrue;// declare a boolean variable
    char c; // declare a char variable
    cout << "enter your name :"; //cout is used to print something on the screen
    cin >> name; //cin is used to get input from the user
    cout << "enter your age :";
    cin >> age; //cin is used to get input from the user
    cout << "enter your note :";
    cin >> n; //cin is used to get input from the user
    cout << "enter your lucky alphabet :";
    cin >> c; //cin is used to get input from the user
    cout << "enter your lucky number :";
    cin >> isTrue;
    system("clear");  
    cout << "your name is :" << name <<endl;
    cout << "your age is :" << age <<endl;
    cout << "your note is :" << n <<endl;
    cout << "your lucky alphabet is :" << c <<endl;
    if (isTrue == 1)
    {
        cout <<"\033[32m";
        cout << "you won";
    }
    else if(isTrue == 0)
    {
        cout <<"\033[31m";
        cout <<"you lose";
    }
    cout << "\n";
    return 0;
}
