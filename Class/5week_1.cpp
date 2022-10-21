//
// Created by 강소망 on 2022/10/19.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int arr[26];


        for (int i = 0; i < 26; i++) {
            arr[i] = 0;
        }
        string str1;
        string str2;
        string res="YES";
        cin >> str1 >> str2;
        for (int i = 0; i < str1.length(); i++) {
            int idx = str1[i] - '\0'-65;
            arr[idx]=1;
        }

        for (int i = 0; i < str2.length(); i++) {
            int idx = str2[i] - '\0'-65;
            if (arr[idx] == 0) {
                res = "NO";
                break;
            }
            arr[idx] = -1;
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] > 0) {
                res = "NO";
            }
        }
        cout << res << "\n";
    }
}