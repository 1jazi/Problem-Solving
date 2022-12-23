#include <bits/stdc++.h>
using namespace std;
int n, m;
int dr[] = {0, 0, 1, -1};
int dc[] = {1, -1, 0, 0};
vector<string> g;
vector<vector<bool>> vis;

bool dfs(int r, int c, int x, int y)
{
    if (vis[r][c])
        return 1;
    vis[r][c] = 1;
    bool ret = 0;
    for (int i = 0; i < 4; i++)
    {
        int newr = r + dr[i];
        int newc = c + dc[i];
        if (newr < 0 || newr == n || newc < 0 || newc == m || g[r][c] != g[newr][newc] || (newr == x && newc == y))
            continue;
        ret = max(ret, dfs(newr, newc, r, c));
    }
    return ret;
}
int main()
{
    cin >> n >> m;
    g.resize(n);
    vis.resize(n, vector<bool>(m));

    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }

    bool ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j])
                ans = max(ans, dfs(i, j, -1, -1));
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}