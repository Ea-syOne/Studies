#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n, a, b, i;
    cin >> n;
    if ( n < 1 ) return -1;
    int* as = (int*)malloc(n * sizeof(int));
    int* bs = (int*)malloc(n * sizeof(int));

    for ( i = 0; i < n; i++ )
    {
        cin >> a >> b;
        if ( a < 1 || b > 9 ) return -1;
        as[i] = a;
        bs[i] = b;
    }

    for(i = 0; i < n; i++)
    {
        cout << as[i] + bs[i] << endl;
    }

    return 0;
}
