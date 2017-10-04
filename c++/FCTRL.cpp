#include <iostream>
using namespace std;
int main() {
    int t, n, ans, tmp;
    cin >> t;
    while(t--) {
        cin >> n;
        ans = 0;
        tmp = 5;
        while(n >= tmp) {
            ans += n / tmp;
            tmp *= 5;
        }
        cout << ans << endl;
    }
    return 0;
}
