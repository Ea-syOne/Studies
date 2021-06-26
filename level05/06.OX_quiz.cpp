#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, i, len, idx, stack, res;
    string ox;
    cin >> n;

    int* scores;
    if ( ( scores = (int*)malloc(sizeof(int) * n) ) == NULL ) return -1;

    for ( i = 0; i < n; i++ )
    {
        cin >> ox;
        stack = 0;
        res = 0;
        len = ox.length();
        if ( len < 1 || len > 80 ) return -1;

        for(idx = 0; idx< len; idx++ )
        {
            if ( ox[idx] == 'O' )
            {
                res += ++stack;
            }
            else
            {
                stack = 0;
            }
        }
        scores[i] = res;
    }

    for ( i = 0; i < n; i++ )
    {
        cout << scores[i] << '\n';
    }

    free(scores);
    return 0;
}
