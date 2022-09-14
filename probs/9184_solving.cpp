//
// Created by 강소망 on 2022/09/07.
//

#include <iostream>
using namespace std;
int DP[21][21][21];

int recur(int a,int b,int c){

    if(a<=0 or b<=0 or c<=0){
        return 1;
    }
    if(a>20 or b>20 or c>20){
       return recur(20,20,20);
    }
    if(DP[a][b][c]) return DP[a][b][c];
    if(a<b and b<c){

        DP[a][b][c] = recur(a,b,c-1)+recur(a,b-1,c-1)-recur(a,b-1,c);
        return DP[a][b][c];
    }
    DP[a][b][c] =  recur(a-1,b,c)+recur(a-1,b-1,c)+recur(a-1,b,c-1)-recur(a-1,b-1,c-1);
    return DP[a][b][c];
}

int main(){

    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==-1 and b==-1 and c==-1){
            break;
        }
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<recur(a,b,c)<<"\n";
    }


}