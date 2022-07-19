//
// Created by 강소망 on 2022/07/19.
//
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    set<string> s;
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
        }
    }
    cout<<cnt;
}
