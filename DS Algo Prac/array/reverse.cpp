/*
    450-DSA-Cracker
	->Reverse the array 3
    by Shubh Sharma

    Input  : arr[] = {1, 2, 3}
    Output : arr[] = {3, 2, 1}

    Input :  arr[] = {4, 5, 1, 2}
    Output : arr[] = {2, 1, 5, 4}
*/
#include <iostream>

void reverse(int arr[], int size)
{
    int temp;

    for(int i = 0; i < size/2; i++)
    {
        //Swap
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }

}

void printArray(int arr[], int size)
{
    std::cout << "{ ";
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}" << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    reverse(arr, size);
    printArray(arr, size);

    int arr2[] = {4, 5, 1, 2};
    size = sizeof(arr2)/sizeof(arr2[0]);

    printArray(arr2, size);
    reverse(arr2, size);
    printArray(arr2, size);
    
    return 0;
} 