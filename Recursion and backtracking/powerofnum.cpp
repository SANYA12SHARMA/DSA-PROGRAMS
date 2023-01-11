/*GFG QUESTION
time complexity=O(logn)
Auxilliary space=O(logn)
*/
long long power(int N,int R)
    {
        long long  ans=1;
        long long n=N;
        long long rev=R;
        while(rev>0){
            if(rev%2==0){
                 n=(n*n)%1000000007;
                rev=rev/2;
            }else{
                ans=(ans*n)%1000000007;
                rev=rev-1;
            }
        }
        return ans%1000000007;
    }
