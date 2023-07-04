#include <stdio.h>

int main(void) {
  float radious; //원의 반지름
  float area;  //면적

  printf("반지름을 입력하시오: ");
  scanf("%f", &radious);

  area= 3.14* radious* radious;

  printf("원의 면적: %.2f", area);
    
  
  return 0;
}
