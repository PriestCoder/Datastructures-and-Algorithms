#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintGraph(vector<vector<int>> &adj , int v){
    for(int i=0;i<v;i++)
    {   
        cout << i << " -> " ;
        for(auto x : adj[i])
        {
            cout << " " <<  x << " " ;
        }
        cout <<endl ;
    }
}

void AddEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 4;

    vector<vector<int>> adj(4);

    AddEdge(adj, 0, 1);
    AddEdge(adj, 0, 2);
    AddEdge(adj, 1, 2);
    AddEdge(adj, 2, 3);

    PrintGraph(adj,v) ;
}