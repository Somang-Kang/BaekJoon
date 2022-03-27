//
// Created by 강소망 on 2022/03/27.
//
#include <iostream>
#include <queue>
using namespace std;
int arr[64][64];
bool visited[64][64] = {false,};

int main(){
    int N;
    cin>>N;

    for(int i =0;i<N;i++){
        for(int j = 0;j<N;j++){
            int num;
            cin>>num;
            arr[i][j]=num;
        }
    }
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));

    bool ans = false;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(arr[x][y]==-1) {
            ans = true;
            break;
        }

        int nx = x+arr[x][y];
        int ny = y;
        if(!visited[nx][ny] and nx+1<=N){
            visited[nx][ny]=true;
            q.push(make_pair(nx,ny));
        }

        nx = x;
        ny = y+arr[x][y];
        if(!visited[nx][ny] and ny+1<=N){
            visited[nx][ny]=true;
            q.push(make_pair(nx,ny));
        }

    }
    if(ans) cout<<"HaruHaru";
    else cout<<"Hing";
}
