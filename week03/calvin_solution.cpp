// Calvin Gagliano
// Oregon State University
// Competitive Programming Template
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n; cin >> n;
	long long int h[n+2], p[n+2];
	h[0] = 0; p[0] = LLONG_MIN;
	h[n+1] = 0; p[n+1] = LLONG_MAX;
	int r = 0;
	for (int i = 1; i < n+1; i++)
		cin >> p[i] >> h[i];
	for (int i = 1; i < n+1; i++) {
		if (p[i] - h[i] > p[i-1]) {
			h[i] = 0;
			r++;
		} else if (p[i] + h[i] < p[i+1]) {
			p[i] = p[i] + h[i];
			r++;
		}
	}
	cout << r << endl;
	return 0;
}
