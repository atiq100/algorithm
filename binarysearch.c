#include<stdio.h>
main()
{
    int i,first,last,mid,n,loc,data[100];
    printf("Enter the number of elements\n:");
    scanf("%d",&n);
    printf("enter %d intigers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);
    printf("Enter the item to be searched:");
scanf("%d",&loc);
first=0;
last=n-1;
mid=(first+last)/2;
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


