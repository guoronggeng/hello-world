#include <stdio.h>

  int main(){
  
  int a,b,i;
  a=6;
  b=9;
  
 for(i=b;i>0;i++)
  if(i%a==0 && i%b==0)
  {
  printf("������С��������%d",i);
  break;
}
  return 0;
}

