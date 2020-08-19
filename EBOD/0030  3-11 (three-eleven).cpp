#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
char a[1000020];
int main() {
	int i,len,sum3=0,c11=0;
	scanf("%s", a);
	len = strlen(a);
	for (i = 0; i < len; i++) {
		sum3 += (a[i] - '0');
	}
	for (i = len-1; i >=0; i-=2) {
		if (len % 2 == 0) {
			c11 += a[i] - '0' + (a[i - 1] - '0') * 10;
		}
		else {
			if (i != 0)	c11 += a[i] - '0' + (a[i - 1] - '0') * 10;
			else c11 += a[i] - '0';
		}
	}
	printf("%d %d", sum3%3, c11%11 );
	return 0;
}
