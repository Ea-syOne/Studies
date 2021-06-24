#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;

    cin >> n;
    if ( n < 1 || n > 100000 ) return -1;

    for ( int i = 1; i < n+1; i++ )
    {
        cout << i << '\n';
    }

    return 0;
}
