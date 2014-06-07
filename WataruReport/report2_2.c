#include <stdio.h>
int MAXINPUT=1024;
int main(){
  int buf[MAXINPUT];
  int flg=0;
  int counter=0;
  printf("0が入力されるまで正の整数値を読み込みます(最大1024個)\n");
  while(flg==0&&counter<MAXINPUT){
    printf(":");
    scanf("%d",&buf[counter]);
    if(buf[counter]<0){
      printf("負の数です\n");
    }else{if(buf[counter]==0){
	flg=1;
    }else{
	counter=counter+1;
      }
    }
  }
/*
やや複雑なので解説しておく。
buf[n]=0の時counterを増やしてないため、
この時点でbuf[counter]は必ず0である。
下記のforループでは、i=counter-1まで実行される。
したがって、各種計算に最後の0は含まれない。
*/
  printf("%d個計算中...",counter);
  int nowmax=0;
  for(int i=0;i<counter;i++){
    if(buf[i]>nowmax)nowmax=buf[i];
  }
  int max=nowmax;
  printf("...");

  int nowmin=max;
  for(int i=0;i<counter;i++){
    if(buf[i]<nowmin)nowmin=buf[i];
  }
  int min=nowmin;
  printf("...");
  double average=0;
  int sum=0;
  for(int i=0;i<counter;i++){
    sum=sum+buf[i];
  }
  average=sum/(double)(counter);//counterの数値=bufの配列の個数-1。つまり0の分は含まれない
  printf("\n");
  printf("最大値\t%d\n最小値\t%d\n平均値\t%f\n",max,min,average);
  return 0;
}
