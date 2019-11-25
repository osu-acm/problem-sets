// Calvin Gagliano
// Oregon State University
// Competitive Programming Template
#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define ld long double

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for (int afafa = 0; afafa < t; afafa++) {
        int n; cin >> n;
        vector<int> sticks(4*n);
        for (int i = 0; i < 4*n; i++) {
            cin >> sticks[i];
        }
        sort(sticks.begin(), sticks.end());
        int a = 0;
        bool good = true;
        for (int b = 0, e = (4*n)-1; b < e; b += 2, e -= 2) {
            if (sticks[b+1] == sticks[b] && sticks[e-1] == sticks[e]) {
                if (!a) a = sticks[b] * sticks[e];
                else if (a != sticks[b] * sticks[e]) {
                    cout << "NO" << endl;
                    good = false;
                    break;
                }
            } else {
                good = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (good) cout << "YES" << endl;
    }



    return 0;
}
