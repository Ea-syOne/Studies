#include<iostream>

using namespace std;

#define MIN_BOUND 0

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int idx, x;
    int max = MIN_BOUND;

    for ( int i = 1; i < 10; i++ )
    {
        cin >> x;
        if ( max < x )
        {
            max = x;
            idx = i;
        }
    }

    cout << max << "\n" << idx;
    return 0;
}
