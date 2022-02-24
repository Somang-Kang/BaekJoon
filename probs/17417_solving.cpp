//
// Created by 강소망 on 2022/02/23.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    int start_idx=-1;
    for(int i=0;i<str.length();i++){
        if(str[i]=='<'){
            if(start_idx!=-1){
                reverse(str.begin()+start_idx,str.begin()+i);
                start_idx=-1;
            }
            while(str[i]!='>') {
                i++;
            }
        }
        else if(str[i]==' '){
            reverse(str.begin()+start_idx,str.begin()+i);
            start_idx=-1;
        }
        else if(i==str.length()-1)  reverse(str.begin()+start_idx,str.end());
        else{
            if(start_idx==-1) start_idx=i;
        }
    }

    cout<<str;

}