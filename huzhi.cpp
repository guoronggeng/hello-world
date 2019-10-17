#include <stdio.h>

 int main(){
 
 int a,b,c=2,i;
 printf ("a=");
 scanf ("%d",&a);
 printf ("b=");
 scanf ("%d",&b);

 while(c!=0&&c!=1){c=a%b;
 a=b;
 b=c;
 }
 if(c==1){
 printf("yes");
 }
 else{
 	printf("no");
 }
 return 0;
 }
