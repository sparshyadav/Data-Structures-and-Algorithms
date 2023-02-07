// Write a program to return the common elements in two sorted arrays. -Coding Ninjas

/* Approach 1-
1. Check every element of arr1 with every element of arr2.
2. If there is no match, then check if element of arr1 is smaller than element of arr2, if smaller, then break the loop, as both the elements are in increasing order, and if the element of arr1 is smaller than the current element of arr2, then the next element of arr2 would definitely be greater than that of arr1.
3. If there is a match, then push that element from arr1 to a new vector.
4. Update the value of the common element of arr2 such that it doesn't match with any other element of arr1 i.e. with something negative(according to the constraints given in the question).
5. Break the loop.
6. Return the vector.
*/
#include <bits/stdc++.h>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] < arr2[j])
            {
                break;
            }
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
                arr2[j] = -1;
                break;
            }
        }
    }
    return ans;
}

/* Approach 2-
1. Initialize two variables i, and j with 0.
2. If the element of arr1 is equal to element of arr2, then push it to the vector, and increment i, and j.
3. If the element of arr1 is smaller than element of arr2, then increment i, because then every other element of arr2 will be greater than the element of arr1.
4. If the element of arr2 is smaller than element of arr1, then increment j.
5. Return the vector.
*/
#include <bits/stdc++.h>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
