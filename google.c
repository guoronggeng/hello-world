//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
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
