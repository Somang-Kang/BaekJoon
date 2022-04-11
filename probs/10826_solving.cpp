#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    v.push_back(0);
    v.push_back(1);

    for(int i = 2;i<=n;i++){
        int cur = v[i-2]+v[i-1];
        v.push_back(cur);
    }

    cout<<v[n];
}