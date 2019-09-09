#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	float a,b,c,sum=1,maxn=0;
	for(int i=0;i<3;i++)
	{
		cin>>a>>b>>c;
		maxn=max(max(a,b),c);
		if(maxn==a)
			cout<<"W"<<" ";
		else if(maxn==b)
			cout<<"T"<<" ";
		else
			cout<<"L"<<" ";
		sum=sum*maxn;
	}
	printf("%.2f",(sum*0.65-1)*2);
	return 0;
}
