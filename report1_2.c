#include <stdio.h>
/*int a=0;
  int hour=a/3600;
  int tmp_a=a-3600*hour;
  int minite=tmp_a/60;
  tmp_a=tmp_a-minite*60;
  int second=tmp_a;
*/
int main(){
  int p_hour=0;
  int p_minite=0;
  int p_second=0;
  int n_hour=0;
  int n_minite=0;
  int n_second=0;
  printf("前の時刻を入力してください\n");
  printf("p_hour:");
  scanf("%d",&p_hour);
  printf("p_minite:");
  scanf("%d",&p_minite);
  printf("p_second:");
  scanf("%d",&p_second);
  printf("後の時刻を入力してください\n");
  printf("n_hour:");
  scanf("%d",&n_hour);
  printf("n_minite:");
  scanf("%d",&n_minite);
  printf("n_second:");
  scanf("%d",&n_second);
  int p_byo=p_hour*3600+p_minite*60+p_second;
  int n_byo=n_hour*3600+n_minite*60+n_second;
  printf("\np=%d\nn=%d\n",p_byo,n_byo);

  int a=n_byo-p_byo;
  int hour=a/3600;
  int tmp_a=a-3600*hour;
  int minite=tmp_a/60;
  tmp_a=tmp_a-minite*60;
  int second=tmp_a;
  printf("%d時%d分%d秒から%d時%d分%d秒までは%d時間%d分%d秒ある\n",p_hour,p_minite,p_second,n_hour,n_minite,n_second,hour,minite,second);
  return 0;
  }

