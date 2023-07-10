class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        char[] arr=str.toCharArray();
        if(arr.length==0){
            return str;
        }
        int s=0;
        int e=arr.length-1;
        while(s<=e){
            char t=arr[s];
            arr[s]=arr[e];
            arr[e]=t;
            s++;
            e--;
        }
        String str1=new String(arr);
        return str1;
    }
}
