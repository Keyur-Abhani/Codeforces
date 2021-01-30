#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&v,int left,int right)
{
	int totalSize=right-left+1;

	vector<int>temp(totalSize);

	int mid=(right+left)/2;

	int i=left,j=mid+1;

	int l=0;
	while(i<=mid && j<=right)
	{
		if(v[i]<=v[j])
		{
			temp[l++]=v[i++];
		}
		else
		{
			temp[l++]=v[j++];
		}
	}
	while(i<=mid)
	{
		temp[l++]=v[i++];
	}
	while(j<=right)
	{
		temp[l++]=v[j++];
	}	

	for(int i=left;i<=right;i++)
		v[i]=temp[i-left];

}
void MergeSort(vector<int>&v,int left,int right)
{

	if(left>=right)
		return;

	int mid=(right+left)/2;

	MergeSort(v,left,mid);
	MergeSort(v,mid+1,right);

	Merge(v,left,right);

}
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	int n;
	cin>>n;

	vector<int>v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	
	MergeSort(v,0,n-1);

	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	
	cout<<endl;
}