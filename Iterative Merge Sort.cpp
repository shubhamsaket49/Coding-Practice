	void merge(int arr[], int l, int m, int h){
        int n1 = m + 1 - l;
		int n2 = h - m;
		int a[n1];
		int b[n2];
        for(int i=0; i<n1; i++) 
		      a[i] = arr[i+l];
        for(int i=0; i<n2; i++) 
		      b[i] = arr[i+m+1];
        int i=0, j=0, k=l;
       while (i < n1 && j < n2)
		{
			if (a[i] <= b[j]) 
			    arr[k] = a[i++];
			else 
			    arr[k] = b[j++];
        k++;
				}		
		while (i < n1) 
			arr[k++] = a[i++];
		while (j < n2) 
			arr[k++] = b[j++];
			}
	void merge_sort(int arr[], int n){
				for(int i=1; i<=n-1; i=2*i)
				{
				for(int j=0; j<n-1; j+=2*i)
				{
			int p = min(i+j-1, n-1);
			int q = min(j+2*i-1, n-1);
           merge(arr, j, p, q);
					}
				}
		for(int i=0; i<n; i++) 
		  cout << arr[i] << " ";
	}
	
