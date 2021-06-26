#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, i, score;
    float fakes;    // 가짜 평균의 합.
    int max = 0;
    cin >> n;
    if ( n < 1 || n > 1000 ) return -1;

    int* scores;
    if ( ( scores = (int*)malloc(sizeof(int) * n) ) == NULL ) return -1;

    for ( i = 0; i < n; i++ )
    {
        cin >> score;
        if ( score < 0 || score > 100 ) return -1;
        if ( max < score ) max = score;
        scores[i] = score;
    }

    fakes = 0;
    for ( i = 0; i < n; i++ )
    {
        fakes += (float)scores[i] / max * 100;
    }
    cout << setprecision(2) << fixed << fakes / n;

    free(scores);
    return 0;
}
