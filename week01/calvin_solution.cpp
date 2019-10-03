// Calvin Gagliano
// Oregon State University
// Competitive Programming Template
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // cin dimensions of board
    int n, m; cin >> n >> m;
    // We can find the total size of the board using (n*m). Since the
    // size of a domino is 2x1 = 2, divide by 2 to find the answer. An
    // edge case: if we filled the board but there was a
    // 1x1 corner spot still free. C++'s integer division takes care of
    // this since it truncates the decimal that is generated.
    cout << (n * m) / 2 << endl;



    return 0;
}
