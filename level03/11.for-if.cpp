#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, x, y, i;
    cin >> n >> x;

	// cout 버퍼가 다 차지 않을 것 또는 입력을 한 줄에 한 번에 하는 것을 가정 시 공간 아낄 수 있음.  
    for ( i = 0; i < n; i++ )
    {
        cin >> y;
        if ( y < x ) cout << y << " ";
    }

    return 0;
}
