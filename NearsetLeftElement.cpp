#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	vector<int>v {1,3,4,2,5,3,4,2};


	vector<int>ans;



	// Nearest Smallest Element


	stack<int>st;

	st.push(v[0]);

	ans.push_back(-1);
	for(int i=1;i<v.size();i++)
	{
		while(st.empty()==false && st.top()>=v[i])
			st.pop();

		if(st.empty()==false)
		{
			ans.push_back(st.top());
		}
		else
		{
			ans.push_back(-1);
		}
		st.push(v[i]);
	}

	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;
}
