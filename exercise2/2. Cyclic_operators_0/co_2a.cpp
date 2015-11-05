#include <iostream>

using namespace std;

int main()
{
    int number, sum=0;

    cout << "Enter number:" << endl;

    while(sum<=100){
        cin >> number;
        if(number<=30){
        sum+=number;
        cout << sum << endl;}
    }

    return 0;
}
