//
// Created by 강소망 on 2022/05/06.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;

    for(int i =0;i<n;i++){
        int tr;
        cin>>tr;
        v.push_back(tr);
    }
    sort(v.begin(),v.end(),greater<>());
    int ans = 0;
    int cur_idx=0;
    int mul_cnt=1;
    int get_tree=0;//전체 얻은 tree 높이

    while(cur_idx<v.size()-1){
        int gap = abs(v[cur_idx]-v[cur_idx+1]);
        int all_gap = gap*mul_cnt;
        if(get_tree+all_gap>m){
            int x = abs(m-get_tree);
            if(x%mul_cnt>0){
                ans = v[cur_idx]-(x/mul_cnt+1);
            }
            else  ans = v[cur_idx]-(x/mul_cnt);
            break;
        }
        else{
            get_tree += all_gap;
            cur_idx++;
            mul_cnt++;
        }
        if(cur_idx==v.size()-1){
            int x = m-get_tree;
            int min = *min_element(v.begin(), v.end());
            if(m%n!=0) ans = min - (x/n+1);
            else ans = min - (x/n);

        }
    }
    if(v.size()==1) cout<<v[0]-m;
    else cout<<ans;
}
