#include <stdio.h>
#include <stdbool.h>
 
float a[11][11],max=-1e9,m,n;
int i,j,save;
 
int main() {
 
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=4; j++) 
        {
            printf ("vvedite element [%d %d]", i, j);
            scanf ("%f", &a[i][j]);
        }
    }
 
    for(i=1; i<=3; i++)
    {
        if(a[i][1]>max){save=i; max=a[i][1];}
    }
 
    for(i=1; i<=4; i++)
    {
        m=a[1][i];
        n=a[save][i];
        a[1][i]=n;
        a[save][i]=m;
    }
 
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(j==1) m=a[i][j];
            a[i][j]/=m;
        }
    }

    for(i=2; i<=3; i++)
    {
        for(j=1; j<=4; j++)
        {
            a[i][j]-=a[1][j];
        }
    }
 
    max=0;

    for(i=2; i<=3; i++)
    {
        if(a[i][2]>max){max=a[i][2],save=i;}
    }

    if(save==3)
    {
        for(i=1; i<=4; i++)
        {
            m=a[3][i];
            n=a[2][i];
            a[2][i]=m;
            a[3][i]=n;
        }
    }

    for(i=2; i<=3; i++)
    {
        for(j=2; j<=4; j++)
        {
            if(j==2) m=a[i][j];
            a[i][j]/=m;
        }
    }

    for(i=2; i<=4; i++) a[3][i]-=a[2][i];

    a[3][4]/=a[3][3];
    a[3][3]=1;
 
    float x1,x2,x3;

    x3=a[3][4];
    x2=a[2][4]-x3*a[2][3];
    x1=a[1][4]-x2*a[1][2]-x3*a[1][3];
 
    printf("x1=%.2f\nx2=%.2f\nx3=%.2f\n", x1,x2,x3);
 
    return 0;
}
