//
// Created by 강소망 on 2022/09/14.
//

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[100001];
    for(int i =0;i<num;i++){
        int n;
        cin>>n;
        arr[i]=n;
    }
    long long DP[100001];
    DP[0]=arr[0];
    long long max=DP[0];
    for(int i = 1;i<num;i++){
        if(DP[i-1]+arr[i]>arr[i]){
            DP[i]=DP[i-1]+arr[i];
        }
        else{
            DP[i]=arr[i];
        }
        if(DP[i]>max) max=DP[i];
    }
    cout<<max;
}