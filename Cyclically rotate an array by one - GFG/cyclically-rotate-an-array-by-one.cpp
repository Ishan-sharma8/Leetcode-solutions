// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends

void rotate(int arr[], int n)
{
//     int temp;
//     int last=arr[n-1];
//   for(int i=n-1;i>0;i--){
//       temp=arr[i-1];
//       arr[i]=temp;
//   } 
//   arr[0]=last;
    reverse(arr,arr+n);
    reverse(arr+1,arr+n);
   
}