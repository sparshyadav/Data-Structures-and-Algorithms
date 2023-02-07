// Write a program to find all the pairs in an array whose sum is equal to another number s.

/* Approach-
1. Take the first number of the array, and then compare it with other numbers, if their sum is equal to s, then create a temperary vector and push the two numbers into that vector.
2. If there is no match then forward the numbers.
3. As the array is in increasing order thus it can not go on the previous term, as if there would've been a match then it would've come across in the previous matching round.
4. Now push the temperorary vector into a new vector ans.
5. Sort the ans vector, and return it.
*/
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    int i, j, n = arr.size();

    vector<vector<int>> v;

    sort(arr.begin(), arr.end());

    for (i = 0; i < n - 1; i++)

    {

        for (j = i + 1; j < n; j++)

        {

            if ((arr[i] + arr[j]) == s)

            {

                vector<int> x;

                x.push_back(arr[i]);

                x.push_back(arr[j]);

                v.push_back(x);
            }
        }
    }

    return v;
}