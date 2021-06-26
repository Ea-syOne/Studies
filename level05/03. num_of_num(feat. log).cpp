#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c, i, exp, digit, data;

    cin >> a >> b >> c;

    int* nat;
    if ( ( nat = (int*)calloc(10, sizeof(int)) ) == NULL ) return -1;

    data = a * b * c;
    exp = (int)log10(data); // 자릿수를 표현하는 값. 
    while ( exp > -1 )
    {
        // 숫자 값 갱신
        digit = data % 10;
        nat[digit] += 1;

        // 다음 준비
        data = data / 10;
        exp--;
    }

    for ( i = 0; i < 10; i++ )
    {
        cout << nat[i] << '\n';
    }
    
    free(nat);
    return 0;
}
