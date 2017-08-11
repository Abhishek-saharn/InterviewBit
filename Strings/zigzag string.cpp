string Solution::convert(string a, int B) {
 
    if(B==1)return a;
    string res="";
    for(int i=0;i<B&&i<a.size();i++){
        int inc=2*(B-1-i);
        int curr=i,prev=-1;
        while(curr<a.length()){
            if(prev!=curr)res=res+a[curr];
            prev=curr;
            curr+=inc;
            inc=2*(B-1)-inc;
        }
    }
    return res;
}
