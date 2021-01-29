#ifndef insertion_h
#define insertion_h

void insertion(int a[], int N){
    int i,j;
    for(i=1;i<N;i++){
      int temp = a[i];
      for(j=i-1;j>=0;j--){
        if(a[j] > temp) a[j+1] = a[j];
        else break;
      }
      a[j+1] = temp;
      display(a,N);
    }    
}
#endif /* insertion_h */