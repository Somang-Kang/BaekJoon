//
// Created by 강소망 on 2022/02/27.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string pat,str;
    cin>>N>>pat;
    int idx = pat.find('*');
    string left_pat = pat.substr(0,idx);
    string right_pat = pat.substr(idx+1,pat.length());

    while(N--){
        cin>>str;
        if(pat.length()-1>str.length()) {
            cout<<"NE";
            continue;
        }
        string str_left = str.substr(0,left_pat.length());
        string str_right = str.substr(str.length()-right_pat.length(),str.length());
        if(left_pat==str_left && right_pat == str_right) cout<<"DA";
        else cout<<"NE";
    }
}