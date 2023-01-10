/*TIME LIMIT EXCEEDED 
WILL BE RESOLVED WHEN WE SOLVE USING DP*/
int countWays(int n)
    {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int a=countWays(n-1);
        int b=countWays(n-2);
        return (a+b);
    }
