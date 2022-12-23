#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector<vector<int>> v;
vector<bool> vis;
void dfs(int x)
{
    vis[x] = 1;
    for (size_t i = 0; i < v[x].size(); i++)
    {
        int g = v[x][i];
        if (vis[g] == false)
        {
            dfs(x);
        }
    }
}
int main()
{
    cin >> n >> m;
    v.resize(n);
    vis.resize(n);

    while (m--)
    {
        int u, x;
        cin >> u >> x;
        u--;
        x--;
        v[u].push_back(x);
        v[x].push_back(u);
    }
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            count++;
            dfs(i);
        }
    }
    cout << count;
    return 0;
}