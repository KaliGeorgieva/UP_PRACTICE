#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i, p, r, z;

    cout << "Enter number(1-triangle, 2-square, 3-circle, 4-rectangle, 5-trapeze" << endl;
    cin>> z;

    switch(z){
        case 1: cout << "Enter a:" << endl;
            cin >> a;
            cout << "Enter b:" << endl;
            cin >> b;
            cout << "Enter c:" << endl;
            cin >> c;
            p=a+b+c;
            cout << "S=" << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
            break;
        case 2: cout << "Enter a:" << endl;
            cin >> d;
            cout << "S=" << d*d << endl;
        case 3: cout << "Enter r:" << endl;
            cin >> r;
            cout << "S=" << r*r*22/7 << endl;
            break;
        case 4: cout << "Enter a:" << endl;
            cin >> e;
            cout << "Enter b:" << endl;
            cin >> f;
            cout << "S=" << e*f << endl;
            break;
        case 5: cout << "Enter a:" << endl;
            cin >> g;
            cout << "Enter b:" << endl;
            cin >> h;
            cout << "Enter h:" << endl;
            cin >> i;
            cout << "S=" << (h+g)*i/2 << endl;
            break;
        default: cout << "NO";
    }

    return 0;
}
