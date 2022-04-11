//
// Created by 강소망 on 2022/03/28.
//
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int K;
    cin>>K;

    vector<pair<int,int>> v;
    v.push_back(make_pair(1,0));
    v.push_back(make_pair(0,1));

    for(int i = 2;i<=K;i++){
        int numA = v[i-2].first+v[i-1].first;
        int numB = v[i-2].second+v[i-1].second;
        v.push_back(make_pair(numA,numB));
    }
    cout<<v[K].first<<" "<<v[K].second;
}
