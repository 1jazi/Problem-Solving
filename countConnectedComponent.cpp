#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> g;
vector<bool> vis;
void dfs(int x)
{
    vis[x] = 1;
    for (int i = 0; i < g[x].size(); i++)
    {
        int v = g[x][i];
        if (vis[v] == false)
            dfs(v);
    }
}

int main()
{
    cin >> n >> m;

    g.resize(n);
    vis.resize(n);

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (vis[i] == false)
        {
            cnt++;
            dfs(i);
        }

    cout << "The number of connected components: " << cnt << endl;
    return 0;
}