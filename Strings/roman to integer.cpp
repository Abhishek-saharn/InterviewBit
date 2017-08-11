int Solution::romanToInt(string s) {
   
    int hash[26];
        hash['I'-'A']=1;
        hash['V'-'A']=5;
        hash['X'-'A']=10;
        hash['L'-'A']=50;
        hash['C'-'A']=100;
        hash['D'-'A']=500;
        hash['M'-'A']=1000;
        int res=0;
        int n=s.size();
        if(n==0)return 0;
        res=hash[s[n-1]-'A'];
        for(int i=n-2;i>=0;i--){
            if(hash[s[i]-'A']<hash[s[i+1]-'A']){
                res-=hash[s[i]-'A'];
            }else{
                res+=hash[s[i]-'A'];
            }
        }
        
        
        
        return res;
        
}
