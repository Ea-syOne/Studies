#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int d(int n)
{
	int dn = n;
	int data = n;
	int digit;
	while ( data > 0 )
	{
		// data를 10으로 나눈 나머지 = 각 자릿수의 값. 
		digit = data % 10;
		dn += digit;

		//data를 매번 10으로 나눠 다음 자릿값을 구함.
		data = data / 10;
	}

	return dn;
}

int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	/* 
	계산을 편하게 하기 위해 v의 크기를 1 늘려 10001로 잡음.
	v의 크기를 늘려 메모리에서 작은 손실을 보지만, 매번 i값을 조정하지 않아 성능 측면에서 이득.
	*/
	vector<int> v(10001, 0);	
	int next;

	/*
	v[i] == 0 -> 처음 접근하게 되는 값. 
	v[i] == 1 -> 셀프 넘버. 처음 접근하기 전까지 다른 수의 d(n)으로 접근되지 않았음.
	  작은 수부터 접근하기 때문에 이 경우 확실한 셀프 넘버임(큰 수의 d(n)이 작은 수가 될 수 없음).
    v[i] == -1 -> 다른 수의 d(n)으로 접근된 함수. 셀프 넘버가 될 수 없음. 
	  만약 v[next]--;와 같이 할 경우 몇 개의 d(n)이 접근하는지 확인 가능.
	*/
	for ( int i = 1; i < 10001; i++ )
	{
		if ( v[i] == 0 )
		{
			v[i] = 1;
			next = d(i);
			// 범위 내의 모든 d(n)을 체크. 
			while ( next < 10001 )
			{
				if(v[next] != 1) v[next] = -1;
				next = d(next);
			}
		}
	}

	for ( int j = 1; j < 10001; j++ )
	{
		// 셀프 넘버만을 출력하게 됨.
		if ( v[j] == 1 )
			cout << j << '\n';
	}
	return 0;
}
