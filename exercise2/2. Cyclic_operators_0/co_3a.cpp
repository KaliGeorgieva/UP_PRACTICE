#include <iostream>

using namespace std;

int main()
{
    int number, sum=0;

    cout << "Enter number" << endl;
    cin >> number;

    if(number<10000){
        for(int i=0; i<=number; i++){
            sum+=i*i;
        }
        cout << sum << endl;
    }

    return 0;
}
