// Calvin Gagliano
// Oregon State University
// Competitive Programming Template
#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll gcd(ll a, ll b) { 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, x, y; cin >> a >> b >> x >> y;
    // Get simplified fraction of x and y
    ll d = gcd(x,y);
    x /= d;
    y /= d;
    cout << min(a / x, b / y) << endl;

    

    return 0;
}
