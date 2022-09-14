//
// Created by 강소망 on 2022/09/10.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        int m,n;
        cin>>m>>n;
        vector<string> v;
        char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        for(int i =0;i<m;i++){
            string str;
            cin>>str;
            v.push_back(str);
        }
        int char_num;
        cin>>char_num;

        string long_str;
        cin>>long_str;

        int cnt = char_num/n;

        for(int i = 0;i<cnt;i++){
            int min_idx=0;
            int min_dist = 10000000;
            for(int k =0;k<m;k++){
                int dist=0;
                for(int j = 0;j<n;j++){
                    if(v[k][j]!=long_str[i*n+j]){
                        dist++;
                    }
                }
                if(dist<min_dist){
                    min_dist=dist;
                    min_idx = k;
                }
            }
            cout<<alpha[min_idx];
        }
    cout<<"\n";
    }
}