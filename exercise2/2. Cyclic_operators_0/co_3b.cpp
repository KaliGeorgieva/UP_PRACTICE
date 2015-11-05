#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter number:" << endl;
    cin >> number;

    if(number < 10000){
        for(int i=0; i<number; i++){
            cout << i << endl;
        }
    }

    return 0;
}
