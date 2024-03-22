#include<stdio.h>

struct st{
 int a;
 char b;
} x = {1,'c'};

int main() {
 printf("구조체 변수 x의 값: %d, %c\n", x.a, x.b);

 struct st *p = &x;

 printf("구조체 포인터 p를 이용한 값 출력 : %d, %c\n", p->a, p->b);

 return 0;
}
