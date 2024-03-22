#include<stdio.h>
void swap(int *a, int *b);

int main() {
 int a[2] = {3, 20};

 printf("함수사용전:%d,%d\n",a[0],a[1]);
 swap(&a[0],&a[1]);
 printf("함수사용후:%d,%d\n",a[0],a[1]);

 return 0;
}

void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp
}
