//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include<stdio.h>
int prime(int a){
		int c=1;
	if(a==0||a==1){
		c=0;
	}
	if(a==2){
		c=1;
	}
	if(a>2){
	int i=2;
	for(i=2;i<=a-1;i++){
		if(a%i==0){
			c=0;
		}
	}
}
	return c;
}
int suprime1(int a[],int j){
	int i=0;
	int su=0;
	int sum=0;
	for(i=0;i<=j-1;i++){
		sum+=a[i];
	}
	if(prime(sum)==1){
		su=1;
	}
	return su;
}
int suprime2(int a[],int j){
	int i=0;
	int su=0;
	int sum=0;
	for(i=0;i<=j-1;i++){
		int c=a[i]*a[i];
		sum+=c;
	}
	if(prime(sum)==1){
		su=1;
	}
	return su;
}
int main(){
	int i=100;
	int b[1000];
	int cnt=0;
	for(i=100;i<=10000;i++){
		if(prime(i)==1){
			int w;
			int a[5];
			w=i;
			int j=0;
			while(w>0){
			a[j]=w%10;
			w=w/10;
			j++;	
			}
			int c=suprime1(a,j);
			int d=suprime2(a,j);
			if(c==1&&d==1){
				b[cnt]=i;
				cnt++;
			}
		}
	}
	int l=0;
	for(l=0;l<=cnt-1;l++){
		printf("%d\n",b[l]);
	}
	return 0;
} 
