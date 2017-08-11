void findlps(string n,int *lps){
        int j=0,i=1;
        lps[0]=0;
        int ns=n.length();
        while(i<ns){
            if(n[i]==n[j]){
                lps[i]=j+1;
                i++;j++;
            }else if(j>0){
                j=lps[j-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
int Solution::strStr(const string &h, const string &n) {
    
    int hs=h.size(),ns=n.size(),j=0,sz=0;
        if(ns==0)return 0;
        int lps[ns];
        findlps(n,lps);
        int ti=0,pi=0;
        while(ti<hs){
            if(n[pi]==h[ti]){
                if(pi==ns-1){
                    return ti-pi;
                }else{
                    pi++;
                    ti++;
                }
            }
            else if(pi>0){
                pi=lps[pi-1];
            }else{
                ti++;
            }
        }
        return -1;
    
}
