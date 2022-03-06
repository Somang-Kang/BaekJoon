
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> nei[101];
int depth[101];

int BFS(int start,int N){

    bool visited[101]={false,};
    queue<int> q;
    q.push(start);
    visited[start]=true;
    depth[start] =0;
    int cnt = 0;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < nei[x].size(); i++) {
            if (!visited[nei[x][i]]) {
                visited[nei[x][i]] = true;
                q.push(nei[x][i]);
                depth[nei[x][i]] = depth[x] + 1;
            }
        }

    }
    for(int i = 1;i<=N;i++){
        cnt += depth[i];
        depth[i]=0;
    }
    return cnt;
}

int main(){
    int N,M;
    cin>>N>>M;
    for(int i=1;i<=M;i++){
        int A,B;
        cin>>A>>B;
        nei[A].push_back(B);
        nei[B].push_back(A);
    }
    int minNum = 0;
    int minValue=1000000000;
    for(int i=1;i<=N;i++){
        int cur = BFS(i,N);
        if(cur<minValue){
            minValue = cur;
            minNum = i;
        }
    }
    cout<<minNum<<endl;
}