 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main() {

     setlocale(LC_ALL,"Russian");
     int n=6,m=6,a[n][m],i,j;
     printf("Задайте квадратную матрицу 6x6.\n");
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
              printf("Введите a[%d][%d] элемент матрицы: ",i+1,j+1);
              scanf("%d",&a[i][j]);
          }
     }
     printf("Ваша матрица:\n");
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             printf("%d ",a[i][j]);
         }
         printf(" \n");
     }
     
     int l,k,min,max,minA=0,maxA=0;
     for(i=0;i<3;i++){
         l=((i+1)*2)-2;
         k=((i+1)*2)-1;
         min=a[l][0];
         max=a[k][0];
         for(j=1;j<m;j++){
             if(a[l][j]<min){
                 min=a[l][j];
             }
             if(a[k][j]>max){
                 max=a[k][j];
             }
         }
         minA+=min;
         maxA+=max;
     }
     
     printf("\nСумма наименьших элементов нечётных строк матрицы = %d.",minA);
     printf("\nСумма наибольших элементов чётных строк матрицы = %d.",maxA);
     
     return 0;
}