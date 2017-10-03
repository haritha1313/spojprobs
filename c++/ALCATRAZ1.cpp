#include <iostream>
using namespace std;
int main() {
    int ans, t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        ans = 0;
        for(int i = 0; i < s.size(); ++i)
            ans += (s[i] - '0');
        cout << ans << endl;
    }
    return 0;
}
