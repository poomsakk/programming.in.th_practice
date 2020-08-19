#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i,input,max=-1,sum=0,who;
	for (i = 0; i < 20 ; i++) {
		scanf("%d",&input);
		if (i < 4)			sum += input;
		else if (i < 8)		sum += input;
		else if (i < 12)	sum += input;
		else if (i < 16)	sum += input;
		else if (i < 20)	sum += input;
		if (sum > max) {
			max = sum;
			who = (i / 4) + 1;
		}
		if (i == 3 || i == 7 || i == 11 || i == 15)	sum = 0;
	}
	printf("%d %d", who, max);
	return 0;
}
