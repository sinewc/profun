#include <stdio.h>
int main(void) {
  int num[3], add[3], temp;
  for (int i = 0; i < 3; i++)
  {
      scanf_s("%d", &num[i]);
  }
  char t[4];
  scanf_s("%s",t,4);
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
        if (t[j] == 'A')
        {
            add[j] = 1;
        }
        else if(t[j] == 'B') 
        {
            add[j] = 2;
        }
        else
        {
            add[j] = 3;
        }
    }
  }
  for(int i=0; i<2; i++){
    for(int j=i+1; j<3; j++){
     if(num[i]>num[j]){
       temp = num[j];
       num[j] = num[i];
       num[i] = temp;
     }
    }
  }
  for (int i = 0; i < 3; i++)
  {
      printf("%d ",num[add[i] - 1]);
  }
}