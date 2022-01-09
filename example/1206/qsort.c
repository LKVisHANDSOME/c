#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct country{
    char name[75];
    int people_cnt;
}Country;

int cmp(const void *a, const void *b)
{
    int ret = strcmp(((Country*)a)->name,((Country*)b)->name);
	if (ret>0) return 1;
	if (ret<0) return -1;
	return 0;
}

int main() {
    int n;
    scanf("%d",&n);
    Country country[2000];
    int country_cnt=0;
    while(n--){
        char s[75];
        scanf("%s",s);
        // printf("%s",s);
        char name[75];
        fgets(name,75,stdin);
        int flag=1;
        for(int i=0;i<country_cnt;i++){
            if(strcmp(country[i].name,s)==0){
                flag=0;
                int flag2=1;
                country[i].people_cnt++;
                break;
            }
        }
        if(flag){
            strcpy(country[country_cnt].name,s);
            country[country_cnt++].people_cnt = 1;
        }
    }
    qsort(country,country_cnt,sizeof(Country),cmp);

    for(int i=0;i<country_cnt;i++){
        printf("%s %d\n",country[i].name,country[i].people_cnt);
    }


    system("pause");
    return 0;
}
