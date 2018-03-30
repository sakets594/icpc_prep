//Chef Goes to the Cinema
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	long long n;
	long long f1,f2;
	cin>>t;

	while(t--)
	{
		
		cin>>n;
		long long i=floor((-1.0+sqrt(1.0+8.0*n))/2.0);
		long long i1=i;
		f1=i*(i+1)/2;
		i++;
		f2=i*(i+1)/2;
		i1+=abs(n-f1);
		i+=abs(n-f2);
		cout<<min(i,i1)<<endl;



	}
	return 0;
}
