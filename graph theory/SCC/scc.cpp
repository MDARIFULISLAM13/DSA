/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-22
 * Time : 21:03:19
 * Problem Name : a
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));
const ll mx = 1e5 + 123;
vector<int> g[mx];
int dics[mx], low[mx], cnt = 0;
bool ok[mx];
stack<int> st;

void tarjan(int u)
{
    dics[u] = low[u] = ++cnt;
    st.push(u);
    ok[u] = true;

    for (auto v : g[u])
    {
        if (!dics[v])
        {
            tarjan(v);
            low[u] = min(low[v], low[u]);
        }
        else if (ok[v])
        {

            low[u] = min(low[u], dics[v]);
        }
    }

    if (low[u] == dics[u])
    {

        while (true)
        {
            int v = st.top();
            st.pop();
            ok[v] = false;
            cout << v << " ";
            if (v == u)
                break;
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!dics[i])
        {
            tarjan(i);
        }
    }
    return 0;
}