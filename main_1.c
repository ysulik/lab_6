#include <stdio.h>
#include <stdlib.h>
int main() 
{
int i=0,n,Nmax=0,absmax=0,comp=1,c,a=0;
printf("Vvedite kol-vo elementov ");
scanf("%d",&n);
printf("Vvedite C ");
scanf("%d",&c);
int* block=(int*)malloc(n*sizeof(*block));
do
{
	printf("\n Vvedite element massiva ");
	scanf("%d",&block[i]);
	i++;
}while(i<n);
for(i=0;i<n;i++){
	if(abs(block[i])>absmax) {
		a=i;
		absmax=abs(block[i]);
    }
}
for(a=+1;a<n;a++)
{
	comp*=block[a];
}
for(i=0;i<n;i++){
	if(block[i]>c) Nmax++;
}
printf("\n Kol-vo elementov>C %d\n",Nmax);
printf("\n Proizvedenie elementov, raspolojennih posle maximal'nogo po modolyu elementa= %d",comp);
	free(block);
	return 0;
}
