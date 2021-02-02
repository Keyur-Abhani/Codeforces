#include<bits/stdc++.h>
using namespace std;

const int N=10;

vector<int>v(N);

vector<int>BIT(N);
int getSum(int num)
{
	int sum=0;

	while(num>0)
	{
		sum+=BIT[num];

		num=num-(num&(-num));
	}
	return sum;

}
void update(int pos,int num)
{

	while(pos<N)
	{
		BIT[pos]+=num;

		pos=pos+(pos&(-pos));
	}
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif

	v={INT_MAX,1,3,4,2,5,3,4,2,9};

	BIT.assign(N,0);

	for(int i=1;i<N;i++)
		update(i,v[i]);

	cout<<getSum(9)<<endl;






}
