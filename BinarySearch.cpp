#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	vector<int>v {1,2,3,4,4,4,5,6,6,7};

	// find whether given number exists or not in sorted Array 


	//Binary search ??? 

	// Why don't you use c++ Library 


	int num=9;

	int index=lower_bound(v.begin(),v.end(),num)-v.begin();

	cout<<index<<endl;

	if(index<v.size()  && v[index]==num)
		cout<<"Yes"<<endl;
	cout<<num<<endl;

	// how to find frequecy of number

	int freq=upper_bound(v.begin(),v.end(),num)-lower_bound(v.begin(),v.end(),num);

	cout<<"Freq of number is :"<<freq<<endl;



	// Important All works only in sorted Array 
}
