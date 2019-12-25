//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include<stdio.h>
#include<math.h>
int main(){
	int a[5];
	int i=0;
	for(i=0;i<=4;i++){
	scanf("%d",&a[i]);
}
int j=0;int k=0;
int temp;
for(j=0;j<=3;j++){
	for(k=0;k<=3;k++){
		if(a[k]<a[k+1]){
		temp=a[k];
		a[k]=a[k+1];
		a[k+1]=temp;	
		}
	}
}
int sum=0;
int l=0;int u=4;
for(l=0;l<=4;l++){
	sum+=a[l]*pow(10,u);
	u--;
}
printf("%d\n",sum);
} 
