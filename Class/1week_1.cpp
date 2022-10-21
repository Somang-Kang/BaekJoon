//
// Created by 강소망 on 2022/10/19.
//

#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        vector<int> inha;
        vector<int> biryo;

        for(int i=0;i<n;i++){
            int cap;
            cin>>cap;
            inha.push_back(cap);
        }

        for(int i=0;i<m;i++){
            int cap;
            cin>>cap;
            biryo.push_back(cap);
        }
        int inha_gcd = inha[0];
        int biryo_gcd = biryo[0];
        for(int i = 1;i<n;i++){
            inha_gcd = gcd(inha_gcd,inha[i]);
        }
        for(int i = 1;i<m;i++){
            biryo_gcd = gcd(biryo_gcd,biryo[i]);
        }

        bool isInha = true;
        bool isBiryo = true;

        for(int i = 0;i<m;i++){
            if(biryo[i]%inha_gcd==0){
                isBiryo = false;
            }
        }
        for(int i = 0;i<n;i++){
            if(inha[i]%biryo_gcd==0){
                isInha = false;
            }
        }

        if(inha_gcd==1) isBiryo = false;
        if(biryo_gcd==1) isInha = false;

        if(isInha) cout<<biryo_gcd<<" ";
        else cout<<"-1"<<" ";

        if(isBiryo) cout<<inha_gcd<<endl;
        else cout<<"-1"<<endl;
    }
}