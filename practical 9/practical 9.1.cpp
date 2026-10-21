
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[100];
bool visited[100];

// DFS traversal
void DFS(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int next : adj[node]) {
        if (!visited[next]) {
            DFS(next);
        }
    }
}

// BFS traversal
void BFS(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int next : adj[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    int n, e, u, v, start;

    cout << "Enter number of buildings and roads: ";
    cin >> n >> e;

    cout << "Enter roads (u v):\n";

    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter starting building: ";
    cin >> start;

    cout << "DFS Traversal: ";
    for (int i = 0; i < n; i++)
        visited[i] = false;
    DFS(start);

    cout << "\nBFS Traversal: ";
    for (int i = 0; i < n; i++)
        visited[i] = false;
    BFS(start);

    return 0;
}
