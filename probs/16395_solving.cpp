//
// Created by 강소망 on 2022/04/01.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,K;
    cin>>N>>K;

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    if(N==1 && K==1) cout<<1;

    for(int i=1;i<=N;i++){
        for(int j = 1;j<=i;j++){
            if(i==1) break;
            if(j==1 || j==i) v.push_back(1);
            else{
                int left_idx = v.size()-i;
                int right_idx = left_idx+1;
                int cur = v[left_idx]+v[right_idx];
                v.push_back(cur);
            }
            if(i==N && j==K) cout<<v[v.size()-1];
        }
    }

}