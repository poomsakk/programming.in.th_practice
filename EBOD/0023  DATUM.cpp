#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[50];
int main() {
	int month,day,i,start;
	scanf("%d %d",&day,&month);
	for (i = 1; i < 40; i += 7) {
		a[i]=1;
		a[i + 1] = 2;
		a[i + 2] = 3;
		a[i + 3] = 4;
		a[i + 4] = 5;
		a[i + 5] = 6;
		a[i + 6] = 7;
	}
	if (month == 1)			start = 5;
	else if (month == 2)	start = 1;
	else if (month == 3)	start = 1;
	else if (month == 4)	start = 4;
	else if (month == 5)	start = 6;
	else if (month == 6)	start = 2;
	else if (month == 7)	start = 4;
	else if (month == 8)	start = 7;
	else if (month == 9)	start = 3;
	else if (month == 10)	start = 5;
	else if (month == 11)	start = 1;
	else if (month == 12)	start = 3;
	switch ((start+day-1)%7)
	{
		case 0: {printf("Saturday");	break; }
		case 1: {printf("Sunday");		break; }
		case 2: {printf("Monday");		break; }
		case 3: {printf("Tuesday");		break; }
		case 4: {printf("Wednesday");	break; }
		case 5: {printf("Thursday");	break; }
		case 6: {printf("Friday");		break; }
	}printf("%d",123456%11);
	return 0;
}
/*
sun mon tues wed thur fri sat
1   2   3    4   5    6    7
8   9   10   11  12   13   14
15  16  17   18  19   20   21
22  23  24   25  26   27   28
29  30  31   32  33   34   35
36  37  38   39  40   41   42
*/
