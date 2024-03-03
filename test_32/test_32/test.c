#include<stdio.h>

/*
 #define AMOUNT 100
int main() {
	int a, b;
	printf("请输入两个整数：");
	scanf_s("%d %d", &a,&b);
	printf("a=%d,b=%d\n",a,b);
	printf("%d",AMOUNT);
	return 0;
} 
*/
/*
void fun(char *str) {
	int i, j;
	for (i = 0;*(str+i);i++)
		if (*(str + i) == 32) {
			for (j = i + 1; *(str + j); j++)
				*(str + j - 1) = *(str + j);
			*(str + j - 1) = 0;
			i = 0;
		}
}


int main() {
	char str[] = "asd af aa z67";
	fun(str);
	printf("%s", str);

	return 0;
}


int main() {
	int nowtime, last, shi, fen;
	scanf_s("%d %d", &nowtime, &last);
	shi = (nowtime / 100 * 60 + nowtime % 100 + last) / 60;
	fen = (nowtime / 100 * 60 + nowtime % 100 + last) % 60;
	printf("%d:%d", shi, fen);

	return 0;
}
*/

int main() {
	int x,s,g,x1;
	scanf_s("%d", &x);
	s = x / 16;
	g = x % 16;
	x1 = s * 10 + g;
	printf("%d\n", x1);
	printf("%x\n", x);
	return 0;
}


