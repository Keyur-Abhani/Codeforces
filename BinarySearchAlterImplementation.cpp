#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	vector<int>v {1,2,3,4,4,4,4,4,5,6,6,7};

	int n=v.size();


	int k=0;

	int num=8;
	for(int jump=n/2;jump>=1;jump/=2)
	{
		while(k+jump<n && v[k+jump]<=num)
			k+=jump;
	}
    

    // if a Number not found then K will point to last index of array
	if(v[k]==num)
		cout<<"num :"<<num<<"found at index: "<<k<<endl;
}
