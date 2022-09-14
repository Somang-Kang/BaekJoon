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