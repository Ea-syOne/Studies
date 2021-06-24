#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n;
    cin >> n;

    if ( n < 1 || n > 9 ) return -1;

    for(int i = 1; i < 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
