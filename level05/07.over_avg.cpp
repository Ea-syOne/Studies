#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, i, j, stds, score, total, over;
    float avg;
    cin >> n;

    float* over_avg;
    int* scores;
    if ( ( over_avg = (float*)malloc(sizeof(int) * n) ) == NULL ) return -1;

    for ( i = 0; i < n; i++ )
    {
        cin >> stds;
        total = 0;
        if ( ( scores = (int*)malloc(sizeof(int) * stds) ) == NULL ) return -1;

        for ( j = 0; j < stds; j++ )
        {
            cin >> score;
            if ( score < 0 || score > 100 ) return -1;
            total += score;
            scores[j] = score;
        }
        avg = (float) total / stds;

        over = 0;
        for ( j = 0; j < stds; j++ )
        {
            if ( scores[j] > avg ) over++;
        }
        over_avg[i] = (float)over / stds * 100;

        free(scores);
    }

    for ( i = 0; i < n; i++ )
    {
        cout << setprecision(3) << fixed << over_avg[i] << "%\n";
    }

    free(over_avg);
    return 0;
}
