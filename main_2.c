#include <stdio.h>
#include <stdlib.h>

int main() {
	int string=0,max=0,rep=0,n,m,ctr=0,i,j,numb,a=0,b=0,c=0,k=0,*ptr,line=0;
	printf("Vvedite m ");
	scanf("%d",&m);
	printf("Vvedite n ");
	scanf("%d",&n);
	int **block=(int**)malloc((m*n)*sizeof(int));
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("Vvedite element ");
		scanf("%d",*(block+i)+j);
		}
	}

for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		if(*(*(block+i)+j)==0) ctr++;
		}if(ctr>0){
		 line++;
		 ctr=0;
		}}
		
			for(i=0;i<m;i++){
				rep=0;
				for(j=0;j<n;j++){
					if((*(*(block+i)+j)) == *(*(block+i)+j-1)) rep++;
				}
				if(rep>max){
			 max=rep;
			 string=i+1;}
			}
		

              printf("kol-vo strok s 0 elem %d\n",line);
	printf("nomer stroki s naibol'shim chislom povtorenii %d",string);

	return 0;
}


