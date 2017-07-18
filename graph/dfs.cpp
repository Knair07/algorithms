#include<bits/stdc++.h>
using namespace std;

int n;         //number of vertices
vector<vector<int> > adj(n);          //adj list
vector<bool> used[n];  

void addedge(int u,int w)
{
		adj[u].push_back(w);
		adj[w].push_back(u);
}

void dfs(int v)           //v=start vertex
{ 
		used[v]=true;
		
		cout<<v<<'\n';					//or whatever process
		vector<int>::iterator i=adj[v].begin();				//traverse neighbours of v
		while(i++!=adj[v].end())
		{
				if(!used[*i])								//if vertex is not visited
				{
						dfs(*i)									//run recursively
				}
		}
}

int main()
{
		// make edges
		dfs(v);
}
