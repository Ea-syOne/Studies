#include<iostream>

using namespace std;

int new_one(int n)
{
    return ( ( n / 10 ) + ( n % 10 ) ) % 10;
}

int new_ten(int n)
{
    return n % 10;
}

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, new_n, count;
    cin >> n;
    if ( n < 0 || n > 99 ) return -1;
    new_n = n;
    count = 0;
    do
    {
        new_n = new_ten(new_n) * 10 + new_one(new_n);
        count++;
    }
    while ( new_n != n );

    cout << count;
    return 0;
}
