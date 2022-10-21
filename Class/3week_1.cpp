#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int alarm = 0;
        vector<int> expenditure;
        int money[201] = {};
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            expenditure.push_back(m);
        }
        for (int i = 0; i < d; i++) {
            money[expenditure[i]]++;
        }
        for (int i = d; i < n; i++) {
            int midmoney = 0;
            if (d % 2 == 0) { // ¦
                int count = 0;
                bool flag = false;
                bool firstflag = true;
                for (int j = 0; j < 201; j++) {
                    count += money[j];
                    if (firstflag && count >= d / 2) {
                        midmoney += j;
                        firstflag = false;
                    }
                    if (count >= d / 2 + 1) {
                        midmoney += j;
                        flag = true;
                    }
                    if (flag) break;
                }
                if (midmoney <= expenditure[i]) {
                    alarm++;
                }
            }
            else if (d % 2 == 1) { // Ȧ
                int count = 0;
                for (int j = 0; j < 201; j++) {
                    count += money[j];
                    if (count >= d / 2 + 1) {
                        midmoney += j;
                        break;
                    }
                }
                if (midmoney * 2 <= expenditure[i]) {
                    alarm++;
                }
            }
            money[expenditure[i - d]]--;
            money[expenditure[i]]++;
        }
        cout << alarm << "\n";
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
        int n,d;
        cin>>n>>d;
        int calorie[201];
        memset(calorie,0,sizeof(int)*201);
        vector<int> c;
        c.push_back(0);
        for(int i = 1;i<=n;i++){
            int cal;
            cin>>cal;
            c.push_back(cal);
        }
        for(int i = 1;i<=d;i++){
            calorie[c[i]]++;
        }
        int alarm=0;
        for(int i = d+1;i<=n;i++){
            int comp_mid;

            if(d%2==0){
                int idx_sum = 0;
                int fir = 0;
                int sec = 0;
                for(int j = 1;j<=200;j++){
                    if(calorie[j]!=0){
                        idx_sum += calorie[j];
                        if(fir!=0) {
                            sec = j;
                            break;
                        }
                        if(idx_sum >= d/2){
                            fir = j;
                        }
                        if(idx_sum>=d/2+1){
                            sec = j;
                            break;
                        }

                    }
                }
                comp_mid = fir+sec;
            }
            else{
                int idx_sum = 0;
                int fir;
                for(int j = 1;j<=200;j++){
                    if(calorie[j]!=0){
                        idx_sum += calorie[j];
                        if(idx_sum/2+1 >= d/2+1 ){
                            fir = j;
                            break;
                        }

                    }
                }
                comp_mid = fir*2;
            }
            if(c[i]>=comp_mid){
                alarm++;
            }
            calorie[c[i]]++;
            calorie[c[i-d]]--;

        }
        cout<<alarm<<endl;
    }
}
 */