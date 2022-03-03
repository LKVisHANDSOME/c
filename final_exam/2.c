#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pair {
	int frequency;
	char charASCII;
} pair;

int cmp(const void*a,const void*b){
    pair x=*(pair*)a,y=*(pair*)b;
    if(x.frequency!=y.frequency){
        return x.frequency-y.frequency;
    }
    return x.charASCII-y.charASCII;
}

void print(pair *myData){
    for(int i=0;myData[i].frequency!=-1;i++){
        printf("%d %d\n",myData[i].charASCII,myData[i].frequency);
    }
    printf("\n");
}

int main()
{
	struct pair* myData=(struct pair*)malloc(95*sizeof(struct pair));
    char str[128];
    while(gets(str)!=NULL){
        int cnt=0;
        int n=strlen(str);
        for(int i=0;i<n;i++){
            int new_character=1;
            for(int j=0;j<cnt;j++){
                if(myData[j].charASCII==str[i]){
                    myData[j].frequency++;
                    new_character=0;
                }
            }
            if(new_character){
                myData[cnt].charASCII=str[i];
                myData[cnt++].frequency=1;
            }
        }
        qsort(myData,cnt,sizeof(pair),cmp);
        myData[cnt].frequency=-1;
        print(myData);
    }
    system("pause");
    return 0;
}