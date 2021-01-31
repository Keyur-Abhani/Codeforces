#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int n;
vector<int>v{1,2,3};
vector<int>subset;
void generate(int start)
{
	if(start==n)
	{
		for(auto x:subset)
			cout<<x<<" ";
		cout<<endl;
		return;
	}
	generate(start+1);

	subset.push_back(v[start]);

	generate(start+1);

	subset.pop_back();
	return;
}
void generateUsingBit()
{
	for(int set=0;set<(1<<n);set++)
	{
		for(int i=0;i<n;i++)
		{
			if((1<<i)&set)
				cout<<v[i]<<" ";

		}
		cout<<endl;
	}
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	n=v.size();

	generateUsingBit();

}
