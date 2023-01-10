/*SOLUTION1*/
	int solve(string &S,int s,int e){
	    if(s>=e){
	        return 1;
	    }
	    if(S[s]!=S[e]){
	        return 0;
	    }
	    return solve(S,s+1,e-1);
	}
	int isPalindrome(string S)
	{
	    int n=S.size();
	   return solve(S,0,n-1);
	}
/*SOLUTION2*/
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int s=0;
	    int e=S.size()-1;
	    while(s<e){
	        if(S[s]!=S[e]){
	            return 0;
	        }
	        s++;
	        e--;
	    }
	    return 1;
	}

};
