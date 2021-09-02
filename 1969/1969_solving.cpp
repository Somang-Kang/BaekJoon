//
// Created by 강소망 on 2021/09/01.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<string>>Vec2D;
vector<string> v1;
int ascii[90];
int main(){
    int textsize,nums;
    cin>>nums>>textsize;
    while(nums--){
        string str;
        cin>>str;
        v1.push_back(str);
    }

    for(int i=0;i<v1.size();i++){
        cout<<v1[i][i];
    }
}
