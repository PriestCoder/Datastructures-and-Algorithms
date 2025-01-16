#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void PrintGraph(vector<vector<int>> &adj, int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << i << " -> ";
        for (auto x : adj[i])
        {
            cout << " " << x << " ";
        }
        cout << endl;
    }
}

void AddEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<vector<int>> &adj , int v , int s)
{

    vector<bool> visited(v+1,false) ;
    queue<int> q ;

    visited[s] = true ;
    q.push(s) ;

    while(!q.empty())
    {
        int  u = q.front() ;
        q.pop() ;

        cout << u << " " ;
        for(int v : adj[u])
        {
            if(visited[v]==false)
            {
                visited[v] = true ;
                q.push(v) ;
            }
        }
    }


}

int main()
{
    int v = 5;

    vector<vector<int>> adj(5);

    AddEdge(adj, 0, 1);
    AddEdge(adj, 0, 2);
    AddEdge(adj, 1, 2);
    AddEdge(adj, 1, 3);
    AddEdge(adj, 2, 3);
    AddEdge(adj, 2, 4);
    AddEdge(adj, 3, 4);

    PrintGraph(adj, v);
    cout << endl ;
    cout << "ENTER SOURCE VERTEX FOR BFS TRAVERSAL :-" << "\n" ;
    int s ;
    cin >> s ;
    BFS(adj,v,s) ;
}