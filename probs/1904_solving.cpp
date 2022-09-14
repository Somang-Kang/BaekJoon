//
// Created by 강소망 on 2022/09/07.
//
#include <iostream>
#include <vector>
using namespace std;
vector<long long> DP;
int main(){
    DP.push_back(0);
    DP.push_back(1);
    DP.push_back(2);

    int N;
    cin>>N;
    for(int i=3;i<=N;i++){
        int idx = DP.size();
        DP.push_back((DP[idx-1]+DP[idx-2])%15746);
    }
    if(N==1) cout<<1;
    else cout<<DP.back()<<"\n";
}
