#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, limit;
    cin >> n >> limit;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int L = 0, sum = 0, res = 0;
    for (int R = 0; R < n; R++) {
        while (R - L >= 0 && sum + arr[R] > limit) {
            sum -= arr[L];
            L++;
        }
        if (sum + arr[R] <= limit) {
            cout << L << " " << R << endl;
            sum += arr[R];
            res += R - L + 1;
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}