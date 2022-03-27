//
// Created by 강소망 on 2022/03/16.
//

#include <iostream>
using namespace std;
int arr[50][50];
bool visited[50][50] = {false,};
void moving(){

}
int main(){
    int N,L,R;
    cin>>N>>L>>R;

    for(int r =0;r<N;r++){
        for(int c = 0;c<N;c++){
            int rc;
            cin>>rc;
            arr[r][c]=rc;
        }
    }
    bool flag = true;
    int sum = 0;
    int cnt = 0;
    while(flag){
        flag=false;
        for(int r=0;r<N;r++){
            sum += arr[r][0];
            for(int c=0;c<N-1;c++){
                if(L<abs(arr[r][c]-arr[r][c+1]) and abs(arr[r][c]-arr[r][c+1])<R){
                    visited[r][c]=true;
                    visited[r][c+1]=true;
                    sum+=arr[r][c+1];
                    flag=true;
                }
                if(visited[r][c-1])
            }
        }
        for(int r=0;r<N;r++){
            sum += arr[0][c];
            for(int c=0;c<N;c++){
                if(L<abs(arr[r][c]-arr[r+1][c]) and abs(arr[r][c]-arr[r][c+1])<R){
                    visited[r][c]=true;
                    visited[r][c+1]=true;
                    sum+=arr[r][c+1];
                    flag=true;
                }
                if(visited[r][c-1])
            }
        }






        if(flag==false) break;
        cnt++;
    }

}