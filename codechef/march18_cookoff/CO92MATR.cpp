#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	int n,m;
	cin>>t;
	int mn;
	int x1,x2,x;
	while(t--)
	{
		mn=1000000000+8;;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]!=-1)
					mn=min(mn,a[i][j]);
			}
		}
		if(a[0][0]==-1)
			a[0][0]=mn;
		bool flag=true;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				x1=i==0?mn:a[i-1][j];
				x2=j==0?mn:a[i][j-1];
				x=max(x1,x2);
				if(a[i][j]==-1)
				{
					a[i][j]=x;
				}
				else if(a[i][j]<x){
					flag=false;
				}
			}
		}

		if(flag)
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
		else 
			cout<<-1<<endl;


	}
	return 0;
}