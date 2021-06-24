#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    cin >> a >> b;
    if ( a < 1 || b > 9 ) return -1;
    cout << setprecision(9) << fixed << (double) a / b << endl;

    return 0;
}