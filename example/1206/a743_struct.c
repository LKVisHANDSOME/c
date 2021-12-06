#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct country{
    char name[76];
    int people;
}country;

int main()
{
    int n;
    scanf("%d", &n);
    country list[2000];
    int country_count = 0;
    while (n--) {
        char name[76], country[76];
        scanf("%s",country);
        fgets(name,76,stdin);
        int exist=0;
        for(int i=0;i<country_count;i++){
            if(strcmp(country,list[i].name)==0){
                exist=1;
                list[i].people++;
                break;
            }
        }
        if(!exist){
            strcpy(list[country_count].name,country);
            list[country_count].people=1;
            country_count++;
        }
    }
    for(int i=0;i<country_count;i++){
        for(int j=0;j<country_count-1;j++){
            if(strcmp(list[j].name,list[j+1].name)>0){
                country temp;
                temp = list[i];
                list[i] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    for(int i=0;i<country_count;i++){
        printf("%s %d\n",list[i].name,list[i].people);
    }
    system("pause");
    return 0;
}