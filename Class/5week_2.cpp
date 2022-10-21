//
// Created by 강소망 on 2022/10/19.
//

#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<string>
using namespace std;

class node {
public:
    int v;
    int y;
    int t;
    int in_degree;
    node(int v, int y) {
        this->v = v;
        this->y = y;
        t = 0;
        in_degree = 0;
    }
};

queue<int> in0;
map<string, int> cityToIndex;
vector<node> nodes;
vector<int>* edges;
vector<int>* graph;
int result = 0;

void traverse(int v) {
    for (int i = 0; i < graph[v].size(); i++) {
        nodes[graph[v][i]].in_degree--;
        if (nodes[graph[v][i]].in_degree == 0) {
            in0.push(graph[v][i]);
        }
        if (nodes[graph[v][i]].t < nodes[v].t + edges[v][i]) {
            nodes[graph[v][i]].t = nodes[v].t + edges[v][i];
            if (result < nodes[graph[v][i]].t)
                result = nodes[graph[v][i]].t;
        }
    }
    edges[v].clear();
    graph[v].clear();
}

int main() {
    int T;
    int N, M;
    string s;
    int y;
    string s1, s2;
    int t;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> M;

        edges = new vector<int>[N];
        graph = new vector<int>[N];
        for (int j = 0; j < N; j++) {
            cin >> s >> y;
            cityToIndex.insert({ s, j });
            node temp(j, y);
            nodes.push_back(temp);
        }
        for (int j = 0; j < M; j++) {
            cin >> s1 >> s2 >> t;
            int i1 = cityToIndex.at(s1);
            int i2 = cityToIndex.at(s2);
            if (nodes[i1].y > nodes[i2].y) {
                nodes[i1].in_degree++;
                edges[i2].push_back(t);
                graph[i2].push_back(i1);
            }
            else if (nodes[i1].y < nodes[i2].y) {
                nodes[i2].in_degree++;
                edges[i1].push_back(t);
                graph[i1].push_back(i2);
            }
        }
        for (int j = 0; j < N; j++) {
            if (nodes[j].in_degree == 0)
                in0.push(j);
        }

        while (in0.size() != 0) {
            traverse(in0.front());
            in0.pop();
        }
        cout << result << '\n';

        cityToIndex.clear();
        nodes.clear();
        edges->clear();
        graph->clear();
        result = 0;
    }

}