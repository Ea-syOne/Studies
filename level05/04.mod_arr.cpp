#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int x, res, i;

    int* remain;
    if ( ( remain = (int*)calloc(42, sizeof(int)) ) == NULL ) return -1;

    for ( i = 0; i < 10; i++ )
    {
        cin >> x;
        remain[x % 42] += 1;
    }

    res = 0;
    for ( i = 0; i < 42; i++ )
    {
        if ( remain[i] > 0 )
        {
            res++;
        }
    }
    cout << res;

    free(remain);
    return 0;
}
