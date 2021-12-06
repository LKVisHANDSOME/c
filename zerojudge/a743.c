#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char country_list[2000][76];
    int country_people[2000];
    int country_count = 0;
    while (n--) {
        char name[76], country[76];
        scanf("%s",country);
        fgets(name,76,stdin);
        int exist=0;
        for(int i=0;i<country_count;i++){
            if(strcmp(country,country_list[i])==0){
                exist=1;
                country_people[i]++;
                break;
            }
        }
        if(!exist){
            strcpy(country_list[country_count],country);
            country_people[country_count]=1;
            country_count++;
        }
    }
    for(int i=0;i<country_count;i++){
        for(int j=0;j<country_count-1;j++){
            if(strcmp(country_list[j],country_list[j+1])>0){
                char temp[76];
                strcpy(temp,country_list[j]);
                strcpy(country_list[j],country_list[j+1]);
                strcpy(country_list[j+1],temp);
                int tmp;
                tmp=country_people[j];
                country_people[j]=country_people[j+1];
                country_people[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<country_count;i++){
        printf("%s %d\n",country_list[i],country_people[i]);
    }
    system("pause");
    return 0;
}