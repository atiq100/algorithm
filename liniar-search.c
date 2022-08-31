#include<stdio.h>
int main()
{
    int A[20],n,item,i,ind;
    printf("enter the number of array item:\n");
    scanf("%d",&n);
    printf("enter array items:\n",n);
    for(i=0;i<n;i++)
            scanf("%d",&A[i]);

            printf("enter number to be searched:");
                scanf("%d",&item);

                ind=liniar_search(A,n,item);
                if(ind>=0)
                    printf("item found in position %d",ind+1);

                else
                    printf("item not found");


}

int liniar_search(int A[],int n, int item)
{
    int i;
    for(i=0;i<=n;i++){

                if(A[i]==item){
                    return i;
                }
    }
    return -1;
}
