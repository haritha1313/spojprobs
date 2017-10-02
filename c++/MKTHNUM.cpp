
#include <bits/stdc++.h>

using namespace std;

/* My code is cute, isn't it? :3 */

#define ll long long
#define foreach(it, S) for(__typeof (S.begin()) it = S.begin(); it != S.end(); it++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MN(a, b) a = min (a, b)
#define MX(a, b) a = max (a, b)
#define endl '\n'

#define fname ""

#define read(type, args...) type args; rdr,args;

#define nxtnt getNext <int>()
#define nxtll getNext <ll>()

template <typename T> inline T getNext () { T s = 1, x = 0, c = getc(stdin); while (c <= 32) c = getc(stdin); if (c == '-')	s = -1, c = getc(stdin); while ('0' <= c && c <= '9') x = x * 10 + c - '0', c = getc(stdin); return x * s; }

struct reader { template<typename T> reader& operator, (T &v) { v = getNext <T>(); return *this;} } rdr;

const double eps = 1e-9;

bool Equals (double x, double y) { return abs (x - y) < eps; }
bool Less (double x, double y) { return (x) < y - eps; }
bool LessOrEqual (double x, double y) { return (x) < y + eps; }

const int MaxN = int (1e5) + 256;

struct node {
	int l, r, cnt;
	node () {
		l = r = cnt = 0;
	}
} t[MaxN * 50];

int sz = 1;
int N;
int roots[MaxN];
int base = (int)(1e9) + 1;

void update (int pos, int last, int newVer, int tl = 1, int tr = INT_MAX) {
	t[newVer].cnt = t[last].cnt + 1;
	if (tl == tr)
		return;
	int tm = tl + (tr - tl) / 2;
	if (pos <= tm) {
		t[newVer].r = t[last].r;
		t[newVer].l = ++sz;
		update (pos, t[last].l, t[newVer].l, tl, tm);
	} else {
		t[newVer].l = t[last].l;
		t[newVer].r = ++sz;
		update (pos, t[last].r, t[newVer].r, tm + 1, tr);
	}
}

void add (int x) {
	roots[++N] = ++sz;
	x += base;
	update (x, roots[N - 1], roots[N]);
}

int kth (int v2, int v1, int k, int tl = 1, int tr = INT_MAX) {
	if (tl == tr)
		return tl;
	int tm = tl + (tr - tl) / 2;
	int key = t[t[v2].l].cnt - t[t[v1].l].cnt;
	if (key >= k) {
		return kth (t[v2].l, t[v1].l, k, tl, tm);
	} else {
		return kth (t[v2].r, t[v1].r, k - key, tm + 1, tr);
	}
}

int main () {
	#ifdef lcl
		freopen (fname".in", "r", stdin);
		// freopen (fname".out", "w", stdout);
	#endif
	
	int n = nxtnt, m = nxtnt;
	
	roots[0] = 1;
	
	for (int i = 0; i < n; ++i) {
		int x = nxtnt;
		add (x);
	}
	
	while (m--) {
		read (int, l, r, k);
		printf ("%d\n", kth (roots[r], roots[l - 1], k) - base);
	}
		
	return 0;
}
