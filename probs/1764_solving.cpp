//
// Created by 강소망 on 2022/07/21.
//
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    set<string> s;
    set<string> result;
    while(n--){
        string str;
        cin>>str;
        s.insert(str);
    }
    int cnt=0;
    while(m--){
        string str;
        cin>>str;

        if(s.find(str)!=s.end()){
            cnt++;
            result.insert(str);
        }
    }
    cout<<cnt<<"\n";
    for(auto str:result) cout<<str<<"\n";
}