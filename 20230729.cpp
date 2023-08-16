#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	for(int i = 1; i <= a; i ++)
	{
		string line = to_string(i);
		int sum = 0;
		for(int i = 0; i < line.size(); i ++)
			sum += (line[i] - '0') * (line[i] - '0');
		if(sum ==b) cnt ++;
	}
	cout << cnt << endl;
	return 0;
}