#include <iostream>
#include <stack>
using namespace std;

int cnt = 0;
stack<int> s1;
stack<int> s2;
stack<int> s3;
int arr[11];
void moveStack(int x,int y){
    int t;
    if(x==1) {
        t = s1.top();
        s1.pop();
    }
    else if(x==2) {
        t= s2.top();
        s2.pop();
    }
    else {
        t = s3.top();
        s3.pop();
    }
    if(y==1) s1.push(t);
    else if(y==2) s2.push(t);
    else s3.push(t);

}

bool zzz=false;
void func(int a, int b, int n,int k){
    if(zzz==true) return;
    if(n == 1){
        int t;
        if(a==1) {
            t = s1.top();
            s1.pop();
        }
        else if(a==2) {
            t= s2.top();
            s2.pop();
        }
        else {
            t = s3.top();
            s3.pop();
        }
        if(b==1) s1.push(t);
        else if(b==2) s2.push(t);
        else s3.push(t);

        for(int i = 1;i<=arr[t];i++){
            cnt += 1;
            if(cnt == k){
                if(a==2){
                    arr[t] -=i;
                }
                else if(b==2){
                    arr[t] = i;
                }
                break;
            }
        }

        if(cnt==k){
            if(s2.empty()) cout<<"0"<<endl;
            else {
                while(!s2.empty()){
                    int l = s2.top();
                    for(int j = 0;j<arr[l];j++){
                        cout<<s2.top()<<" ";
                    }
                    s2.pop();
                }
                zzz=true;
                cout<<endl;
            }
        }
        return;
    }

    func(a, 6-a-b, n-1,k);
    if(zzz==true) return;
    int t;
    if(a==1) {
        t = s1.top();
        s1.pop();
    }
    else if(a==2) {
        t= s2.top();
        s2.pop();
    }
    else {
        t = s3.top();
        s3.pop();
    }
    if(b==1) s1.push(t);
    else if(b==2) s2.push(t);
    else s3.push(t);

    for(int i = 1;i<=arr[t];i++){
        cnt += 1;
        if(cnt == k){
            if(a==2){
                arr[t] -=i;
            }
            else if(b==2){
                arr[t] = i;
            }
            break;
        }
    }

    if(cnt==k){
        if(s2.empty()) cout<<"0"<<endl;
        else {
            while(!s2.empty()){
                int l = s2.top();
                for(int j = 0;j<arr[l];j++){
                    cout<<s2.top()<<" ";
                }
                s2.pop();
            }
            zzz=true;
            cout<<endl;
        }
    }
    func(6-a-b, b, n-1,k);
}

int main() {
    int tc;
    cin>>tc;

    while(tc--){
        int N;
        cin>>N;
        arr[0]=0;
        for(int i = 1;i<=N;i++){
            int m;
            cin>>m;
            arr[i]=m;
        }
        for(int i = N;i>0;i--){
            s1.push(i);
        }
        //move(N, 1, 3,K);
        int K;
        cin>>K;
        func(1,3,N,K);
        cnt = 0;
        while( !s1.empty() ) s1.pop();
        while( !s2.empty() ) s2.pop();
        while( !s3.empty() ) s3.pop();
        zzz = false;
    }

}