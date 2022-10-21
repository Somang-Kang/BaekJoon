/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 100001

int n, m, a, b, maxDepth;
vector<vector<int>> edges;
int depth[MAX], parent[MAX][21]; //lg10만
bool visited[MAX];

void dfs(int start, int d) {
    visited[start] = true;
    depth[start] = d;
    for (int i = 0; i < edges[start].size(); i++) {
        int next = edges[start][i];
        if (!visited[next]) {
            parent[next][0] = start;
            dfs(next, d + 1);
        }
    }
}



void calcParent() {
    for (int j = 1; j <= maxDepth; j++) {
        for (int i = 1; i <= n; i++) {
            parent[i][j] = parent[parent[i][j - 1]][j - 1];
        }
    }
}

int lca(int a, int b) {
    if (depth[a] > depth[b]) swap(a, b);

    //높이 맞추기
    for (int i = maxDepth; i >= 0; i--) {
        if (depth[parent[b][i]] >= depth[a]) b = parent[b][i];
    }

    if (a == b) return a;

    for (int i = maxDepth; i >= 0; i--) {
        if (parent[a][i] != parent[b][i]) {
            a = parent[a][i];
            b = parent[b][i];
        }
    }
    return parent[a][0];
}
int main() {
    cin >> n;
    edges.resize(n + 1);
    for (int i = n; i > 1; i /= 2) maxDepth++;
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    depth[0] = -1;
    dfs(1, 0);

    */
/*
    calcParent();
    cin >> m;
    while (m--) {
        cin >> a >> b;
        cout << lca(a, b) << '\n';
    }
    return 0;
     *//*

}*/


#include <iostream>
#include <vector>
using namespace std;
bool visited[100001];
vector<int> nei[100001];
vector<int> virus;
vector<int> path[100001];
bool finished = false;

void FindPath(int s, int d) {
    if (finished == true) return;
    visited[s] = true;

    for (int i = 0; i < nei[s].size(); i++) {
        if (!visited[nei[s][i]]) {
            path[d].push_back(nei[s][i]);
            FindPath(nei[s][i], d);
            if(finished==true) s = d;
        }
    }
    if (s == d) {
        finished = true;
       return;
    }

     path[d].pop_back();
}


int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            nei[u].push_back(v);
            nei[v].push_back(u);
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            virus.push_back(x);
        }

        for (int i = 0; i < m; i++) {
            path[virus[i]].push_back(1);
            FindPath(1, virus[i]);
            //reset
            memset(visited, false, 100001);
            finished = false;
        }
        for(int i = 0;i<virus.size();i++){
            for(int j= 0;j<path[virus[i]].size();j++){
                cout<<path[virus[i]][j]<<" ";
            }
            cout<<endl;
        }

        int min_s = 100000000;
        for (int i = 0; i < m; i++) {
            if (path[virus[i]].size() < min_s) {
                min_s = path[virus[i]].size();
            }
        }

        int outt = 0;
        vector<int> res;
        for (int i = 0; i < min_s; i++) {

            for (int j = 0; j < m-1; j++) {
                if (path[virus[j]][i] != path[virus[j + 1]][i]) {
                    outt = 1;
                    break;
                }
            }
            if (outt == 1) break;
            res.push_back(path[virus[0]][i]);

        }

        if (res.empty()) cout << -1;
        else {
            int a = res.back();
            res.pop_back();
            int b = res.back();
            if (a > b) cout << b << " "<< a << "\n";
            else cout << a << " " << b << "\n";
        }

        path->clear();
        virus.clear();
        nei->clear();
        memset(visited, false, 100001);

    }

}
//2
//7 2
//1 2
//1 5
//1 7
//3 5
//5 6
//2 4
//6 3