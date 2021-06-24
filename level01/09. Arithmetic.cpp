#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    cin >> a >> b;
    if ( a < 1 || b > 10000 ) return -1;
    cout << a + b << endl << a - b << endl << a * b << endl
        << a / b << endl << a % b << endl;

    return 0;
}
