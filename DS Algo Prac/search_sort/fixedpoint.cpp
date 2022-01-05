/*
    450-DSA-Cracker
	->Find a Fixed Point (Value equal to index) in a given array
    Given an array Arr of N positive integers.
    Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).

    Input: 
    N = 5
    Arr[] = {15, 2, 45, 12, 7}
    Output: 2
    Explanation: Only Arr[2] = 2 exists here.

    by Shubh Sharma
*/

#include <iostream>

void fixedPoint(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == i+1)
        {
            std::cout << arr[i];
        }
    }
}

int main()
{
    int n = 5;
    int arr[] = {15, 2, 45, 4, 7};
    fixedPoint(arr, n);
    return 0;
}