#include<stdio.h>
int main(){
    int ar[20], n,i;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("enter the array items:",n);
    for(i=0;i<n;i++)
        scanf("%d",& ar[i]);

        merge_sort(ar,0,n-1);
        printf("sorted array:");
         for(i=0;i<n;i++)
            printf("%d ",ar[i]);
         return 0;
}
void merge_sort(int A[],int low,int high)
{
    int mid;
    if(low<high){
        mid = (low+high)/2;
        merge_sort(A,low,mid);
        merge_sort(A,mid+1,high);
        merge(A,low,mid,high);
    }
    return 0;
}
void merge(int A[],int l,int m, int h)
{
    int arr1[10],arr2[10];
    int n1 = m-l+1;
    int n2 = h-m;
    int i,j,k;

    for(i=0;i<n1;i++)
        arr1[i]=A[l+i];
    for(j=0;j<n2;j++)
        arr2[j]=A[m+j+1];

    arr1[i]=9999;
    arr2[j]=9999;

    i=0;
    j=0;
    for(k=l;k<=h;k++){
        if(arr1[i]<=arr2[j]){
            A[k]=arr1[i++];

        }
        else{
            A[k]=arr2[j++];

        }
    }
}
