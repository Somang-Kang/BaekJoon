#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<int> v;
bool visited[10] = {false,};
int arr[8] ={1,2,3,4,5,6,7,8};

void DFS(int cnt,int idx){
    if(cnt==m){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    else{
        for(int i = idx;i<n;i++){
            //if(visited[i]) continue;
            //visited[i]=true;
            v.push_back(arr[i]);
            DFS(cnt+1,i);
            v.pop_back();
            //visited[i]=false;
        }
    }
}
int main(){
    cin>>n>>m;
    DFS(0,0);
}