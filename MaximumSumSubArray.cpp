#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int>v(n);
	int sum=0,ans=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		sum=max(v[i]+sum,v[i]);
		ans=max(ans,sum);
	}
	cout<<ans<<endl;
}