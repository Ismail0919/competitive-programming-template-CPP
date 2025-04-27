#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <climits>
#include <string.h>

using namespace std;

#define all(x) begin(x), end(x)
#define read(x) int x; cin >> x;
#define pb push_back
#define in insert
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define inf (int)1e9
#define pii pair<int, int>
#define vii vector<pair<int, int>>
#define vi vector<int>

typedef long long ll;
typedef long double ld;

const int N = 200;
int mod = 1e9 + 7;
void debugMode() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    debugMode();
    string x;
    cin >> x;
    int n = x.length();
    vector<int> a(n + 1);
    for(int i=0;i<x.size();i++){
        a[i]=x[i]-'0';
    }
    sort(a.begin(),a.end() - 1);
    a[n] = a[0];
    for(int i=1;i<=x.size();i++){
        cout << a[i];
    }
    return 0;
}