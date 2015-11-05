#include <iostream>

using namespace std;

int main()
{
    int n, i, previous, preprevious, Fibonaccinumber;

    cout << "Enter n:" << endl;
    cin >> n;

    if(n>=1 && n<=2)
        Fibonaccinumber=1;

    if (n>2){
        previous=preprevious=1;
        for(i=3; i<=n; i++){
            Fibonaccinumber=previous+preprevious;
            preprevious=previous;
            previous=Fibonaccinumber;
        }
    }
    cout << Fibonaccinumber;
    return 0;
}
