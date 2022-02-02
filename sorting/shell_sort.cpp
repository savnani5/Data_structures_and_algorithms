#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

// TC = O(nlogn) - but depends on how you are changing the gap

// Code is similar to Insertion Sort with some modifications
void shellsort(vector<int> &A, int n){
    for (int gap=n/2; gap>=1; gap/=2){
        for (int j=gap; j<n; j++){
            int temp = A[j];
            int i = j - gap;
            while (i >= 0 && A[i] > temp){
                A[i+gap] = A[i];
                i = i-gap;
            }
            A[i+gap] = temp;
        }
    }
}


int main()
{
    vector<int> A = {10, 40, 50, 100, 30, 20};
    int n = A.size();
    shellsort(A, n);
    for(int i=0; i<n; i++)
        cout << A[i] << " " ;
}