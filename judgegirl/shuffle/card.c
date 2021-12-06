#include <stdio.h>
#include "card.h"
void shuffle(int *deck[]){
    int size=0;
    while(deck[size]!=NULL) size++;
    int arr[size];
    int p=0;
    for(int i=0;i<size;i+=2){
        arr[i]=*(deck[p++]);
    }
    for(int i=1;i<size;i+=2){
        arr[i]=*(deck[p++]);
    }
    for(int i=0;i<size;i++){
        *(deck[i])=arr[i];
    }
}

void print(int *deck[]){
    int i;
    for(i=0;deck[i]!=NULL;i++){
        printf("%d ",*(deck[i]));
    }
    if(i)   printf("\n");
}