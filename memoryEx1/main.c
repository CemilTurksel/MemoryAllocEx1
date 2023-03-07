#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generate_random(int A[],int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        A[i]=rand()%100;
    }
}
int main()
{
    int n;
    int *p;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    int A[n];
    generate_random(A,n);
    printf("The numbers generated:\n");
    for(int a=0;a<n;a++){
        printf("%d\t",A[a]);
    }
    printf("\n");
    printf("----------------------------------------");
    printf("\n");
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        *(p+i)=A[i];
    }
    for(int j=0;j<n;j++){
        printf("%d\t",(*(p+j))*(*(p+j)));
    }
    return 0;
}
