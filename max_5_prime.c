//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ
//�����������λ����_______��
//��̣���������5�����֣����������Ϊ����5λ������������������5λ�����������ERROR��
#include<stdio.h>
#include<math.h>
int entire[200];
int w=0;
int prime(int b[],int e){
	int i=2;
	int c=1;
	for(i=2;i<=b[e]-1;i++){
		if(b[e]%i==0){
			c=0;
		}
	}
	return c;
}
void all(int a[],int b ,int c){
	if(b==c){
		int j=0;
		int k=4;
		int sum=0;
		for(j=0;j<=4;j++){
			sum+=a[j]*pow(10,k);
			k--;
		}
		entire[w]=sum;
		w++;
	}
	else{
		int i=b;
		int temp;
		for(i=b;i<=c;i++){
			temp=a[i];
			a[i]=a[b];
			a[b]=temp;
			all(a,b+1,4);
			temp=a[i];
			a[i]=a[b];
			a[b]=temp;
		}
	}
}
int main(){
	int a[5];
	int i=0;
	for(i=0;i<=4;i++){
			scanf("%d",&a[i]);
	}
	int j=0,k=0;
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
	all(a,0,4);
	int l=0;
	int go=0;
	for(l=0;l<=w-1;l++){
		if(prime(entire,l)==1){
			printf("%d\n");
			go=1;
			break;
		}
	}
	if(go==0){
		printf("ERROR\n");
	}
	return 0;
} 
