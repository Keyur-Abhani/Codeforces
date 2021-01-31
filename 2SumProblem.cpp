#include<bits/stdc++.h>
using namespace std;

int FindpairsCnt(vector<int>v,int sum)
{
	sort(v.begin(),v.end());

	int n=v.size();

	int left=0,right=n-1;

	int cnt=0;
	while(left<right)
	{
		int curSum=v[left]+v[right];

		if(curSum<sum)
		{
			left++;
			
		}
		else if(curSum>sum)
		{
			right--;
			
		}
		else
		{
			left++;

			cnt++; 
		}

	}
	return cnt;
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	vector<int>v {1,2,3,4,4,4,5,6,6,7};

	cout<<"Numbers of pairs found : "<< FindpairsCnt(v,8)<<endl;
}
