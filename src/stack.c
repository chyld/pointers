void alpha(int, int);
void beta(int, int);

int main(){
  int a = 1;
  int b = 2;
  alpha(a, b);
}

void alpha(int c, int d){
  int e = 3;
  int f = 4;
  beta(e, f);
}

void beta(int g, int h){
  int i = 5;
  int j = 6;
  i++;
  j++;
}
