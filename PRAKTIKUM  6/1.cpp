//DION SANDY ARA TAMBUNAN
//20051397056
//MI_B_2020
#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("DION SANDY ARA TAMBUNAN\n");
 printf("20051397056\n");
 printf("MI_B_2020\n");
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
//DION SANDY ARA TAMBUNAN
//20051397056
//MI_B_2020
