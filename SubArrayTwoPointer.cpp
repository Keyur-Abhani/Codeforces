#include<bits/stdc++.h>
using namespace std;

bool isSubArrayFound(vector<int>v,int sum)
{
	int n=v.size();

	int left=0,right=0;

	int curSum=v[0];
	while(left<=right && right<n)
	{
		while(curSum>sum && left<right)
		{
			curSum-=v[left];
			left++;
		}
		if(curSum==sum)
			return true;
		right++;
		curSum+=v[right];
	}
	return false;
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	vector<int>v {1,2,3,4,4,4,5,6,6,7};


	if(isSubArrayFound(v,7))
		cout<<"Yes SubArray Found"<<endl;
	else
		cout<<"No SubArray Found"<<endl;
}
