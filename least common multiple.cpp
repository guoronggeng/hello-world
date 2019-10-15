#include <stdio.h>

  int main(){
  
  int a,b,i;
  a=6;
  b=9;
  
 for(i=b;i>0;i++)
  if(i%a==0 && i%b==0)
  {
  printf("两者最小公倍数是%d",i);
  break;
}
  return 0;
}

