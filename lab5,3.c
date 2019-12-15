 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main() {

     setlocale(LC_ALL,"Russian");
     int n,m;
     printf("Задайте размерность матрицы NxM.\n");
     printf("Введите количество строк N: ");
     scanf("%d",&n);
     printf("Введите количество таблиц M: ");
     scanf("%d",&m);
     
     int a[n][m],i,j;
     printf("Задайте матрицу.\n");
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
         printf("\n");
     }
     
     int l;
     for(i=0;i<n;i++){
         l=1;
         for(j=0;j<m-1;j++){
             if(a[i][j+1]>=a[i][j])
             l+=1;
             else break;
         }
         if(l==m){
             printf("Первая строка в матрице, все элементы которой упорядочены по возрастанию - %d\n",i+1);
             break;
         }
     }
     
     int b;
     for(j=0;j<m/2;j++){
         b=a[i][m-j-1];
         a[i][m-j-1]=a[i][j];
         a[i][j]=b;
     }
     printf("Упорядоченность элементов этой строки изменена на обратную.\n");
     
     printf("Конечная матрица выглядит так:\n");
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }
     
     return 0;
}
