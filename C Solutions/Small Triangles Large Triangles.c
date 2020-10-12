void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
        triangle tmp;

        float S[n], p, sum, temp;
        int i, j;
        for (j = 0; j < n; j++) {
          p = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
          sum = sqrt(p * (p - tr[j].a) * (p - tr[j].b) * (p - tr[j].c));
          S[j] = sum;
          
         }
         for (i = 1; i < n; i++) {
           for (j = 0; j < n-i; j++) {
             if (S[j] > S[j + 1]) {
               temp = S[j];
               S[j] = S[j + 1];
               S[j + 1] = temp;
             
             tmp = tr[j];
             tr[j] = tr[j + 1];
             tr[j + 1] = tmp; }
           }    
    }
}