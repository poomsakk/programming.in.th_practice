#include<stdio.h>
int ar[2000];
int main(){
    int i,j,cou=0,mark,ans,k;
    scanf("%d %d",&k,&mark);
	for(i=2;i<=k;i++){
        if(ar[i]==0){
            for(j=i;j<=k;j+=i){
                if(ar[j]==0){
                    ar[j]=j;
                cou++;
                if(cou==mark)
                    ans=j;
                //printf("%d\n",j);
                }
            }
        }
	}
    printf("%d",ans);
	return 0;
}
