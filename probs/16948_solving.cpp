//
// Created by 강소망 on 2022/03/27.
//

#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int dx[6] = {-2,-2,0,0,2,2};
int dy[6] = {-1,1,-2,2,-1,1};
bool visited[201][201] = {false,};
int depth[201][201];

int main() {
    int N;
    cin>>N;

    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;

    memset(depth, -1, sizeof(depth));

    queue<pair<int,int>> q;
    q.push(make_pair(r1,c1));
    depth[r1][c1] = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x==r2 and y==c2) break;

        for(int i = 0;i<6;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx<N and ny<N and nx>=0 and ny>=0){
                if(!visited[nx][ny]){
                    visited[nx][ny] = true;
                    depth[nx][ny] = depth[x][y]+1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }

    if(depth[r2][c2]==-1) cout<<-1;
    else cout<<depth[r2][c2];
}