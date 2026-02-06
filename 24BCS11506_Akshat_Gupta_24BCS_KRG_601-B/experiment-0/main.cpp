//2180/A   Carnival Wheel

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <cstring>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<char> vc;
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define clr(v, x) memset(v, x, sizeof(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i >= b; i--)
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int MAXN = 2e5 + 5;
 
bool isPalindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}
/* ==================== SOLVE ==================== */
void solve() {
    int l , a , b;
    cin >> l >> a >> b;
    int maxi = INT_MIN;
    for (int i = 0; i<l; i++) {
        a = (a+b) % l;
        maxi = max(a , maxi);
    }
    cout << maxi << "\n";
}
/* ==================== MAIN ==================== */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}