#include <stdio.h>
int main(){
  int a=0;
  printf("時限爆弾を設定します秒数を入力してください\n:");
  scanf("%d",&a);
  
  int hour=a/3600;
  int tmp_a=a-3600*hour;
  int minite=tmp_a/60;
  tmp_a=tmp_a-minite*60;
  int second=tmp_a;

  printf("\nこの爆弾は%d時間%d分%d秒後に爆発します~\n",hour,minite,second);
  return 0;
}
