//
// Created by 강소망 on 2022/02/27.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> v;

    while(n--){
        string str;
        cin>>str;
        int iter = str.find(".");
        v.push_back(str.substr(iter+1,str.length()-1));
    }
    sort(v.begin(),v.end());

    int cnt = 1;
    for(int i =0;i<v.size();i++){
        if(i!=v.size()-1){
            if(v[i]==v[i+1]) cnt++;
            else {
                cout<<v[i]<<" ";
                cout<<cnt<<endl;
                cnt = 1;
            }
        }
        else{
            cout<<v[i]<<" "<<cnt<<endl;
        }
    }
}