#include<iostream>

using namespace std;

int bound(int input)
{
    if ( input < 2 || input > 10000 ) return -1;
    else return 0;
}

int mod(int a, int b)
{
    return a % b;
}

int main(int argc, char* argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if ( bound(a) || bound(b) || bound(c) ) return -1;
    cout << ( a + b ) % c << endl << ( ( a % c ) + ( b % c ) ) % c << endl
        << ( a * b ) % c << endl << ( ( a % c ) * ( b % c ) ) % c << endl;

    return 0;
}
