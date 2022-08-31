#include<stdio.h>
#define max 100
void binary_search(int[],int,int);
main()
{
    int ar[max],n,i,item;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("enter array items:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    printf("enter a number to be searched:");
    scanf("%d",&item);
    binary_search(ar,n,item);
}
void binary_search(int data[],int loc, int n)
{
   int first=0;
   int last=n-1;
   int mid=(first+last)/2;
while(first<=last){
    if(data[mid]<loc)
        first=mid+1;
    else if(data[mid]==loc){
        printf("%d found at location %d\n",loc,mid+1);
        break;
    }
    else
        last=mid-1;
    mid=(first+last)/2;
}
if(first>last)
    printf("not found! %d is not present in the list\n",loc);
    }



