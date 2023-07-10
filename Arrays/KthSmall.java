class Solution{
    public static int kthSmallest(int[] arr, int l, int r, int k) 
    { 
        int n=r+1;
        Arrays.sort(arr);
        int b=arr[k-1];
        return b;
    } 
}
