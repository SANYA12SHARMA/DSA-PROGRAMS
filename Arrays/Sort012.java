//Brute force: sorting algorithm O(nlogn)
//better approach: have a count of 3 variables and then use a for loop
//optimal approach: have an extreme left,extreme right and middle below approach
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
