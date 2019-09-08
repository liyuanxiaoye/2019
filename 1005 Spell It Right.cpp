#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void out(char v)
{
	if(v=='0')
	cout<<"zero";
	else if(v=='1')
	cout<<"one";
	else if(v=='2')
	cout<<"two";
	else if(v=='3')
	cout<<"three";
	else if(v=='4')
	cout<<"four";
	else if(v=='5')
	cout<<"five";
	else if(v=='6')
	cout<<"six";
	else if(v=='7')
	cout<<"seven";
	else if(v=='8')
	cout<<"eight";
	else if(v=='9')
	cout<<"nine";
}
int main()
{
	char a[105];
	char b[50];
	int sum=0;
	scanf("%s",a);
	for(int i=0;a[i];i++)
	{
		sum+=a[i]-'0';
	}
	sprintf(b,"%d",sum);
	out(b[0]);
	for(int i=1;b[i];i++)
	{
		cout<<" ";
		out(b[i]);
	}
	return 0;
}
