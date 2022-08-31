#include<stdio.h>
void main()
{
    int n=10, i,j,temp;
    int data[10]={5,2,7,4,9,6,11,10,19,17};

    for(i=0;i<n;i++){
        j=i;
        while(j>0 && data[j]<data[j-1]){
            temp=data[j];
            data[j]=data[j-1];
            data[j-1]=temp;
            j--;
        }
    }
    printf("in assending order:\n");
    for(i=0;i<n;i++){
        printf("%d\n",data[i]);
    }

}
