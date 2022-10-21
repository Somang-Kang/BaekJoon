#include <iostream>
#include <stack>


using namespace std;


void hanoi(int n, int a, int b, int c);
int cnt = 0;

int N, K;
bool finish = false;
stack<int> s[4];

int main() {


    int testCase;
    cin >> testCase;

    while (testCase--) {
        cin >> N ;

        while (!s[1].empty()) { s[1].pop(); }
        while (!s[2].empty()) { s[2].pop(); }
        while (!s[3].empty()) { s[3].pop(); }

        stack <int> temp;

        for (int i = N; i >=1; i--) {
            int num;
            cin >> num;
            temp.push(num);
        }

        for (int i = N; i >= 1; i--) {
            for (int k = 0; k < temp.top(); k++) {
                s[1].push(i);
            }
            temp.pop();
        }

        cin >> K;

        hanoi(N, 1, 2, 3);

        if (s[2].empty()) {
            cout << 0;
        }
        for (int i = s[2].size() - 1; i >= 0; i--) {
            int temp = s[2].top();
            s[2].pop();
            cout << temp << " ";
        }

        cout << "\n";
        cnt = 0;
        finish = false;
    }


}


void hanoi(int n, int a, int b, int c) {

    if (n == 0) {
        return;
    }
    hanoi(n - 1, a, c, b);

    if (finish == true) {
        return;
    }

    while ( !finish && s[a].empty() == false && s[a].top() == n) {
        s[c].push(n);
        s[a].pop();

        if (++cnt == K) {
            finish = true;
        }
    }
    hanoi(n - 1, b,a,c);


}