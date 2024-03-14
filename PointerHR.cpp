#include <stdio.h>

void update(int *pa,int *pb) {
      int a = *pa;
      int b = *pb;
      
      *pa = a + b;
      if(a>=b){
          *pb = a - b;
      }else if(a<=b){
          *pb = b - a;
      }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
