#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, x, y, i;
    cin >> n >> x;

	// cout ���۰� �� ���� ���� �� �Ǵ� �Է��� �� �ٿ� �� ���� �ϴ� ���� ���� �� ���� �Ƴ� �� ����.  
    for ( i = 0; i < n; i++ )
    {
        cin >> y;
        if ( y < x ) cout << y << " ";
    }

    return 0;
}
