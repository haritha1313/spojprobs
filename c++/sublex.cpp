
#include <bits/stdc++.h>

using namespace std;

struct node {
	int len, lnk;
	map <char, int> go;
} t[1000500];

int sz = 0, last = 0;
long long cnt[1000500];

void sa_init () {
	sz = last = 0;
	t[0].len = 0;
	t[0].lnk = -1;
	sz++;
}

void sa_extend (char c) {
	int cur = ++sz;
	t[cur].len = t[last].len + 1;
	int p;
	for (p = last; p != -1 && !t[p].go.count (c); p = t[p].lnk)
		t[p].go[c] = cur;
	if (p == -1) {
		t[cur].lnk = 0;
	} else {
		int q = t[p].go[c];
		if (t[p].len + 1 == t[q].len) {
			t[cur].lnk = q;
		} else {
			int clone = ++sz;
			t[clone] = t[q];
			t[clone].len = t[p].len + 1;
			for (; p != -1 && t[p].go[c] == q; p = t[p].lnk)
				t[p].go[c] = clone;
			t[q].lnk = t[cur].lnk = clone;
		}
	}
	last = cur;
}

/* void sa_extend(char ch){
    char c = ch;
    int cur = ++sz;
    t[cur].len = t[last].len + 1;
    int p;
    for(p = last; p != -1 && !t[p].go.count(c); p = t[p].lnk)
        t[p].go[c] = cur;
    if(p == -1)
        t[cur].lnk = 0;
    else {
        int q = t[p].go[c];
        if(t[p].len + 1 == t[q].len)
            t[cur].lnk = q;
        else {
            int clone = ++sz;
            t[clone].len = t[p].len + 1;
            t[clone].go = t[q].go;
            t[clone].lnk = t[q].lnk;
            for(;p != -1 && t[p].go[c] == q; p = t[p].lnk)
                t[p].go[c] = clone;
            t[q].lnk = t[cur].lnk = clone;
        }
    }
    last = cur;
} */

bool used[1000500];

void dfs (int v) {
	used[v] = true;
	cnt[v] = 1;
	for (auto to : t[v].go) {
		if (!used[to.second]) {
			dfs (to.second);
		}
		cnt[v] += cnt[to.second];
	}
}

char s[90500];

int main () {
	#ifdef lcl
		freopen (".in", "r", stdin);
	#endif
	
	scanf ("%s\n", &s);
	
	int n = strlen (s);
	sa_init ();
	for (int i = 0; i < n; ++i)
		sa_extend (s[i]);

	int q; scanf ("%d", &q);
	
	dfs (0);

	while (q--) {
		int k; scanf ("%d", &k);
		int v = 0;
		while (k > 0) {
			for (auto it : t[v].go) {
				int cnt = :: cnt[it.second];
				if (cnt < k) {
					k -= cnt;
				} else {
					printf ("%c", it.first);
					v = it.second;
					--k;
					break;
				}
			}
		}
		puts ("");
	}
	
	return 0;
}
