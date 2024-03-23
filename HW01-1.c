#include<stdio.h>
void swap(int *arr);

int main() {
 int a[2] = {3, 20};

 printf("함수사용전:%d,%d\n",a[0],a[1]);
 swap(a);
 printf("함수사용후:%d,%d\n",a[0],a[1]);

 return 0;
}

void swap(int *arr) {
 int temp = arr[0];
 arr[0] = arr[1];
 arr[1] = temp
}
