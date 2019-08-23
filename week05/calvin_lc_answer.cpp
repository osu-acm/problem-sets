class Solution {
public:
    vector<int> l;
    vector<int> s;
    
    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (s[a] < s[b]) {
            l[a] = b; 
            s[a] += s[b];
        } else {
            l[b] = a;
            s[b] += s[a];
        }
    }
    
    int find(int a) {
        while (l[a] != a) a = l[a];
        return a;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        l = vector<int>(edges.size()+1);
        s = vector<int>(edges.size()+1);
        for (int i = 0; i < l.size(); i++) { 
            l[i] = i;
            s[i] = 1;
        }
        vector<int> r;
        for (int i = 0; i < edges.size(); i++) {
            if (find(edges[i][0]) == find(edges[i][1]))
                r = edges[i];
            else unite(edges[i][0], edges[i][1]);
        }
        return r;
    }
};
