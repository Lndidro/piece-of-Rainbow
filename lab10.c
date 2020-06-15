 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main() {
     
     setlocale(LC_ALL,"Russian");
     int i, j;
     float m[3][4], x1, x2, x3, k, l;
     
     /*
     1.14*x1-2.15*x2-5.11*x3=-4.16
     -0.71*x1+0.81*x2-0.02*x3=-0.17
     0.42*x1-1.13*x2+7.05*x3=6.15
     */
     
     for(i=0;i<3;i++){
         for(j=0;j<4;j++){
             printf("Введите m[%d][%d] элемент матрицы: ",i+1,j+1);
             scanf("%f",&m[i][j]);
         }
     }
     
     k=m[0][0];
     for(j=0;j<4;j++){
         m[0][j]/=k;
     }
     
     k=m[1][0];
     l=m[2][0];
     for(j=0;j<4;j++){
         m[1][j]-=m[0][j]*k;
         m[2][j]-=m[0][j]*l;
     }
     
     k=m[1][1];
     for(j=1;j<4;j++){
         m[1][j]/=k;
     }
     
     k=m[2][1];
     for(j=1;j<4;j++){
         m[2][j]-=m[1][j]*k;
     }
     
     k=m[2][2];
     for(j=2;j<4;j++){
         m[2][j]/=k;
     }
     
     x3=m[2][3];
     x2=m[1][3]-m[1][2]*x3;
     x1=m[0][3]-m[0][2]*x3-m[0][1]*x2;
     printf("x1 = %f, x2 = %f, x3 = %f",x1,x2,x3);
     
     return 0;
 }
