 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main() {

     setlocale(LC_ALL,"Russian");
     int n,m;
     printf("������� ����������� ������� NxM.\n");
     printf("������� ���������� ����� N: ");
     scanf("%d",&n);
     printf("������� ���������� ������ M: ");
     scanf("%d",&m);
     
     int a[n][m],i,j;
     printf("������� �������.\n");
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
              printf("������� a[%d][%d] ������� �������: ",i+1,j+1);
              scanf("%d",&a[i][j]);
          }
     }
     printf("���� �������:\n");
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
             printf("������ ������ � �������, ��� �������� ������� ����������� �� ����������� - %d\n",i+1);
             break;
         }
     }
     
     int b;
     for(j=0;j<m/2;j++){
         b=a[i][m-j-1];
         a[i][m-j-1]=a[i][j];
         a[i][j]=b;
     }
     printf("��������������� ��������� ���� ������ �������� �� ��������.\n");
     
     printf("�������� ������� �������� ���:\n");
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }
     
     return 0;
}