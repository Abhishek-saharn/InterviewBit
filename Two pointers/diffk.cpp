int Solution::diffPossible(vector<int> &A, int B) {
    
    int i=0,j=1;
    if(A.size()<=1)return 0;
    while(i<A.size()&&j<A.size()){
        if(i==j){j++;}
        else if(A[j]-A[i]==B)return 1;
        else if((A[j]-A[i])>B){
            i++;
        }else if((A[j]-A[i])<B){
            j++;
        }
    }
    return 0;
    
}
