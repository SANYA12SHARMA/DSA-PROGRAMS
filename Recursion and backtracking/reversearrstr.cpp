/*RECURSIVE WAY*/
void rev(string &str,int start,int end){
    if(start>=end){
        return ;
    }
    char temp=str[end];
    str[end]=str[start];
    str[start]=temp;
    rev(str,start+1,end-1);
    return;
}
string reverseWord(string str){
  int i=0;
  int e=str.size()-1;
  rev(str,i,e);
  return str;
}
/*SOLUTION 2*/
string reverseWord(string str){
    
  int i=0;
  int e=str.size()-1;
  while(i<e){
      char temp=str[i];
      str[i]=str[e];
      str[e]=temp;
      i++;
      e--;
  }
  return str;
}
