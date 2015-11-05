#include <iostream>

using namespace std;

int main()
{
    int number, radix;
    cin >> number >> radix;

    int count = 0;
    int copy = number;
    while (copy)
    {
        count += copy % radix;
        copy /= radix;
    }
    cout << count << endl;

    return 0;
}
