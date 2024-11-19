#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Function to perform DFS from a given node
void dfs(int node, vector<int> adj[], int n, vector<int>& distances) {
    // Initialize distances to all nodes as infinity
    distances.assign(n, INF);
    distances[node] = 0; // Distance to itself is 0

    // Create a queue for BFS, storing pairs of (distance, node)
    queue<pair<int, int>> q;
    q.push({0, node});

    while (!q.empty()) {
        auto [dist, currNode] = q.front();
        q.pop();

        // Update distances for neighboring nodes
        for (int neighbor : adj[currNode]) {
            if (distances[neighbor] > distances[currNode] + 1) {
                distances[neighbor] = distances[currNode] + 1;
                q.push({distances[neighbor], neighbor});
            }
        }
    }
}

// Function to solve the problem
void solve() {
    int n;
    cin >> n;

    // Create adjacency list representation of the graph
    vector<int> adj[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            if (x == 1) adj[i].push_back(j);
        }
    }

    // Perform DFS from each node
    for (int i = 0; i < n; ++i) {
        vector<int> distances;
        dfs(i, adj, n, distances);

        // Print the shortest distance from node i to itself
        if (distances[i] == INF) {
            cout << "NO WAY" << endl;
        } else {
            cout << distances[i] << endl;
        }
    }
}