//
// Created by 강소망 on 2022/04/16.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    char word[21][21];
    int R,C;
    cin>>R>>C;
    for(int r=0;r<R;r++){
        for(int c=0;c<C;c++){
            cin>> word[r][c];
        }
    }
    string ans = "~";
    for(int r=0;r<R;r++){
        int iter=0;
        string cur;
        while(iter<C){
            if(word[r][iter]=='#'){
                if(iter==0) {
                    iter++;
                    continue;
                }
                if(ans>cur and cur.length()>1) ans = cur;
                cur = "";
            }
            else{
                cur += word[r][iter];
                if(iter==C-1){
                    if(ans>cur and cur.length()>1) ans = cur;
                    cur = "";
                }
            }
            iter++;
        }
    }
    for(int c=0;c<C;c++){
        int iter=0;
        string cur;
        while(iter<R){
            if(word[iter][c]=='#'){
                if(iter==0) {
                    iter++;
                    continue;
                }
                if(ans>cur and cur.length()>1) ans = cur;
                cur = "";
            }
            else{
                cur += word[iter][c];
                if(iter==R-1){
                    if(ans>cur and cur.length()>1) ans = cur;
                    cur = "";
                }
            }
            iter++;
        }
    }


    cout<<ans;


}
