#include<iostream>
using namespace std;
int main()
{
	double a[1001]={0.0},ans[2001]={0.0},y;
	int n1,n2,x,cnt=0;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
	{
		scanf("%d%lf",&x,&y);
		a[x]=y;
	}
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
	{
		scanf("%d%lf",&x,&y);
		for(int j=0;j<1001;j++)
		{
			ans[j+x]+=a[j]*y;
		}
	}
	for(int i=0;i<2001;i++)
		if(ans[i]!=0.0)
			cnt++;
	cout<<cnt;
	for(int i=2000;i>=0;i--)
		if(ans[i]!=0.0)
			printf(" %d %.1f",i,ans[i]);
	return 0;
}
