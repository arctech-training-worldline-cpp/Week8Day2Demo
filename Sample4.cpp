#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // int p = cout.precision(3);
    // cout << "Previous precesion : " << p << endl;
    // p = cout.precision(4);
    // cout << "New precesion : " << p << endl;

    
    cout << setw(10) << setiosflags(ios::left) << 123 << endl;
    
    return 0;
}