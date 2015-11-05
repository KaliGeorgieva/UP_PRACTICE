#include <iostream>

using namespace std;

int main()
{
    char a;

    cout << "Enter symbol:" << endl;

    do {
        cin >> a;
        cout << a;
    }
    while(a!='!');

    return 0;
}
