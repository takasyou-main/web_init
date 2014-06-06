#include <stdio.h>
int main(){
  int  weight=0;
  printf("郵便物の重さ(g)を入力してください\n:");
  scanf("%d",&weight);
  printf("料金(円)は下記の通りになります。\n");
if(weight<100){
   printf("%d\n",1000);
   return 0;
}

if(weight<=500){
  int i=1;
  while( (weight-100)>i*100 ){
	    i=i+1; 
  }
  printf("%d\n", i*500+1000);
  return 0;
}



if(weight<=1000){
  int  i=1;
  while( (weight-500)>i*100){
      i=i+1;
    }
  printf("%d\n", i*300+3000  );
 }else{printf("重量オーバーです\n");}
}
