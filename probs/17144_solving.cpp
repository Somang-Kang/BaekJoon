//
// Created by 강소망 on 2022/04/30.
//

#include <iostream>
using namespace std;
bool isFill[51][51];
int room[51][51];
int idx[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};


bool is_movable(int x,int y,int r,int c){
    if(x<1 or y<1 or x>r or y>c) return false;
    else return true;
}
int main(){

    int r,c,t,air_loc;
    cin>>r>>c>>t;



    while(t--){
        for(int i=1;i<=r;i++){
            for(int j = 1;j<=c;j++){
                int dust;
                cin>>dust;
                room[i][j]=dust;
                if(dust<=0) isFill[i][j]=false;
                else isFill[i][j]=true;
                if(dust==-1) air_loc = i;
            }
        }

        for(int i=1;i<=r;i++){
            for(int j = 1;j<=c;j++){
                if(room[i][j]>0){
                    int shared_dust = room[i][j]/5;
                    for(int k = 0; k < 4; k++) {
                        int nextX = i + idx[k][1];
                        int nextY = j + idx[k][0];
                        if(is_movable(nextX,nextY,r,c) and room[nextX][nextY]!=-1){
                             if(isFill[i][j]==true) {
                                 room[nextX][nextY] += shared_dust;
                                 room[i][j] -= shared_dust;
                                 cout<<"i:"<<nextX<<" j:"<<nextY<<" "<<room[nextX][nextY]<<" and "<<i<<j<<room[i][j]<<endl;

                             }
                        }
                    }
                }
            }
        }

        for(int i =1;i<=r;i++){
            for(int j =1;j<=c;j++){
                cout<<room[i][j]<<" ";
            }
            cout<<endl;
        }


        cout<<endl;
        for(int i=1;i<=r;i++){
            for(int j = 1;j<=c;j++) {
                if(air_loc-1>i){
                    if(i==1 and j<c) cout<<room[i][j+1];
                    else if(i>1 and j<c){
                        if(j==1) cout<<room[i-1][j];
                        else cout<<room[i][j];
                    }
                    else if(j==c)cout<<room[i+1][j];
                }
                else if((air_loc-1)==i or air_loc==i){
                    if(j==1) cout<<"-1";
                    else if(j==2) cout<<"0";
                    else cout<<room[i][j-1];
                }
                else{
                    if(i<r and j==1) cout<<room[i+1][j];
                    else if(i<r and j<c) cout<<room[i][j];
                    else if(i==r and j<c) cout<<room[i][j+1];
                    else if(j==c) cout<<room[i-1][j];
                }
                cout<<" ";
            }
            cout<<endl;
        }

    }


}