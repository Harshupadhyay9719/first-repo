#include <stdio.h>
void main(){
    printf("enter the rows and column for the 1st matrix :: \n");
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    int m1[a][b];
    printf("enter the entries in 1st matrix row wise ::\n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                scanf("%d",&m1[i][j]);
        }  
        printf("\n \n");   
    }
    printf("enter the rows and column for the 2nd matrix :: \n");
    scanf("%d %d",&c,&e);
    int m2[c][e];
    printf("enter the enteries in the array row wise ::\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<e;j++){
                scanf("%d",&m2[i][j]);
        }  
        printf("\n");   
    }
      // a*b   c*e  b==c
    int p=0;
    if (b!=c) {
        printf("the matrix are not compatable for multiplication  ::\n");
    }                                      
    else{
         printf("the order of new matrix is;\n");
         printf(" rows = %d \n column=%d \n",a,e);
         int m1m2[a][e];
         for(int i=0;i<a;i++){
            for(int j=0;j<c;j++){
                    for(int k=0;k<c;k++){
                             p=p+m1[i][k]*m2[k][j];
            }       m1m2[i][j]=p;
                  p=0;
            
         }
         }
    
    printf("the mltiplication of arrays is :: \n");
    for(int i=0;i<a;i++){
            for(int j=0;j<c;j++){
               printf("%d\t", m1m2[i][j]);
            }
            printf("\n");
    }
    }
}