
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> card_vec;

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
        auto upper = upper_bound(card_vec.begin(),card_vec.end(),c);
        auto lower = lower_bound(card_vec.begin(),card_vec.end(),c);
        cout<< upper-lower<<" ";
    }
}