#include <iostream>

using namespace std;

int main()
{
    int number, a;

    cout << "Enter number:" << endl;
    cin >> number;

    for(int i=0; i<=number; i++){
        a=i*i+3*i;
        cout << a << endl;
    }
    return 0;
}
