//
// Created by 강소망 on 2022/10/19.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        vector<pair<int, int>> v;
        int n;
        int k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            v.push_back(make_pair(0, w));

        }
        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            v[i].first = p/v[i].second;
        }
        sort(v.begin(), v.end());
        int res = 0;
        for (int i = n-1; i >= 0; i--) {
            if (k >= v[i].second) {
                k -= v[i].second;
                res += v[i].first*v[i].second;
            }
            else {
                res += k * v[i].first;
                break;
            }
        }
        cout << res << "\n";
    }
}
/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v;
        for(int i = 0;i<n;i++){
            int w;
            cin>>w;
            v.push_back(make_pair(0,w));
        }
        for(int i = 0;i<n;i++){
            int p;
            cin>>p;
            v[i].first=p/v[i].second;
        }
        sort(v.begin(),v.end(),greater<>());
        int weight_sum = v[0].second;
        int total = v[0].first*v[0].second;
        for(int i =1;i<n;i++){
            if(weight_sum+v[i].second > k){

                total += (k-weight_sum)*v[i].first;
                break;
            }
            total += v[i].first*v[i].second;
            weight_sum += v[i].second;
        }
        if(v.size()==1){
            total = v[0].first*k;
        }
        cout<<total<<endl;
    }
}
 */