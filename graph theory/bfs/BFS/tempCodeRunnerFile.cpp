
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

void bfs(int sourse)
{
    queue<int> q;
    q.push(sourse);
    vis[sourse] = 1;

    while (!q.empty())
    {
        int cur_v = q.front();
        // order of output
         cout << cur_v << " ";
        q.pop();
        for (int child : g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

  
    bfs(1);

    return 0;
}