//
// Created by 강소망 on 2022/03/05.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> v[101];
bool visited[101]={false,};
int cnt =-1;
int re1,re2;

void DFS(int re1){
    cnt++;
    if(re1==re2) {
        cout<<cnt;
        return;
    }
    visited[re1]=true;

    for(int i =0;i<v[re1].size();i++){
        if(!visited[v[re1][i]]){
            DFS(v[re1][i]);
        }
    }
    cnt--;
    if(cnt==-1) cout<<cnt;
}

int main(){
    int n;
    cin>>n;

    cin>>re1>>re2;

    int relations;
    cin>>relations;

    while(relations--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    DFS(re1);

}