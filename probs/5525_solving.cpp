//
// Created by 강소망 on 2022/02/24.
//

#include <iostream>
using namespace std;

int main(){
    int N,M;
    string S;
    cin>>N>>M>>S;

    int cnt=0;
    int res=0;
    for(int i=0;i<M;i++){
        if(S[i]=='I'){
            while(i<M-1 && S[i]!=S[i+1]){
                cnt++;
                i++;
            }
            if(S[i]=='O' &&i<M-1) cnt-=1;
            if(cnt<N) {
                cnt=0;
                continue;
            }
            cnt = cnt/2;
            res = res+(cnt-N+1);
            cnt = 0;
        }
    }
    cout<<res;
}