#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int year;
    cin >> year;

    if ( year < 1 || year > 4000 ) return -1;

    if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) ) cout << 1;
    else cout << 0;
    return 0;
}
