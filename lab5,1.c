  #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include <locale.h>

 int main() {

     setlocale(LC_ALL,"Russian");
     int n,m;
     
     printf("Введите размерность прямоугольной матрицы NxM");
     printf("\nВведите количество строк N:");
     scanf("%d",&n);
     printf("Введите количество столбцов M:");
     scanf("%d",&m);

     int i,j,a[n][m];
     printf("Задайте целочисленную матрицу:\n");
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             printf("Введите a[%d][%d], элемент матрицы\n",i,j);
             printf("a[%d][%d] = ",i,j);
             scanf("%d",&a[i][j]);
         }
     }  
     printf("Ваша введённая матрица:\n");
     for(i=0;i<n;i++){
	 	for(j=0;j<m;j++){
	 		printf("%d ",a[i][j]);
	 	}
	 	printf("\n");
	 }
     
     int k,p,l,o,kol[n],off[n][m];
	 for(i=0;i<n;i++){
	 	kol[i]=0;
	 	for(j=0;j<m;j++){
	 	off[i][j]=-1;
	 	}
	 	for(j=0;j<m-1;j++){
	 		l=1;
	 		o=0;
	 		for(k=j+1;k<m;k++){
	 			 for(p=0;p<m;p++){
	 			 	if(j==off[i][p])
	 				o=1;
	 			 }
	 			 if(o==1) break;
	 			 if(a[i][j]==a[i][k]){
	 			 	l+=1;
	 				off[i][k]=k;
	 			 }
			 }
			if(l!=1) kol[i]+=l;
	 	} 
	 }  
	 
	 int b,kolMAX,kolMAXN;
	 l=n;
	 for(i=0;i<l-1;l--){
	 	kolMAX=kol[i];
	 	kolMAXN=i;
	 	for(k=i+1;k<l;k++){
	 		if(kol[k]>=kolMAX){
	 			kolMAX=kol[k];
	 			kolMAXN=k;
	 		}
	 	}
	 	kol[kolMAXN]=kol[l-1];
	 	for(j=0;j<m;j++){
	 		b=a[l-1][j];
	 		a[l-1][j]=a[kolMAXN][j];
	 		a[kolMAXN][j]=b;
	 	}
	 } 
	 printf("Матрица упорядочена по количеству одинаковых элементов в каждой строке.\nКонечная матрица выглядит так:\n");
	 for(i=0;i<n;i++){
	 	for(j=0;j<m;j++){
	 		printf("%d ",a[i][j]);
	 	}
	 	printf("\n");
	 }
	 
	 for(j=0;j<m;j++){
	 	l=0;
	 	for(i=0;i<n;i++){
	 		if(a[i][j]<0) break;
	 		   else l+=1;
	 	}
	 	if(l==n){
	 		printf("Номер первого из столбцов, не содержащих ни одного отрицательного элемента - %d",j+1);
	 		break;
	 	}
	 }
	 
	 return 0;
 }  