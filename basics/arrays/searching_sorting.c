#include <stdio.h>

int printarray(int arr[],int n);
// searching and sorting example

int main()
{

    // SORTING

    /*
    the sorting in the feld of programing it is the primary phase of data structurs for porforming searching
    the
    */
    // there are many sorting algorithums but in this section we focuse on insertion sort algorithum only
    // to leare more about we stay in repo for data sturctus cource

    printf("\t\tEXAPLE OF SORTING\n");
    // to porform sorting we need a array of elements
    int arr[] = {2, 4, 8, 1, 6, 10, 4, 9, 7, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printarray(arr,n);

    printf("\t\tEXAMPLE OF SEARCHING\n");
    // SEARCHING
    /*
    the searching can be porform in the array elements
    first it will travarce the array and find the element in the array
    searching can be porferm in sorted array and also in unsorted array
    (sorted) is nuthing but a increasing or decreasing order of elements is the array
    I)for the sorted array therea re many types of searching algorithums can be porformed
    1)lineare searche of bigo(n) time complexity
    2)binery search of big0(logn) time complexity
    II)for unsorted array we can porform only one algorithom (lineare algorithom)
    */
    
    int search_sort;

    printf("sortsed array:");

    printarray(arr,n);

    printf("you can now enter the element to search:");
    scanf("%d",&search_sort);

    for(int i=0;i<n;++i){
        printf("searching linearly.....\n");
        if (arr[i]==search_sort)
        {
            printf("finded the element %d at %d index",search_sort,i);
        }
    }

    printf("unsorted array\n");
    int array[]={12,18,10,14,16,12,11,16,18};
    int search_unsort;

    printf("you can now enter the element to search:");
    scanf("%d",&search_unsort);

    for(int i=0;i<n;++i){
        printf("searching linearly.....\n");
        if (array[i]==search_unsort)
        {
            printf("finded the element %d at %d index",search_unsort,i);
        }
    }

    return 0;
}

int printarray(int arr[],int n){
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}