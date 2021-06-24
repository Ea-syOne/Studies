#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, i, j;
    cin >> n;
    string s = "";
    if ( n < 1 || n > 100 ) return -1;

    for ( i = 1; i < n+1; i++ )
    {
        cout.width(n);
        cout.right;
        for ( j = 0; j < i; j++ )
            s += "*";
        cout << s << "\n";
        s = "";
    }

    return 0;
}
