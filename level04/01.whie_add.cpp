#include<iostream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;
    string res = "";
    cin >> a >> b;
    while ( a != 0 && b != 0 )
    {
        res += to_string(a + b);
        res += '\n';
        cin >> a >> b;
    }
    cout << res;
    return 0;
}
