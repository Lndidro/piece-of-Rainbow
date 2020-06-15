 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main() {
     
     setlocale(LC_ALL,"Russian");
     int n, m;
     
     printf("Введите количество элементов матрицы a: ");
     scanf("%d",&n);
     printf("Введите количество элементов матрицы b: ");
     scanf("%d",&m);
     
     int c[n+m], i;
     for(i=0;i<n;i++){
         printf("Введите a[%d] элемент массива: ",i+1);
         scanf("%d",&c[i]);
     }
     for(i=0;i<m;i++){
         printf("Введите b[%d] элемент массива: ",i+1);
         scanf("%d",&c[i+n]);
     }
     
     int j, k;
     for(j=0;j<n+m-1;j++){
         for(i=0;i<n+m-1;i++){
             if(c[i+1]<c[i]){
                 k=c[i+1];
                 c[i+1]=c[i];
                 c[i]=k;
             }
         }
     }
     
     printf("Массивы a[%d] и b[%d] были объединены и отсортированы по неубыванию.\nКонечный массив c[%d] выглядит так: ",n,m,n+m);
     for(i=0;i<n+m;i++){
         printf("%d ",c[i]);
     }
     
     return 0;
 }
