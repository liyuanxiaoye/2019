#include <iostream>
#include<cstdio>
#define inf 0x3f3f3f3f
using namespace std;
int n,m,map[505][505],num[505],vis[505],d[505],w[505],c[505];
void dijkstra(int s,int ed)
{
	for(int i=0;i<n;i++)
	{
		d[i]=inf;
		vis[i]=0;
	}
	d[s]=0;
	w[s]=num[s];
	c[s]=1;
	for(int i=0;i<n;i++)
		{
			int min=inf,k=-1;
			for(int j=0;j<n;j++)
				if(!vis[j]&&d[j]<min)
					{
						k=j;
						min=d[j];
					}
			if(k==-1) break;
			vis[k]=1;	
			for(int j=0;j<n;j++)
				if(!vis[j]&&map[k][j]!=inf){
					if(d[k]+map[k][j]<d[j]){
						d[j]=d[k]+map[k][j];
						c[j]=c[k];
						w[j]=w[k]+num[j];
					}else if(d[j]==d[k]+map[k][j])
					{
						c[j]=c[k]+c[j];
						if(w[k]+num[j]>w[j])
							w[j]=w[k]+num[j];
					}
				}
		}
	printf("%d %d",c[ed],w[ed]);
}
int main() {
	int s,ed;
	scanf("%d%d%d%d",&n,&m,&s,&ed);
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j)
				map[i][j]=inf;
			else
				map[i][j]=0;
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		scanf("%d%d%d",&a,&b,&w);
		map[a][b]=map[b][a]=w;
	}
	dijkstra(s,ed);
	return 0;
}
