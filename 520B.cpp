#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pib pair<int, bool>
#define pii pair<int, int>
#define pll pair<long long, long>
#define pli pair<long long, int>
#define pdd pair<double, double>
#define ff first
#define ss second
#define Fi(a, n) for (int i = a; i < n; i++)
#define Fd(n, a) for (int i = n; i >= a; i--)
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()
#define pb push_back
#define read(a) for (int i = 0; i < sz(a); i++) cin >> a[i]
#define output(a) for (int i = 0; i < sz(a); i++) cout << a[i] << ' '
const ll mod = 1e9 + 7;
const ll module = 998244353;
void solve()
{
	int n, m;
	cin >> n >> m;
	int ans = 0;
	while(n * 2 > m){
		n--;
		ans++;
		if (n == m){
			cout << ans;
			return;
		}
	}
	if (2 * n == m){
		cout << ans + 1;
	}else{
		cout << 1 + ans + n * 2 - m;
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}