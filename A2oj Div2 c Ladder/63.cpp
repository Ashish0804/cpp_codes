#include <bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set 
#define mod 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define int long long

int helper(int n) {
    if(n < 10) {
        return n;
    }

   
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l, r; cin >> l >> r;
    cout << helper(r) - helper(l);
    return 0;
}