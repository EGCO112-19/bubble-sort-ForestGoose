#include<stdio.h>
#include<stdlib.h>
#include "bubble.h"
#include "selection.h"

void main(int argc, char **argv){
  printf("There are %d arguments\n",argc-1);
  int i,*a,N = argc-1;
  a = (int*)malloc(sizeof(int)*N);
  //printf("argument 0 is %s\n",*argv);
  for(i=1;i<argc;i++)
    a[i-1] = atoi(argv[i]);
  /*
  for(i=0;i<N;i++) printf("%d ",a[i]);
  printf("\n");
  */
  //bubble(a,N);
  //selection(a,N);
}
