#include <stdio.h>
#include <stdlib.h>
void compare1(int long long x1[3],int long long y1[3],int long long x2[3],int long long y2[3],int long long maxx,int long long maxy,int long long minx,int long long miny,int area){
    int count = 0;
    for(int long long i = x1[0];i <= x2[0];i++)for(int long long j = y1[0];j <= y2[0];j++){
        if(i >= x1[1] && i <= x2[1] && j >= y1[1] && j <= y2[1]){
            if(count == 0){maxx = i;maxy = j;minx = i;miny = j;count++;}
            else if(i >= maxx && j >= maxy){maxx = i;maxy = j;}
            else if(i <= minx && j <= miny){minx = i;miny = j;}
        }
    }
    area -= (maxx - minx)*(maxy - miny);
    maxx = 0;maxy = 0;minx = 0;miny = 0;
    count = 0;
    for(int long long i = x1[0];i <= x2[0];i++)for(int  long long j = y1[0];j <= y2[0];j++){
        if(i >= x1[2] && i <= x2[2] && j >= y1[2] && j <= y2[2]){
            if(count == 0){maxx = i;maxy = j;minx = i;miny = j;count++;}
            else if(i >= maxx && j >= maxy){maxx = i;maxy = j;}
            else if(i <= minx && j <= miny){minx = i;miny = j;}
        }
    }
    area -= (maxx - minx)*(maxy - miny);
    maxx = 0;maxy = 0;minx = 0;miny = 0;
    count = 0;
    for(int long long i = x1[1];i <= x2[1];i++)for(int long long j = y1[1];j <= y2[1];j++){
        if(i >= x1[2] && i <= x2[2] && j >= y1[2] && j <= y2[2]){
            if(count == 0){maxx = i;maxy = j;minx = i;miny = j;count++;}
            else if(i >= maxx && j >= maxy){maxx = i;maxy = j;}
            else if(i <= minx && j <= miny){minx = i;miny = j;}
        }
    }
    area -= (maxx - minx)*(maxy - miny);
    maxx = 0;maxy = 0;minx = 0;miny = 0;
    count = 0;
    for(int long long i = x1[1];i <= x2[1];i++)for(int long long j = y1[1];j <= y2[1];j++){
        if(i >= x1[0] && i <= x2[0] && j >= y1[0] && j <= y2[0] && i >= x1[2] && i <= x2[2] && j >= y1[2] && j <= y2[2]){
            if(count == 0){maxx = i;maxy = j;minx = i;miny = j;count++;}
            else if(i >= maxx && j >= maxy){maxx = i;maxy = j;}
            else if(i <= minx && j <= miny){minx = i;miny = j;}
        }
    }
    area += (maxx - minx)*(maxy - miny);
    printf("%d\n", area);
    return ;
}

int main() {
    int long long x1[3],y1[3],x2[3],y2[3];
    for(int i = 0;i < 3;i++) scanf("%lld%lld%lld%lld", &x1[i], &y1[i], &x2[i], &y2[i]);
    int long long maxx = 0,maxy = 0,minx = 0,miny = 0;
    int area = 0;;
    for(int i = 0;i < 3;i++) area += (x2[i] - x1[i])*(y2[i] - y1[i]);
    compare1(x1,y1,x2,y2,maxx,maxy,minx,miny,area);
    return 0;
}