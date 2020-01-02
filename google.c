//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>
int f(int a){
	int x=0;
	int cnt=0;
	int i=1;
	for(i=1;i<=a;i++){
		if(i==1){
			cnt++;
		}
		if(i/10==1){
			cnt++;
		}
		if(i/100==1){
			cnt++;
		}
	}
	if(a==cnt){
		x=1;
	}
	return x;
}
int main(){
	int n=100;
	int i;
	for(i=0;i<=100;i++){
		if(f(i)==1&&i!=1){
			printf("%d\n",i);
		}
	}
	return 0;
} 
