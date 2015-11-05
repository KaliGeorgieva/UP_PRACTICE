#include <iostream>

using namespace std;

int main()
{
    int k, number, sum=0, br=0;
    double avarage;

    cout << "Enter K:" << endl;
    cin >> k;

    cout << "Enter numbers:" << endl;

    while(sum<=k){
        cin >> number;
        sum+=number;
        br++;
    }

    cout << endl;
    cout << "Sum=" << sum <<endl;
    cout << "Number=" << br <<endl;

    avarage=(double)sum/br;

    cout << "Avarage=" << avarage << endl;

    return 0;
}
