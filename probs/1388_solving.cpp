//
// Created by 강소망 on 2022/03/27.
//
#include <iostream>
#include <string>
using namespace std;
char arr[51][51];
bool visited[51][51] = {false,};

int main() {
    int N, M;
    cin >> N >> M;


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin>>arr[i][j];
        }
    }
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        int j = 0;
        int flag=1;
        while(!visited[i][j]){
            if (arr[i][j] == '-'){
                if(flag==1) cnt++;
                visited[i][j] = true;
                flag=0;
            }
            j++;
            if (j == M) break;

        }
        /*
        if (arr[i][j] == '-') {
            cnt++;
            while (arr[i][j] == '-') {
                visited[i][j] = true;
                j += 1;
                if (j == M) break;
            }
        }
        */
    }
    for (int j = 0; j < M; j++) {
        int i = 0;
        int flag = 1;
        if (arr[i][j]=='|') cnt++;
        while(!visited[i][j]){
            if (arr[i][j] == '|'){
                if(flag==1) cnt++;
                visited[i][j] = true;
                flag = 0;
            }
            i++;
            if (i == N) break;
        }
    }
    cout<<cnt;
}