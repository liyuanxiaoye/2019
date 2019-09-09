#include<iostream>
#define inf 0x3f3f3f3f
using namespace std;
struct stu{
	char num[16];
	int sin,sout;
}s[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int h,m,sec;
		scanf("%s",s[i].num);
		scanf("%d:%d:%d",&h,&m,&sec);
		s[i].sin=h*3600+m*60+sec;
		scanf("%d:%d:%d",&h,&m,&sec);
		s[i].sout=h*3600+m*60+sec;
	}
	int minn=inf,maxn=0,minp=0,maxp=0;
	for(int i=0;i<n;i++)
	{
		if(minn>s[i].sin)
		{
			minn=s[i].sin;
			minp=i;
		}
		if(maxn<s[i].sout)
		{
			maxn=s[i].sout;
			maxp=i;
		}
	}
	cout<<s[minp].num<<" "<<s[maxp].num;
	return 0;
}
