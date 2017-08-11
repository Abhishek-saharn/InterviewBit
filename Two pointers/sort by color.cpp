void Solution::sortColors(vector<int> &a) {

    int n=a.size();
        int i=0,j=0,k=0;
        for(int x=0;x<n;x++){
            if(a[x]==0){
                i++;
                
                //cout<<"Wrkong:)";
            }else if(a[x]==1){
                j++;
            }else if(a[x]==2){
                k++;
            }
        }
        int x=0;
      	while(i!=0){
      		a[x]=0;
      	//	cout<<i;
      		x++;i--;
      	}
       	while(j){
      		a[x]=1;
      		x++;j--;
      	}
      	while(k){
      		a[x]=2;
      		x++;k--;
      	}
}
