//
// Created by 강소망 on 2022/07/19.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> card_vec;

int binary_search(int x,int start,int end){
    while(start<=end){
        int mid = (start+end)/2;
        if(card_vec[mid]==x){
            return 1;
        }
        else if(card_vec[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return 0;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int card_num;
    cin>>card_num;

    for(int i =0;i<card_num;i++){
        int c;
        cin>>c;
        card_vec.push_back(c);
    }
    sort(card_vec.begin(),card_vec.end());
    int is_num;
    cin>>is_num;
    while(is_num--){
        int c;
        cin>>c;
        cout<<binary_search(c,0,card_num-1)<<" ";
    }
}