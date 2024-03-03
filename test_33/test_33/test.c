#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
int main() {
	int a, b, c;
	int c1, c2, c3, c4;
	printf("请输入两个两位正整数：\n");
	scanf_s("%d %d", &a, &b);
	c1 = b / 10;
	c2 = a / 10;
	c3 = b % 10;
	c4 = a % 10;
	c = c4 * 1000 + c3 * 100 + c2 * 10 + c1;
	printf("%d", c);

	return 0;

}

int main() {
	int fhour, fmi, lhour, lmi,last;
	scanf_s("%d:%d", &fhour, &fmi);
	scanf_s("%d:%d", &lhour, &lmi);
	if (lmi < fmi) {
		lmi = 60 + lmi - fmi;
		lhour--;
	}
	last = (lhour - fhour) * 60 + lmi;
	printf("%d",last );

	return 0;
}


int main() {
	int day;
	scanf_s("%d", &day);
	switch (day) {
	case 1:
		printf("吃米饭\n");
		break;
	case 2:
		printf("吃馒头\n");
		break;
	case 3:
		printf("吃米饭\n");
		break;
	case 4:
		printf("吃馒头\n");
		break;
	case 5:
		printf("吃米饭\n");
		break;
	case 6:
		printf("吃米饭\n");
		break;
	case 7:
		printf("吃馒头\n");
		break;
	default:
		break;
	}

	return 0;
}


int main() {
	long int x;
	scanf_s("%d", &x);
	int n = 0;
	do{
		n++;
		x = x / 10;
	}while (x != 0);
	printf("%d", n);

	return 0;
}

*/

/*
int main() {
	srand(time(0));
	int number = rand()%100+1;
	int count = 1, a;
	printf("请猜一个1-100之间的数字\n");
	scanf_s("%d", &a);
	do {
		if (a > number) {
			printf("你猜的数大了，请重新猜\n");
			scanf_s("%d", &a);
			count++;
		}
		else if (a < number) {
			printf("你猜的数小了，请重新猜\n");
			scanf_s("%d", &a);
			count++;
		}

	} while (a != number);
	printf("猜对了！你用了%d次机会",count);

	return 0;
}
*/

int main() {
	int number, count=0;
	float sum = 0;
	scanf_s("%d", &number);
	while (number != 0) {
		sum = sum + number;
		count++;
		scanf_s("%d", &number);
	}
	printf("average=%f	count=%d", sum/count, count);

	return 0;
}