/*
Chef is the judge of a competition. There are two players participating in this competition — Alice and Bob.

The competition consists of N races. For each i (1 ≤ i ≤ N), 
Alice finished the i-th race in Ai minutes, while Bob finished it in Bi minutes.
The player with the smallest sum of finish times wins. If this total time is the same for Alice and for Bob, a draw is declared.

The rules of the competition allow each player to choose a race which will not be counted towards their total time. 
That is, Alice may choose an index x and her finish time in the race with this index will be considered zero; 
similarly, Bob may choose an index y and his finish time in the race with this index will be considered zero.
Note that x can be different from y; the index chosen by Alice does not affect Bob's total time or vice versa.

Chef, as the judge, needs to announce the result of the competition. He knows that both Alice and Bob play optimally and will always choose the best option. Please help Chef determine the result
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	int n;
	cin>>t;
	long long a[105],b[105];
	long long s1,s2;
	while(t--)
	{
		s1=s2=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n-1;i++){
			s1+=a[i];
			s2+=b[i];
		}
		//cout<<s1<<" "<<s2<<" ";
		if(s1==s2)
		{
			cout<<"Draw"<<endl;
		}
		else  if(s1<s2)
		{
			cout<<"Alice"<<endl;
		}
		else 
		{
			cout<<"Bob"<<endl;
		}


	}
	return 0;
}
