//
// Created by 강소망 on 2022/05/02.
//
#include <iostream>
#include <queue>
using namespace std;

int idx[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char map[201][201];

int main(){
    int r,c,n;
    cin>>r>>c>>n;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            char k;
            cin>>k;
            map[i][j]=k;
        }
    }

    int cur_time = 1;
    queue<pair<int,int>> q;
    while(cur_time < n){
        if(n%2 == 0){
            for(int i=1; i<=r; i++){
                for(int j=1; j<=c; j++){
                    map[i][j]='0';
                }
            }
            break;
        }
        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                if(map[i][j] == 'O'){
                    q.push(make_pair(i, j));
                }
            }
        }

        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                map[i][j] = 'O';
            }
        }

        while(!q.empty()){

            int curX = q.front().first;
            int curY = q.front().second;
            q.pop();
            map[curX][curY] = '.';
            for(int k=0; k<4; k++){
                int nextX = curX + idx[k][1];
                int nextY = curY + idx[k][0];

                if(nextX<1 or nextX>r or nextY<1 or nextY>c)
                    continue;
                map[nextX][nextY] = '.';
            }
        }
        cur_time+=2;
    }

    for(int i =1;i<=r;i++) {
        for (int j = 1; j <= c; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}