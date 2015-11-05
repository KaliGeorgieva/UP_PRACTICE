#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;

    cout << "Enter x:" << endl;
    cin >> x;

    int y;
    cout << "Enter number (1: y=x-5, 2: y=sinx, 3: y=cosx, 4: y=exp(x)):" << endl;
    cin >> y;

    switch(y){
        case 1: cout << "y=" << x-5;
        break;
        case 2: cout << "y=" << sin(x);
        break;
        case 3: cout << "y=" << cos(x);
        break;
        case 4: cout << "y=" << exp(x);
        break;
        default: cout << "No";
    }

    return 0;
}
