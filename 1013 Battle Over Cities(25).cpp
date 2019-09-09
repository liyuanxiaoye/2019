#include<iostream>
#include<cstring>
using namespace std;
int map[1005][1005],vis[1005];
int n,m,k;
void dfs(int node)
{
	vis[node]=1;
	for(int i=1;i<=n;i++)
		if(!vis[i]&&map[node][i])
			dfs(i);
}
int main()
{
	int a,b;
	cin>>n>>m>>k;
	for(int i=0 ;i<m;i++)
	{
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	for(int i=0;i<k;i++)
	{
		memset(vis,0,sizeof(vis));
		cin>>a;
		vis[a]=1;
		int cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(!vis[j])
			{
				dfs(j);
				cnt++;
			}
		}
		cout<<cnt-1<<endl;
	}
	return 0;
 } 
