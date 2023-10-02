#include <iostream>
using namespace std;
int main()
{
	int carpet[100001][4],n,a,b,g,k,x,y,number = -1,t;
	cin >> n;
	for(int i = 0; i<n ; i++)
		cin >> carpet[i][0] >> carpet[i][1] >> carpet[i][2] >> carpet[i][3];
	cin >> x >> y;
	t = n-1;
	while (t>=0)
	{
		if(x >= carpet[t][0] && x <= carpet[t][0] + carpet[t][2] && y >= carpet[t][1] && y <= carpet[t][1] + carpet[t][3])
		{
			number = t + 1;
			break;
		}
		t--;
	}
	cout << number;
	return 0;
}