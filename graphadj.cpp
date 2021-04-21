#include<iostream>
#include<vector>
using namespace std;
/*int main()
{
    vector<int> g1[5];
    int u=9,v=7;

    for(int i=0;i<5;i++)
    {
        g1[i].push_back(u);
        g1[i].push_back(v);
    }

for(int i=0;i<5;i++){
for(auto it=g1[i].begin();it!=g1[i].end();it++)
{
cout<<*it<<" ";
}
}
}*/

void addEdge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(u);
    adj[v].push_back(v);
}
void printGraph(vector<int> adj[],int V)
{
    for(int i=0;i<V;++i)
    {
        cout<<"Adjacency list of vertext "<<i<<"\n head";
        for(auto x:adj[i])
        cout<<"->"<<x;
        cout<<"\n";
    }
}

int main(){
    int V=5;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
    return 0;
}
