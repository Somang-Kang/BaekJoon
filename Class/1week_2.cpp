#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string S;
        cin >> S;
        int gage = 0;
        int count = 0;
        int maxMap = 0;
        for (int j = 0; j < S.size(); j++) {
            if (S[j] == 'C') {
                gage++;
                count++;
            }//cctcctc
            else {
                gage--;
                count++;
                if (gage == 0 && maxMap < count) { maxMap = count; }
                else if (gage == -1) { gage = 0; count = 0; }
            }
        }

        gage = 0; count = 0;

        for (int j = S.size() - 1; j >= 0; j--) {
            if (S[j] == 'T') {
                gage++;
                count++;
            }
            else {
                gage--;
                count++;
                if (gage == 0 && maxMap < count) { maxMap = count; }
                else if (gage == -1) { gage = 0; count = 0; }
            }
        }

        cout << maxMap << endl;
    }
}