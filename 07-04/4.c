#include <stdio.h>

int main(void) {
  double num1, num2, num3;
  double sum, avg;

  printf("3개의 실수를 입력하시오:");
  scanf("%lf %lf %lf", &num1, &num2, &num3);

  sum= num1+ num2+ num3;

  avg= sum/3;

  printf("합계=%.5lf\n", sum);
  printf("평균=%.5lf\n", avg);
  
  
  return 0;
}
