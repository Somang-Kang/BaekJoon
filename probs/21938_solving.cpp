//
// Created by 강소망 on 2022/03/27.
//
#include <iostream>
#include <queue>
using namespace std;
int arr[1001][1001];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
bool visited[1001][1001]={false,};
queue<pair<int,int>> q;

void BFS(int s, int t,int T){
    q.push(make_pair(s,t));

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        visited[x][y]=true;

        for(int i =0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx>=0 and ny>= 0 and nx<1001 and ny<1001){
                if(arr[nx][ny]>=T and visited[nx][ny]==false ){
                    visited[nx][ny]=true;
                    q.push(make_pair(nx,ny));
                }
            }

        }
    }
}
int main(){
    int N,M;
    cin>>N>>M;

    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            int r,g,b;
            cin>>r>>g>>b;
            float aver = (r+g+b)/3;
            arr[i][j]=aver;
        }
    }

    int T;
    cin>>T;
    int cnt = 0;

    for(int s=0;s<N;s++){
        for(int t = 0;t<M;t++){
            if(visited[s][t]==false and arr[s][t]>=T){
                BFS(s,t,T);
                cnt++;
            }

        }
    }

    cout<<cnt;

}
