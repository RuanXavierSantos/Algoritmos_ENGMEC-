#include <stdio.h>
#define n 3
#define m 3
int main(){
   int mat[n][m],lin,col,linha,a,b,
      maior,minimax;

   for(lin=0;lin<n;lin++)
   for (col=0;col<m;col++){
      printf("\n[%d][%d]:",lin,col);
      scanf("%d",&mat[lin][col]);
   }
   maior = mat[0][0];
   for(lin=0;lin<n;lin++)
      for(col=0;col<m;col++)
       if(mat[lin][col]>maior){
         maior=mat[lin][col];
         linha=lin;
       }
   minimax = mat[linha][0];
   for(col=1;col<m;col++)
      if(mat[linha][col]<minimax){
        minimax = mat[linha][col];
        a=linha;
        b=col;}
   printf("\n Elemento minimax = %d",minimax) ;
   printf("\n\n Localization: [%d][%d]",a,b);

   return 0;
}
