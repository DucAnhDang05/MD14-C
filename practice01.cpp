#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int n,m;
	printf("Nhap vao 2 gia tri: ");
	scanf("%d %d",&n,&m);
	int *str1=&n;
	int *str2=&m;
	swap(str1,str2);
	printf("%d %d",*str1,*str2);
}
