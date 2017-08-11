int Solution::maxArea(vector<int> &v) {
    
    
        int n=v.size();
        int water=0,max=0,i=0,j=n-1;
        if(n==0||n==1)return 0;
        while(i<j){
            water=(j-i)*((v[i]<v[j])?v[i]:v[j]);
            if(water>max){
                max=water;
            }
            if(v[i]<=v[j]){
                i++;
            }else{
                j--;
            }
        }
    return max;
   
}
