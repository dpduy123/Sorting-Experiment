#include <bits/stdc++.h> 

#define int long long 
#define pii pair <int,int> 
#define st first 
#define nd second 
#define vi vector <int> 
#define vpii vector <pii> 
#define pb push_back 
#define lb lower_bound 
#define ub upper_bound 
#define FILE ""

using namespace std;

const int oo = 1e18;
const int base = 311;
const int mod = 1e9 + 7;
const int N = 1e6 + 6;

int n;
double a[N];
void input()
{
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
}

void solve()
{
	double Start = clock(), End;
	sort(a, a + n);
	for (int i = 0; i < n; i++) 
		cout << a[i] << " "; cout << "\n";
	End = clock();
	cout << (double) (End - Start) / CLOCKS_PER_SEC << "\n";
}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int T = 1;
	//cin >> T;
	while (T--) 
	{
		input();
		solve();
	}
	return 0;
}
/*
From Benq: 
	int overflow?
	array bounds?
	Special Cases (n = 1?)
	Do something instead of nothing and stay organized 
	WRITE STUFF DOWN 
	DON'T GET STUCK ON ONE APPROACH 
*/