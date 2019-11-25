// Calvin Gagliano
// Oregon State University
// Competitive Programming Template
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Populate n, a, b, and c.
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // This is a Dynamic Programming problem. We generate our
    // DP array using the vector template's custom constructor.
    // This line creates an array of ints of size n+1 that are
    // all populated with the value -INFINITY (INT_MIN).
    vector<int> r(n+1, -INFINITY);

    // We start our DP array with 0 since if our ribbon was length
    // 0, we would have 0 ways to cut it. If you are familiar with
    // recursion (CS 161+162), this is equivalent to a base case.
    r[0] = 0;
    
    // Here, we start at ribbon of length 1. Our DP subproblem is defined
    // as how many pieces of ribbon we can make if it is of length i.
    for (int i = 1; i < r.size(); i++) {
        // If it is possible to cut the ribbon at i-a, cut it at i-a so
        // that the ribbon at i is a piece of size a. This is represented
        // as the "r[i-a]+1". The reason we add 1 is because we just created
        // another piece of ribbon. If it is already possible to create 
        // more pieces of ribbon, don't overwrite the value. This is
        // represented by the "r[i]" part of the max function. The max()
        // function returns the maximum of the two arguments. 
        if (i-a >= 0) r[i] = max(r[i-a]+1, r[i]);
        if (i-b >= 0) r[i] = max(r[i-b]+1, r[i]);
        if (i-c >= 0) r[i] = max(r[i-c]+1, r[i]);
    }
    // Return the value at r[n].
    cout << r.back() << endl;

    // Example with n = 4, a = 1, b = 2, c = 3.
    // We create the vector<int> r(5, -INFINITY). r = [-INF, -INF, -INF, -INF, -INF].
    // Set r[0] = 0. r = [0, -INF, -INF, -INF, -INF].
    // The first for loop iteration with i = 1:
    //      With i-a: 1-1 = 0. Therefore, r[1] = max(r[0]+1, r[i]) = max(0+1, -INF) = 1.
    //      With i-b: 1-2 = -1.
    //      With i-c: 1-3 = -2.
    // r = [0, 1, -INF, -INF, -INF]
    // The second for loop iteration with i = 2:
    //      With i-a: 2-1 = 1. Therefore, r[2] = max(r[1]+1, r[i]) = max(1+1, -INF) = 2.
    //      With i-b: 2-2 = 0. Therefore, r[2] = max(r[0]+1, r[i]) = max(0+1, 2) = 2.
    //      With i-c: 2-3 = -1.
    // r = [0, 1, 2, -INF, -INF]
    // The third for loop iteration with i = 3:
    //      With i-a: 3-1 = 2. Therefore, r[3] = max(r[2]+1, r[i]) = max(2+1, -INF) = 3.
    //      With i-b: 3-2 = 1. Therefore, r[3] = max(r[1]+1, r[i]) = max(1+1, 3) = 3.
    //      With i-c: 3-3 = 0. Therefore, r[3] = max(r[0]+1, r[i]) = max(0+1, 3) = 3.
    // r = [0, 1, 2, 3, -INF].
    // The fourth for loop iteration with i = 4:
    //      With i-a: 4-1 = 3. Therefore, r[4] = max(r[3]+1, r[i]) = max(3+1, -INF) = 4.
    //      With i-b: 4-2 = 2. Therefore, r[4] = max(r[2]+1, r[i]) = max(2+1, 3) = 3.
    //      With i-c: 4-3 = 1. Therefore, r[4] = max(r[1]+1, r[i]) = max(1+1, 3) = 3.
    // r = [0, 1, 2, 3, 4].
    //
    return 0;
}
