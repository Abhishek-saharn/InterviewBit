 int max(int a,int b){
        return (a>b)?a:b;
    }
        int min(int a,int b){
        return (a<b)?a:b;
    }
int Solution::trap(const vector<int> &v) {
   
     int n=v.size();
        if(n==0)return 0;
        int left[n],right[n];
        left[0]=v[0];
        right[n-1]=v[n-1];
        for(int i=1;i<n;i++){
            left[i]=max(v[i],left[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=max(v[i],right[i+1]);
        }
        int water=0;
        for(int i=0;i<n;i++){
            water+=min(left[i],right[i])-v[i];
        }
        return water;
}
