#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, i, j;
    cin >> n;
    if ( n < 1 || n > 100 ) return -1;

    for ( i = 1; i < n+1; i++ )
    {
        for ( j = 0; j < i; j++ )
            cout << "*";
        cout << "\n";
    }

    return 0;
}
