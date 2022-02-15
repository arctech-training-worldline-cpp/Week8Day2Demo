#include <iostream>
using namespace std;

ostream & currency (ostream & output)
{
    output << "Rs ";
    return output;
}



int main()
{
   cout << currency <<33 << endl;

    istream &in = std::cin;
    int x;
    in.operator>>(x);
    in>>x;
    return 0;

}