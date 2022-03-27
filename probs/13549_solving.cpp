//
// Created by 강소망 on 2022/03/13.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
vector<int> nei[100001];
using namespace std;
bool visited[100001]={false,};
int cnt[100001];
int BFS(int start,int dest){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    cnt[start] =0;
    int cnt = 0;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        nei[x].push_back(x-1);
        nei[x].push_back(x*2);
        nei[x].push_back(x+1);
        for (int i = 0; i < nei[x].size(); i++) {
            if (!visited[nei[x][i]]) {
                visited[nei[x][i]] = true;
                q.push(nei[x][i]);
                if(i!=1) depth[nei[x][i]] = depth[x] + 1;
                if(nei[x][i]==dest) return depth[nei[x][i]];
            }
        }

    }
}
int main(){

}