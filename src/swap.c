#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void*, void*, int);

int main(){
  int x = 3;
  int y = 1;
  printf("x:%d - y:%d\n", x, y);
  swap(&x, &y, sizeof(int));
  printf("x:%d - y:%d\n", x, y);
}

void swap(void* p1, void* p2, int size){
  void* buffer = malloc(size);
  memcpy(buffer, p1, size);
  memcpy(p1, p2, size);
  memcpy(p2, buffer, size);
  free(buffer);
}
