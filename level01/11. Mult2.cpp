#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a, b;
    cin >> a >> b;
    if ( a < 1 || a > 999 || b < 1 || b > 999) return -1;

    cout << a * ( b % 10 ) << endl // 1�� �ڸ�
        << a * ( ( b / 10 ) % 10 ) << endl // 10�� �ڸ�. 10���� ���� ���� 10���� ���� ������.
        << a * ( b / 100 ) << endl // 100�� �ڸ�
        << a * b << endl; // ���

    return 0;
}
