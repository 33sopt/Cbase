#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
int main() {
	int a, b, c;
	int c1, c2, c3, c4;
	printf("������������λ��������\n");
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
		printf("���׷�\n");
		break;
	case 2:
		printf("����ͷ\n");
		break;
	case 3:
		printf("���׷�\n");
		break;
	case 4:
		printf("����ͷ\n");
		break;
	case 5:
		printf("���׷�\n");
		break;
	case 6:
		printf("���׷�\n");
		break;
	case 7:
		printf("����ͷ\n");
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
	printf("���һ��1-100֮�������\n");
	scanf_s("%d", &a);
	do {
		if (a > number) {
			printf("��µ������ˣ������²�\n");
			scanf_s("%d", &a);
			count++;
		}
		else if (a < number) {
			printf("��µ���С�ˣ������²�\n");
			scanf_s("%d", &a);
			count++;
		}

	} while (a != number);
	printf("�¶��ˣ�������%d�λ���",count);

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