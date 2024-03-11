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

void Merge(double arr[], int left, int right, int mid) 
{
	int Sub1 = mid - left + 1;
	int Sub2 = right - mid;

	auto *La = new double [Sub1];
	auto *Ra = new double [Sub2];
	for (auto i = 0; i < Sub1; i++) 
		La[i] = arr[left + i];
	for (auto j = 0; j < Sub2; j++) 
		Ra[j] = arr[mid + 1 + j];

	auto id1 = 0, id2 = 0;
	int idm = left;

	while (id1 < Sub1 && id2 < Sub2) 
	{
		if (La[id1] <= Ra[id2]) 
		{
			arr[idm] = La[id1];
			id1++;
		}
		else {
			arr[idm] = Ra[id2];
			id2++;
		}
		idm++;
	}
	while (id1 < Sub1) 
	{
		arr[idm] = La[id1];
		id1++;
		idm++;
	}
	while (id2 < Sub2) 
	{
		arr[idm] = Ra[id2];
		id2++;
		idm++;
	}
	delete[] La;
	delete[] Ra;
}

void MergeSort(double arr[], int l, int r) 
{
	if (l >= r) return;
	int mid = (l + r) >> 1;
	MergeSort(arr, l, mid);
	MergeSort(arr, mid + 1, r);
	Merge(arr, l, r, mid);
}
void solve()
{
	double Start = clock(), End;
	MergeSort(a, 0, n - 1);
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