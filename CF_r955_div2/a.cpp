#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 <= y1 && y2 <= x2) || (y1 <= x1 && x2 <= y2)) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(nullptr);

    int NUMBER_OF_TESTS;
    cin >> NUMBER_OF_TESTS;
    for (int t = 1; t <= NUMBER_OF_TESTS; t++)
        solve();
    return 0;
}
