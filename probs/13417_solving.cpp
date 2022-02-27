
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int len;
        cin>>len;
        vector<char> frontV;
        vector<char> backV;
        char min;
        for(int i =0;i<len;i++){
            char c;
            cin>>c;
            if(i==0) {
                min = c;
                backV.push_back(c);
            }
            else{
                if(c<=min) { //더 작은 값이 들어왔을 때
                    min=c;
                    frontV.push_back(c);
                }
                else{ //더 큰 값이 들어왔을 때
                    backV.push_back(c);
                }

            }
        }
        for(int i=frontV.size()-1;i>=0;i--){
            cout<<frontV[i];
        }
        for(int i =0;i<backV.size();i++){
            cout<<backV[i];
        }
        cout<<endl;
    }
}