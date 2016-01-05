#include <stdio.h>

void swap(void*, void*, int);

int main(){
  int x = 3;
  int y = 1;
  swap(&x, &y, sizeof(int));
}

void swap(void* p1, void* p2, int size){
  printf("swap\n");
}
