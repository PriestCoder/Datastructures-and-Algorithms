#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void BFS(vector<vector<int>> &adj, int s, vector<bool> &visited)
{
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void BFSdiscrete(vector<vector<int>> &adj, int v)
{
    vector<bool> visited(v + 1, false);

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            BFS(adj, i, visited);
        }
    }
}

void PrintGraph(vector<vector<int>> &adj, int v)
{
    for (int i = 0; i < v; i++)

    {
        cout << i << "->  ";
        for (auto x : adj[i])
        {
            cout << x << " ";
        }

        cout << endl;
    }
}

void AddEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 7;

    vector<vector<int>> adj(v);

    AddEdge(adj, 0, 1);
    AddEdge(adj, 0, 2);
    AddEdge(adj, 1, 3);
    AddEdge(adj, 2, 3);
    AddEdge(adj, 4, 5);
    AddEdge(adj, 4, 6);
    AddEdge(adj, 5, 6);
    PrintGraph(adj, v);
    cout << endl;
    cout << "BFS TRAVERSAL :-";
    BFSdiscrete(adj, v);
}