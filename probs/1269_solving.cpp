#include <iostream>
#include <set>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    set<int> s;
    int num=0;
    while(n--){
        int x;
        cin>>x;
        s.insert(x);
        num++;
    }
    while(m--){
        int x;
        cin>>x;
        if(s.find(x)!=s.end()){
            num--;
            continue;
        }
        num++;
    }
    cout<<num;

}