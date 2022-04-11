//
// Created by 강소망 on 2022/04/11.
//

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==1 or n==3) cout<< -1;
    else if(n%5 == 0) cout<<n/5;
    else if(n%5 == 4) cout<<(n-4)/5 + 2;
    else if(n%5 == 2) cout<<(n-2)/5 + 1;
    else if(n%5 == 3) cout<<(n-8)/5 +4;
    else cout<<(n-6)/5+3;
}