#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[6];
int main(){
    int i,x,y;
	for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    sort(a,a+4);
    x=min(a[0],a[1]);
    y=min(a[2],a[3]);
    printf("%d",x*y);
	return 0;
}
