// Calvin Gagliano
// Oregon State University
// Competitive Programming Template
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int n, a, b, c;
	cin >> n >> a >> b >> c;
	vector<int> r(n+1, -INFINITY);
	r[0] = 0;
	for (int i = 1; i < r.size(); i++) {
		if (i-a >= 0) r[i] = max(r[i-a]+1, r[i]);
		if (i-b >= 0) r[i] = max(r[i-b]+1, r[i]);
		if (i-c >= 0) r[i] = max(r[i-c]+1, r[i]);
	}
	cout << r.back() << endl;


	return 0;
}
