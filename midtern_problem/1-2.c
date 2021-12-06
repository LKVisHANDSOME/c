#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int record[2001] = {};
    for (int i = 0; i < n; i++) {
        record[arr[i]+1000]++;
    }
    for (int i = 0; i < 2001; i++) {
        if(record[i]==1){
            printf("%d\n",i-1000);
            break;
        }
    }

    system("pause");
    return 0;
}