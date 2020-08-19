#include<stdio.h>
int n[200],ar[200],br[200],go[200];
char mess[200];
int main(){
	int i,num,scoreA=0,scoreB=0,scoreC=0;
	scanf("%d",&num);
    scanf("%s",mess);
    for(i=0;i<num;i++){
        if(mess[i]=='A')        n[i]=1;
        else if(mess[i]=='B')   n[i]=2;
        else if(mess[i]=='C')   n[i]=3;
    }
    for(i=0;i<140;i+=3){
        ar[i]=1;
        ar[i+1]=2;
        ar[i+2]=3;
    }
    for(i=0;i<140;i+=4){
        br[i]=2;
        br[i+1]=1;
        br[i+2]=2;
        br[i+3]=3;
    }
    for(i=0;i<140;i+=6){
        go[i]=3;
        go[i+1]=3;
        go[i+2]=1;
        go[i+3]=1;
        go[i+4]=2;
        go[i+5]=2;
    }
    for(i=0;i<num;i++){
        if(n[i]==ar[i])         scoreA++;
        if(n[i]==br[i])         scoreB++;
        if(n[i]==go[i])         scoreC++;
    }

///////

    if(scoreA > scoreB && scoreA > scoreC)      printf("%d\nAdrian",scoreA);
    if(scoreB > scoreA && scoreB > scoreC)      printf("%d\nBruno",scoreB);
    if(scoreC > scoreB && scoreC > scoreA)      printf("%d\nGoran",scoreC);

    if(scoreA == scoreB && scoreA > scoreC)    printf("%d\nAdrian\nBruno",scoreA);
    if(scoreA == scoreC && scoreA > scoreB)    printf("%d\nAdrian\nGoran",scoreA);
    if(scoreC == scoreB && scoreB > scoreA)    printf("%d\nBruno\nGoran",scoreB);

    if(scoreA == scoreB && scoreA == scoreC)    printf("%d\nAdrian\nBruno\nGoran",scoreA);
	return 0;
}
