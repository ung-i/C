#include <stdio.h>

int main(void) {
  double w, h, area, preimeter;

  printf("가로의 길이를 입력하시오: ");
  scanf("%lf", &w);

  printf("세로의 길이를 입력하시오: ");
  scanf("%lf", &h);

  area = w*h;
  preimeter = 2*(w+h);

  printf("사각형의 넓이: %lf \n", area);
  printf("사각형의 둘레: %lf \n", preimeter);


  
  
  return 0;
}
