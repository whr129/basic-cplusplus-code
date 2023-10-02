#include <iostream>
using namespace std;
int main()
{
	long long a[22][22],m,n,p,q;
	cin >> m >> n >> p >> q;
	for(int i=0;i<=21;i++)
		for(int j=0;j<=21;j++)
			a[i][j] = 0;
	a[0][0]=1;
	//cout<<a[0][0]<<endl;
	for(int i=0;i<=m;i++)
	{
		//cout<<a[0][0];
		for(int j=0;j<=n;j++)
			{
				if((i==p-1&&j==q-2)||(i==p+1&&j==q-2)||(i==p-1&&j==q+2)||(i==p+1&&j==q+2)||(i==p-2&&j==q-1)||(i==p-2&&j==q+1)||(i==p+2&&j==q-1)||(i==p+2&&j==q+1)||(i==p&&j==q))
				{
					a[i][j] = 0;
					continue;
				}	
				//cout<<a[0][0];
				if(i==0 && j!=0)
				{
					//cout<<a[0][0];
					a[i][j] = a[i][j-1];
					//cout<<a[i][j]<<' ';
					continue;
				} 
				if(j==0&&i!=0)
				{
					a[i][j] = a[i-1][j];
					//cout<<a[i][j]<<' ';
					continue;
				} 
				if(i>=1&&j>=1) a[i][j]=a[i-1][j]+a[i][j-1];
				//out<<a[i][j]<<' ';
			}
		//cout<<endl;
	}	
	cout << a[m][n];
}