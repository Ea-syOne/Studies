#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, a, b, i;

    cin >> n;
    if ( n < 1 || n > 1000000 ) return -1;

    for ( i = 0; i < n; i++ )
    {
        cin >> a >> b;
        if ( a < 1 || b < 1 || a > 1000 ||b > 1000 ) return -1;
        cout << a + b << '\n';
    }

    return 0;
}
