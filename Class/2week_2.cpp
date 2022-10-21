#include <iostream>
#include <map>
#include <string>
using namespace std;

int t, m, n, score;
map<int, int> tb;
map<int,int>::iterator it;
string cmd, option;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--) {
        tb.clear();
        cin >> m >> n;
        for (int i = 0; i < m; i++) {
            cin >> score;
            if (tb.find(score)==tb.end()) {
                tb.insert({ score,1 });
            }
            else {
                tb[score]++;
            }
        }

        for (int i = 0; i < n; i++) {
            cin >> cmd;
            if (cmd == "Delete") {
                cin >> option;
                if (option == "min") {
                    it = tb.begin();
                }
                else {
                    it = --tb.end();
                }
                if (it->second == 1) {
                    tb.erase(it);
                }
                else {
                    it->second--;
                }
            }
            else {
                cin >> score;
                if (tb.find(score) == tb.end()) {
                    tb.insert({ score,1 });
                }
                else {
                    tb[score]++;
                }
            }
        }
        it = --tb.end();
        cout << tb.begin()->first << " " << it->first << '\n';
    }
}
/*
// Created by 강소망 on 2022/10/20.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int tc;
    cin>>tc;

    while(tc--){
        int m,n;
        cin>>m>>n;

        map<int,int> mp;
        map<int,int>::iterator it;
        for(int i = 0;i<m;i++){
            int level;
            cin>>level;
            if(mp.find(level)!=mp.end()){
                mp[level]++;
            }
            else mp.insert({level,1});
        }

        for(int i = 0;i<n;i++){
            string cmd;
            cin>>cmd;

            if(cmd=="Add"){
                int prob_level;
                cin>>prob_level;
                if(mp.find(prob_level)!=mp.end()){
                    mp[prob_level]++;
                }
                else mp.insert({prob_level,1});
            }
            else if(cmd=="Delete"){
                string cmd2;
                cin>>cmd2;
                if(cmd2 == "min"){
                    it = mp.begin();
                    if(it->second > 1){
                        it->second--;
                    }
                    else mp.erase(mp.begin());
                }
                else { //Delete max
                    it = --mp.end();
                    if(it->second > 1){
                        it->second--;
                    }
                    else mp.erase(it);
                }
            }
        }
        it = mp.begin();
        cout<<it->first<<" ";
        it = --mp.end();
        cout<<it->first<<endl;
    }
}
 */