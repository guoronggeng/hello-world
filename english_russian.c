//һ���������� 72 �ˣ����л�Ӣ����� 48 �ˣ��������� 36 �ˣ�������������� 8 �ˣ������������
//_______����
//��̣�������������72��
//     �����Ӣ��48��
//     ��������36��
//     ����������������8��
//     ��������������   �� 
//     ������������ݴ����޷�����
#include<stdio.h>
int main(){
	int n;
	int english;
	int russian;
	int both;
	int neither;
	scanf("%d",&n);
	scanf("%d",&english);
	scanf("%d",&russian);
	scanf("%d",&neither);
	both =english+russian+neither-n;
	if(both>0){
		printf("%d\n",both);
	}
	else{
		printf("�������ݴ����޷�����\n");
	} 
} 
