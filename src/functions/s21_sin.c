#include "../s21_math.h"

long double s21_sin(double x) {
  long double tmp = 0;
  if ((s21_isnan(x)) || (s21_isinf(x))) {
    tmp = s21_NaN;
  } else {
    while ((x <= -2 * s21_M_PI) || (x >= 2 * s21_M_PI)) {
      if (x <= -2 * s21_M_PI) {
        x += 2 * s21_M_PI;
      } else {
        x -= 2 * s21_M_PI;
      }
    }
    for (int i = 0; i < s21_M_N; i++) {
      tmp += (s21_pow((-1), i) * s21_pow(x, 1 + 2 * i)) / s21_fact(2 * i + 1);
    }
  }
  return tmp;
}