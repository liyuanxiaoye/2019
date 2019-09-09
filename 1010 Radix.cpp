#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
long long convert(string n,long long radix)
{
	long long sum=0;
	int index=0,s[11];
	for(int i=n.length()-1;i>=0;i--)
	{
		s[i]=isdigit(n[i])?n[i]-'0':n[i]-'a'+10;
		sum+=s[i]*pow(radix,index++);
	}
	return sum;
}
long long find_result(string n,long long num)
{
	char it=*max_element(n.begin(),n.end());
	long long low=(isdigit(it)?it-'0':it-'a'+10)+1;
	long long high=max(num,low);
	while(low<=high)
	{
		long long mid=(low+high)/2;
		long long t=convert(n,mid);
		if(t<0||t>num)high=mid-1;
		else if(t==num)return mid;
		else low=mid+1;
	}
	return -1;
}
int main()
{
	string n1,n2;
	long long tag,radix=0,result_radix;
	cin>>n1>>n2>>tag>>radix;
	result_radix=tag==1?find_result(n2,convert(n1,radix)):find_result(n1,convert(n2,radix));
	if(result_radix!=-1)
	cout<<result_radix;
	else
	cout<<"Impossible";
	return 0;
}
