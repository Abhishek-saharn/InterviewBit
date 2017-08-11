int Solution::removeDuplicates(vector<int> &A) {

    int n=A.size();
    int i=0;
    if(n==1||n==0)return n;
    
    for(int j=0;j<n-1;j++){
        if(A[j]!=A[j+1]){
            i++;
            A[i]=A[j+1];
        
        }
    }
    return i+1;
}
