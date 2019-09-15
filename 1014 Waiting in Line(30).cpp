#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct node{
	int poptime,endtime;
	queue<int>q;
};
int serve[1005],result[1005];
int main()
{
	int n,m,k,q,index=1;
	scanf("%d %d %d %d",&n,&m,&k,&q);
	vector<node> window(n+1);
	vector<bool> sorry(k+1,false);
	for(int i=1;i<=k;i++)
		scanf("%d",&serve[i]);
	for(int i=1;i<=m;i++)
		for(int j=0;j<n;j++)
			if(index<=k){
			window[j].q.push(serve[index]);
			if(window[j].endtime>=540)
				sorry[index]=true;
			window[j].endtime+=serve[index];
			if(i==1)
				window[j].poptime=window[j].endtime;
			result[index]=window[j].endtime;
			index++;
		}
	while(index<=k){
		int minpop=window[0].poptime,minj=0;
		for(int i=1;i<n;i++)
			if(minpop>window[i].poptime){
				minpop=window[i].poptime;
				minj=i;
			}
		window[minj].q.pop();
		window[minj].q.push(serve[index]);
		window[minj].poptime+=window[minj].q.front();
		if(window[minj].endtime>=540)
			sorry[index]=true;
		window[minj].endtime+=serve[index];
		result[index]=window[minj].endtime;
		index++;
	}
	for(int i=0;i<q;i++)
	{
		int query,min;
		scanf("%d",&query);
		min=result[query];
		if(sorry[query]){
			printf("Sorry\n");
			continue;
		}
		printf("%02d:%02d\n",(min+480)/60,min%60);
	}
	return 0;
}
