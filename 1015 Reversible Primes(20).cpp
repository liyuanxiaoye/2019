#include<cstdio>
#include<cmath>
using namespace std;
bool isprime(int a)
{
	if(a<=1)return false;
	int x=int(sqrt(a*1.0));
	for(int i=2;i<=x;i++)
		if(a%i==0)
			return false;
	return true;
}
int main()
{
	int n,d;
	while(scanf("%d",&n)!=EOF){
		if(n<0) break;
		scanf("%d",&d);
		if(isprime(n)==false)
		{
			printf("No\n");
			continue;
		}
		int a[100],index=0;
		do{
			a[index++]=n%d;
			n=n/d;
		}while(n!=0);
		for(int i=0;i<index;i++)
			n=n*d+a[i];
			printf("%s",isprime(n)?"Yes\n":"No\n");
	}
	return 0;
}
