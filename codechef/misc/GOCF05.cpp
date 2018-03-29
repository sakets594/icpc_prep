//eight modulus

#include <iostream>
long long mod=1000000000+7;
using namespace std;
int main()
{


  int n,k;
  string str;
  k=8;
  cin>>n;
  //cin>>k;
  long long ways[k][n+1];
  /*
	ways[j][i] shows number of ways remainder j can be obtained by using string upto i position
  */
  for(int j=0;j<k;j++)
  	for(int i=0;i<=n;i++)
  		ways[j][i]=0;
  cin>>str;
  
  for(int i=1;i<=n;i++){
  		
		ways[(str[i-1]-'0')%k][i]++;//single digit

  		for(int j=0;j<k;j++)
  			ways[j][i]+=ways[j][i-1];//previous possible ones
		for(int j=0;j<k;j++)
			{
				ways[(j*10+(str[i-1]))%k][i]+=ways[j][i-1];//previous + current digit
			}

		for(int j=0;j<k;j++)
			ways[j][i]%=mod;
		
  	}

  	//for(int i=0;i<k;i++){
  	//	for(int j=0;j<=n;j++)
  	//		cout<<ways[i][j]<<" ";
  	//	cout<<endl;
  	//}
  	cout<<ways[0][n];
}
