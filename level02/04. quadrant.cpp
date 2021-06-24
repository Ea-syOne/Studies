#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b, res;
    cin >> a >> b;

    res = a - b;

    if ( res > 0 ) cout << ">";
    else if ( res == 0 ) cout << "==";
    else cout << "<";

    return 0;
}
