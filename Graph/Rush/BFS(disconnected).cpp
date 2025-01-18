/*

         0            3                5
 G  =   / \           |               / \
       1───2          4              6   7
                                         |
                                         8
Adjacency list :-
0 -> 1 , 2         |               5 -> 6 , 7
1 -> 0 , 2         |               6 -> 5
2 -> 0 , 1         |               7 -> 5 , 8
3 -> 4             |               8 -> 7
4 -> 3             |

Bfs traversal (source node = 0 ) :-

0  1  2  3  4  5  6  7  8
total node = 9
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

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
        cout << i << " -> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
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
    int v = 9;

    vector<vector<int>> adj(v);
    AddEdge(adj, 0, 1);
    AddEdge(adj, 0, 2);
    AddEdge(adj, 1, 2);
    AddEdge(adj, 3, 4);
    AddEdge(adj, 5, 6);
    AddEdge(adj, 5, 7);
    AddEdge(adj, 7, 8);
    PrintGraph(adj, v);
    cout << "BFS TRAVERSAL :-";
    BFSdiscrete(adj,v) ;
}