/*
    450-DSA-Cracker
	->Find occurence of x in the specified array.
    by Shubh Sharma

    Ex. 1
    Input:
    n=9, x=5
    arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
    Output:  2 5
    Explanation: First occurrence of 5 is at index 2 and last
    occurrence of 5 is at index 5. -

    Ex. 2
    Input:
    n=9, x=7
    arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
    Output:  6 6 
*/
#include <iostream>

void occurences(int arr[], int n, int x)
{
    int first, second;
    first = second = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x && first == -1)
        {
            first = i;
            second = i;
        }
        else if(arr[i] == x)
        {
            second = i;
        }
    }

    std::cout << "Output: " << first << " " << second;
}

int main()
{
    int n = 9;
    int x = 5;
    int arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 };
    occurences(arr, n, x);
    return 0;
}