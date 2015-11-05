#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter number 1:" << endl;
    cin >> a;
    cout << "Enter number 2:" << endl;
    cin >> b;

    char c;
    cout << "Enter symbol:" << endl;
    cin >> c;

    switch(c){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"NO";
    }

    return 0;
}
