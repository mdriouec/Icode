#include <iostream>

using namespace std;


int main()
{
    int x = 10;
    int& y = x;
    y = 20;
    cout << "x = "<< x << "y = " << y << endl;
    return 0;
}