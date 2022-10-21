#include <iostream>
#include <stack>;
using namespace std;
stack<int> s1;
stack<int> s2;
stack<int> s3;
int cnt = 0;
int flag = false;

void move_stack(int a, int b){
    int t;
    if(a==1){
        t = s1.top();
        s1.pop();
    }
    else if(a==2){
        t = s2.top();
        s2.pop();
    }
    else if(a==3){
        t = s3.top();
        s3.pop();
    }

    if(b==1) s1.push(t);
    else if(b==2) s2.push(t);
    else if(b==3) s3.push(t);
}


void hanoi(int n,int k, int a,int b){
    if(flag==true) return;
    if(n==1){
        cnt++;
        move_stack(a,b);
        if(cnt==k){
            if(s2.empty()) cout<<"0"<<endl;
            else{
                while(!s2.empty()){
                    cout<<s2.top()<<" ";
                    s2.pop();
                }
                cout<<endl;
                flag = true;
            }

        }
        return;
    }
    hanoi(n-1,k,a,6-a-b);
    if(flag==true) return;
    cnt++;
    move_stack(a,b);
    if(cnt==k){
        if(s2.empty()) cout<<"0"<<endl;
        else{
            while(!s2.empty()){
                cout<<s2.top()<<" ";
                s2.pop();
            }
            cout<<endl;
            flag=true;
        }
    }
    hanoi(n-1,k,6-a-b,b);
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        for(int i = n;i>0;i--){
            s1.push(i);
        }
        hanoi(n,k,1,3);
        cnt = 0;
        flag = false;
        while(!s1.empty()) s1.pop();
        while(!s2.empty()) s2.pop();
        while(!s3.empty()) s3.pop();
    }
}
