//
// Created by 강소망 on 2022/07/21.
//
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string str;
    cin>>str;

    set<string> set_s;
    for(int i =0;i<str.length();i++){
        string tmp="";
        for(int j=i;j<str.length();j++){
            tmp += str[j];
            set_s.insert(tmp);
        }
    }
    cout<<set_s.size();
}