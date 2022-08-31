#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,67,89,100};
    int search=68;

    int left,right,middle;
    left=0;
    right=9;

  while(left<=right){
      middle=(left+right)/2;
    if(a[middle]==search){
        printf("item found at index:%d\n",middle);
        return 0;
    }
    else if(a[middle<search]){
        left=middle+1;
    }
    else{
        right=middle-1;
    }
  }
    printf("item not found\n");
    return 0;

  }

