int Solution::lengthOfLastWord(const string &s) {
    
    int n = s.length();
    
   int res=0;
    if(n==0)return 0;
    bool flag=false;
    while(n>=0){
        if((s[n]>='a'&&s[n]<='z')||(s[n]>='A'&&s[n]<='Z')){
            res++;flag=true;
        }
        if(s[n]==' '&&flag){
            return res;
        }
        n--;
    }
    if(flag){
        return res;
    }
    if(!flag)return 0;

 
}
