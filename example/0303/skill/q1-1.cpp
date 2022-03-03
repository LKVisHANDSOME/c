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
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[i];
            }
            if (sum <= limit) {
                cout << i << " " << j << endl;
                res++;
            }
        }
    }
    cout << res << endl;

    system("pause");
    return 0;
}