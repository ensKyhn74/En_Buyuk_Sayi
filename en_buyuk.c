#include <stdio.h>
// klavyeden girilen 3 sayıdan en büyüğünü bul,ekrana yazdır

int main() 

{
 
  int x,y,z;
 
  printf("sırayla 3 tane tamsayi girin: ");
  scanf("%d %d %d",&x,&y,&z);
 
  if(x > y && x > z)
  {
   printf("%d maksimum sayidir",x);
  }
 
  else if(y > x && y > z)
  {
   printf("%d maksimum sayidir",y);
  }
  
  else if(z > y && z > x)
  {
   printf("%d maksimum sayidir",z);
  }
  
  return 0;

}