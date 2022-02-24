//
// Created by 강소망 on 2022/02/24.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S,T;
    cin>>S>>T;

    while(S.length()!=T.length()){
        if(T.back()=='A'){
            T.pop_back();
        }
        else{
            T.pop_back();
            reverse(T.begin(),T.end());
        }
    }
    if(S==T) cout<<1;
    else cout<<0;
}