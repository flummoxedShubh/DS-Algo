/*
    Question by Frolic Frog Studios
    CHUTYA COMPANY CHUTYA INTERVIEWER BEWARE OF THIS SHEET.
    Solved by Shubh Sharma
    PROBLEM STATEMENT:---------------------------------------------------------------------------------------------------------------
    Consider a two dimensional array, arr of size n*n where arr[i][j] denotes the cost to complete the jth task by the ith employee.
    Any employee can be assigned to perform any task. 
    Please write an algorithm to assign the tasks such that exactly one employee is allocated exactly one task 
    in such a way that the total cost of the assignment is minimized.
    ---------------------------------------------------------------------------------------------------------------------------------
    Ex.1: Input: arr[][] = {{6, 5}, {7, 1}}
    Output: 7
    Explanation: The optimal assignment is to assign job 1 to the 1st worker, job 2 to the 2nd worker.
    Hence, the optimal cost is 6 + 1 = 7.
    ---------------------------------------------------------------------------------------------------------------------------------
    Example 2:
    Input: arr[][] = {{3500, 5000, 4500}, {5000, 7000, 4500}, {3000, 5000, 3500}}
    Output: 12500
    Explanation: The optimal assignment is to assign job 2 to the 1st worker, job 3 to the 2nd worker and job 1 to the 3rd worker.
    Hence, the optimal cost is 5000 + 4500 + 3000 = 12500.
*/

#include <iostream>

const int N = 3;
const int T = 3;

// assigned | 0 | 0 | 0 | 0 | 
// assigned | 1 | 0 | 0 | 0 |, if the ith job is assigned to the first employee

//Here n is the number of employees and t is the number of tasks.
int costMinimizer(int arr[N][T])
{
    int min = INT_MAX;
    int sum = 0;
    int assigned[N] = {}; 
    int assignTemp = 0;
    for(int i = 0; i < T; i++) //i: tasks
    {
        min = INT_MAX;
        for(int j = 0; j < N; j++) //j: employee
        {
            //For each employee performing the same task which one does it in minimum cost.
            if(arr[j][i] <= min && assigned[j] == 0) // check if that person doesnt have a job assigned
            {
                min = arr[j][i];
                // Note down the most recent person who got the job
                assignTemp = j; 
            }
        }
        // In the assigned array set the toggle to 1 for the employee(j) who got the job.
        assigned[assignTemp] = 1;
        sum += min;
    }

    return sum;
}

int main()
{ 
    int arr[N][T] = {{3500, 5000, 4500}, {5000, 7000, 4500}, {3000, 5000, 3500}};
    std::cout << costMinimizer(arr) << std::endl;
    return 0;
}