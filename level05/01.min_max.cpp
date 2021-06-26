#include<iostream>

using namespace std;

#define MIN_BOUND -1000001
#define MAX_BOUND 1000001

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, x;
    int min = MAX_BOUND;
    int max = MIN_BOUND;
    cin >> n;

    for ( int i = 0; i < n; i++ )
    {
        cin >> x;
        if ( min > x ) min = x;
        if ( max < x ) max = x;
    }

    cout << min << " " << max;
    return 0;
}
