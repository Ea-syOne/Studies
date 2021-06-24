#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    cin >> a >> b;
    if ( a < 1 || a > 999 || b < 1 || b > 999) return -1;

    cout << a * ( b % 10 ) << endl // 1의 자리
        << a * ( ( b / 10 ) % 10 ) << endl // 10의 자리. 10으로 나눈 값의 10으로 나눈 나머지.
        << a * ( b / 100 ) << endl // 100의 자리
        << a * b << endl; // 결과

    return 0;
}
