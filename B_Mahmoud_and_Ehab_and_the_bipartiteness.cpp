#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

const ll MOD = 1e9 + 7;

// Function to perform DFS and color the graph
void dfs(ll node, ll color, vector<vi>& graph, vi& colors) {
    for (ll neighbor : graph[node]) {
        if (colors[neighbor] == 0) {
            colors[neighbor] = (color == 1) ? 2 : 1;
            dfs(neighbor, colors[neighbor], graph, colors);
        }
    }
}

// Function to solve the bipartite graph problem
void solve() {
    ll numNodes;
    cin >> numNodes;

    // Initialize graph and colors
    vector<vi> graph(numNodes);
    vi colors(numNodes, 0);

    // Read edges and build graph
    for (ll i = 0; i < numNodes - 1; ++i) {
        ll node1, node2;
        cin >> node1 >> node2;
        graph[node1 - 1].push_back(node2 - 1);
        graph[node2 - 1].push_back(node1 - 1);
    }

    // Color the graph
    colors[0] = 1;
    dfs(0, 1, graph, colors);

    // Count nodes with each color
    ll color1Count = 0, color2Count = 0;
    for (ll color : colors) {
        if (color == 1) ++color1Count;
        else if (color == 2) ++color2Count;
    }

    // Calculate maximum edges to add
    ll maxEdgesToAdd = color1Count * color2Count - (numNodes - 1);
    cout << maxEdgesToAdd << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll testCases=1;;

    while (testCases--) {
        solve();
    }

    return 0;
}