#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;
    while ( true )
    {
        cin >> a >> b;
        if ( cin.eof() ) // if cin.eof == true
            break;

        cout << a + b << '\n';
    }
    return 0;
}
