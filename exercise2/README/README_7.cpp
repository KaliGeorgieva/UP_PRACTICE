#include <iostream>

using namespace std;

int main()
{
    int number, fact=1;

    cout << "Enter number:" << endl;
    cin >> number;

    for(int i=2; i<=number;i++){
        fact*=i;
    }

    cout << number << "!=" << fact << endl;

    return 0;
}
