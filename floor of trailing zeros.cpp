#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int res=0;
	if(n>=5)
	{
	
	for(int i=5;i<=n;i=i*5)
	{
		//res++;
		res=res+n/i;
	}
	cout<<res<<endl;
}
else
{
	cout<<res<<endl;
}
}
