 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main() {

     setlocale(LC_ALL,"Russian");
     int i,j,k,n,m;
     
     printf("Введите размерность матрицы NxM");
     printf("\nВведите количество строк N:");
     scanf("%d",&n);
     printf("Введите количество таблиц M:");
     scanf("%d",&m);

     int a[i][j];

     printf("Задайте матрицу:\n");
     for(i=0;i<n;i++) {
         for (j=0;j<m;j++){
             printf("Введите a[%d][%d], элемент матрицы\n",i,j);
             printf("a[%d][%d] = ",i,j);
             scanf("%d",&a[i][j]);
         }
     }     
     
 }    