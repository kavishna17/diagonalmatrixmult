#include <bits/stdc++.h>
using namespace std;
 

int productDiagonals(int arr[][100], int n)
{
 
    int product = 1;
    for (int i = 0; i < n; i++) {
        product = product * arr[i][i];
        product = product * arr[i][n - i - 1];
    }
    if (n % 2 == 1) {
        product = product / arr[n / 2][n / 2];
    }
 
    return product;
}
int main()
{
    int arr1[100][100] = { { 1, 2, 3, 4 },
                           { 5, 6, 7, 8 },
                           { 9, 7, 4, 2 },
                           { 2, 2, 2, 1 } };
    
    cout << productDiagonals(arr1, 4) << endl;
 
    int arr2[100][100] = { { 2, 1, 2, 1, 2 },
                           { 1, 2, 1, 2, 1 },
                           { 2, 1, 2, 1, 2 },
                           { 1, 2, 1, 2, 1 },
                           { 2, 1, 2, 1, 2 } };
   
    cout << productDiagonals(arr2, 5) << endl;
    return 0;
}
