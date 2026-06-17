#include <bits/stdc++.h>
using namespace std;

int find_set(vector<int>& parent, int x){

    if (parent[x] == x)
    {
        return x;
    }

    parent[x] = find_set(parent, parent[x]);

    return parent[x];
}

bool join(vector<int> & parent, vector<int> & rank, int a, int b){

    a = find_set(parent, a);

    b = find_set(parent, b);

    if (a == b)
    {
        return false;
    }

    if (rank[a] < rank[b])
    {
        swap(a, b);
    }

    parent[b] = a;

    if (rank[a] == rank[b])
    {
        rank[a]++;
    }

    return true;
}

long long kruskal(int M, vector<tuple<int,int,int>>& edges){

    sort(edges.begin(), edges.end());

    vector<int> parent(M + 1);

    vector<int> rank(M + 1, 0);

    for (int i = 1; i <= M; i++)
    {
        parent[i] = i;
    }

    long long cost = 0;

    for (auto [w, u, v] : edges) 
    {

        if (join(parent, rank, u, v)) 
        {
            cost += w;
        }
    }

    return cost;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;

    cin >> T;

    while (T--) 
    {

        int M, N;

        cin >> M >> N;

        vector<tuple<int,int,int>> edges;

        for (int i = 0; i < N; i++) 
        {

            int X, Y, Z;
            
            cin >> X >> Y >> Z;

            edges.push_back({Z, X, Y});
        }

        cout << kruskal(M, edges) << '\n';
    }

    return 0;
}