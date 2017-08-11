/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Return Returns a array of size n1 + n2 with A and B merged. 
 */
int* merge(int* a, int n, int* b, int m) {
    
    	int *c=(int *)malloc((n+m)*sizeof(int));
	int i=0,j=0,k=0;
	if(n==0)return b;
	if(m==0)return a;
	while(i<n&&j<m){
		if(a[i]>b[j]){
			c[k++]=b[j];
			j++;
			
		}else if(a[i]<b[j]){
			c[k++]=a[i];
			i++;
		}else{
			c[k++]=a[i];
			c[k++]=b[j];
			i++;j++;
		}
	}
	while(i<n){
		c[k++]=a[i];
		i++;
	}
	
	while(j<m){
		c[k++]=b[j];
		j++;
	}
	return c;
    
}
