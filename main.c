#include <stdio.h>

int main(void) {
  int i,j;
for(i=0;i<11;i++){for(j=0;j<11;j++){printf("%d x %d = %d\n",i,j,i*j);}printf("\n\n");}
  return 0;
}