//
// Created by 강소망 on 2022/04/17.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<pair<int,int>> v;

    pair<int,int> max_p = {0,0};
    while(N--){
        int x,y;
        cin>>x>>y;
        if(y>max_p.second) max_p = make_pair(x,y);
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end());
    int start = 0;
    int dest = 1;
    int area = 0;
    if(v[start]!=max_p){
        while(v[dest].first != max_p.first or v[dest].second != max_p.second){
            if(v[start].second<v[dest].second){
                area += (v[dest].first-v[start].first)*v[start].second;
                start=dest;
                dest++;
            }
            else dest++;

        }
        area += (v[dest].first-v[start].first)*v[start].second;
    }
    start = v.size()-1;
    dest = start-1;
    if(v[start]!=max_p){
        while(v[dest] != max_p){
            if(v[start].second<v[dest].second){
                area += (v[start].first-v[dest].first)*v[start].second;
                start=dest;
                dest--;
            }
            else dest--;
        }
        area += (v[start].first-v[dest].first)*v[start].second;
    }
    area+=max_p.second;
    cout<<area;
}
