//
// Created by 강소망 on 2022/04/13.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(0);
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        int cur = -1;
        if(i%3 == 0){
            if(dp[i/3]<cur) cur = dp[i/3];
        }
        if(i%2 == 0){
            if(cur == -1 or dp[i/2]<cur) cur = dp[i/3];
        }
        if(cur == -1 or dp[i-1]<cur) cur = dp[i-1];
        dp[i]=cur;
    }

    while(){

    }

}