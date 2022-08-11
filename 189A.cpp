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
	int n;
	cin >> n;
	vector<int> a(3);
	read(a);
	int ans = 0;
	for (int i = 0; a[0] * i <= n; i++){
		for (int j = 0; j * a[1] + a[0] * i <= n; j++){
			int t = n - (a[0] * i + a[1] * j);
			if (t % a[2] == 0) ans = max(ans, i + j + t / a[2]);
		}
	}
	cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}