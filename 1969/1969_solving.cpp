//
// Created by 강소망 on 2021/09/01.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> v1;
vector<char> finalV;

int main(){
    int textsize,nums;
    int sum = 0;
    cin>>nums>>textsize;
    while(nums--){
        string str;
        cin>>str;
        v1.push_back(str);
    }

    for(int i=0;i<textsize;i++){
        //A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
        int arr[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int j=0;j<v1.size();j++){
            int a = v1[j][i] - 65;
            arr[a]++;

        }
        int max = 0;
        int arrNum = 0;
        for(int k = 0;k<26;k++){
            if(arr[k]>max){
                max = arr[k];
                arrNum = k;
            }
        }

        for(int l = 0;l<26;l++){
            if(l !=arrNum){
                sum += arr[l];
            }
        }
        char ch = arrNum+65;
        finalV.push_back(ch);
    }

    for(int i = 0;i<finalV.size();i++){
        cout<<finalV[i];
    }
    cout<<endl<<sum;
}
