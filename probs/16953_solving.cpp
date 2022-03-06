//
// Created by 강소망 on 2022/03/06.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int A,B;
    cin>>A>>B;
    if(A>B){
        int tmp = A;
        A = B;
        B = tmp;
    }
    int cnt =0;
    while(B>A){
        cnt++;
        if(to_string(B).back()!='1'){
            if(B%2 ==1) {
                cnt = -1;
                 break;
            }
            B = B/2;
        }
        else{
            string str = to_string(B);
            str = str.substr(0,str.length()-1);
            B = stoi(str);
        }
    }
    if(A==B) cout<<cnt+1;
    else cout<<-1;
}