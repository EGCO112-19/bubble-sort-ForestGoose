#ifndef selection_h
#define selection_h
#include "swap.h"

void selection(int a[], int N){
    int i,j;
    for(i=0;i<N-1;i++){
      int mi = i;
      for(j=i+1;j<N;j++){
        if(a[j] < a[mi]) mi = j;
      }
      swap(&a[i],&a[mi]);
      display(a,N);
    }    
}

#endif /* selection_h */