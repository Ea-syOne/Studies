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
		// data�� 10���� ���� ������ = �� �ڸ����� ��. 
		digit = data % 10;
		dn += digit;

		//data�� �Ź� 10���� ���� ���� �ڸ����� ����.
		data = data / 10;
	}

	return dn;
}

int main(int argc, char* argv[])
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	/* 
	����� ���ϰ� �ϱ� ���� v�� ũ�⸦ 1 �÷� 10001�� ����.
	v�� ũ�⸦ �÷� �޸𸮿��� ���� �ս��� ������, �Ź� i���� �������� �ʾ� ���� ���鿡�� �̵�.
	*/
	vector<int> v(10001, 0);	
	int next;

	/*
	v[i] == 0 -> ó�� �����ϰ� �Ǵ� ��. 
	v[i] == 1 -> ���� �ѹ�. ó�� �����ϱ� ������ �ٸ� ���� d(n)���� ���ٵ��� �ʾ���.
	  ���� ������ �����ϱ� ������ �� ��� Ȯ���� ���� �ѹ���(ū ���� d(n)�� ���� ���� �� �� ����).
    v[i] == -1 -> �ٸ� ���� d(n)���� ���ٵ� �Լ�. ���� �ѹ��� �� �� ����. 
	  ���� v[next]--;�� ���� �� ��� �� ���� d(n)�� �����ϴ��� Ȯ�� ����.
	*/
	for ( int i = 1; i < 10001; i++ )
	{
		if ( v[i] == 0 )
		{
			v[i] = 1;
			next = d(i);
			// ���� ���� ��� d(n)�� üũ. 
			while ( next < 10001 )
			{
				if(v[next] != 1) v[next] = -1;
				next = d(next);
			}
		}
	}

	for ( int j = 1; j < 10001; j++ )
	{
		// ���� �ѹ����� ����ϰ� ��.
		if ( v[j] == 1 )
			cout << j << '\n';
	}
	return 0;
}
