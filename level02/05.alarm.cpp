#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int hour, min;
    cin >> hour >> min;

    if ( hour < 0 || hour > 23 || min < 0 || min > 59 ) return -1;

    min -= 45;
    if ( min > -1 ) cout << hour << " " << min;
    else
    {
        if ( hour > 0 )
            cout << hour - 1 << " " << 60 + min;
        else
            cout << 23 << " " << 60 + min;
    }

    return 0;
}
