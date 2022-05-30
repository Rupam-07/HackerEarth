//Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
//please give it a star thank you


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A, A + n);
        long long int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, A[i] ^ A[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}
