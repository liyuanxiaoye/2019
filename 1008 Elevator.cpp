#include<iostream>
using namespace std;
int main() 
{
	int n,a,now=0,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a>now){
			sum+=(a-now)*6;
		}
		else
		sum+=(now-a)*4;
		sum+=5;
		now=a;
	}
	cout<<sum;
	return 0;
}
