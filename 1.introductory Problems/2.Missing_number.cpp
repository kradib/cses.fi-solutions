/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints

    2≤n≤2⋅105


Example

Input:
5
2 3 1 5

Output:
4
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int x=1;
    for(int i=2;i<=n;i++){
        x^=i;
    }

    for(int i=0;i<n-1;i++){
        x^=arr[i];
    }
    cout<<x;
    return 0;

}