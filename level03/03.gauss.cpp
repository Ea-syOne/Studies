#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n, res = 0;
    cin >> n;

    if ( n < 1 || n > 10000 ) return -1;

    for ( int i = 1; i < n + 1; i++ )
    {
        res += i;
    }

    cout << res;

    return 0;
}
