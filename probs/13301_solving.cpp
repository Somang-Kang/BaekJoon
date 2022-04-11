//
// Created by 강소망 on 2022/04/11.
//

#include <iostream>
using namespace std;

int main(){
    long long tile[81];

    int N;
    cin>> N;
    tile[0] = 0;
    tile[1] = 4;
    tile[2] = 6;
    for(int i = 3;i<=N;i++){
        tile[i] = tile[i-1]+tile[i-2];
    }
    cout<<tile[N];
}