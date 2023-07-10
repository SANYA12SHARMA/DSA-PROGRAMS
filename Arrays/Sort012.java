
class Solution
{
    public static void sort012(int a[], int n)
    {
        int s=0;
        int e=n-1;
        int low=0;
        while(s<=e){
            if(a[s]==0){
                int t=a[s];
                a[s]=a[low];
                a[low]=t;
                s++;
                low++;
            }else if(a[s]==1){
                s++;
            }else{
                int t=a[e];
                a[e]=a[s];
                a[s]=t;
                e--;
            }
        }
    }
}
