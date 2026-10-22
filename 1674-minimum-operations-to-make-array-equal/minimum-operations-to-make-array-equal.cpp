class Solution {
public:
    int minOperations(int n) {
        int avg=n;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=2*i+1;
        }
        int c=0;
        for(int i=0;i<n/2;i++)
        {
            c+=n-arr[i];
        }
        return c;
    }
};