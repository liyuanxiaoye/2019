#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> v(n);
	int leftindex=0,rightindex=n-1,temp=0,tempindex=0,sum=-1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
		temp+=v[i];
		if(temp<0)
		{
			temp=0;
			tempindex=i+1;
		}
		else if(temp>sum)
		{
			sum=temp;
			leftindex=tempindex;
			rightindex=i;
		}
	}
	if(sum<0)sum=0;
	cout<<sum<<" "<<v[leftindex]<<" "<<v[rightindex];
	return 0;
}
