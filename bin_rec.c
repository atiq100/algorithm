#include <stdio.h>

void binary_search(int [], int, int, int);


int main()
{
    int key, size, i;
    int list[25];

    printf("Enter size of a Array list: ");
    scanf("%d", &size);
    printf("Enter elements\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }

    printf("\n");
    printf("Enter key to search\n");
    scanf("%d", &key);
    binary_search(list, 0, size, key);

}
void binary_search(int list[], int low, int high, int key)
{
    int mid;

    if (low > high)
    {
        printf("item not found\n");
        return;
    }
    mid = (low + high) / 2;
    if (list[mid] == key)
    {
        printf("item found\n ");
    }
    else if (list[mid] > key)
    {
        binary_search(list, low, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        binary_search(list, mid + 1, high, key);
    }
}
