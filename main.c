#include <stdio.h>
#include <limits.h>
 
// A naive solution to finding maximum subarray sum using divide-and-conquer
int maximum_sum(int nums[], int n)
{
    int max_sum = INT_MIN;
    int sum = 0;
 
    // do for each subarray starting with `i`
    for (int i = 0; i < n; i++)
    {
        // calculate the sum of subarray `nums[i…j]`
 
        sum = 0;    // reset sum
 
        // do for each subarray ending at `j`
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
 
            // if the current subarray sum is greater than the maximum
            // sum calculated so far, update the maximum sum
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
 
    return max_sum;
}
 
int main(void)
{
    int arr[] = { 2, -4, 1, 9, -6, 7, -3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("The maximum sum of the subarray is %d", maximum_sum(arr, n));
 
    return 0;
}
