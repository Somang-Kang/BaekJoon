#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> v;
void nums(string str){
    for(int i =str.length()-1;i>=0;i--){
        int num = str[i]-'0';
        v.push_back(num);
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        nums(str);
        int days = 0;

        for (int i = 0; i < v.size(); i++) {
            if (i == v.size() - 1) {
                if(v[i]>5) {
                    days += 10 - v[i]+1;

                }
                else {
                    days += v[i];
                }
                break;
            }
            if(v[i]==5){
                if (v[i + 1] >= 5) {
                    v[i + 1]++;
                    days += 10 - v[i];
                }
                else {
                    days += 10 - v[i];
                }
            }
            else if (v[i] > 5) {
                v[i + 1]++;
                days += 10 - v[i];

            }
            else {
                days += v[i];
            }
        }
        cout << days << "\n";
        v.clear();
    }
}