#include "../s21_math.h"

long double s21_cos(double x) {
  long double tmp = 0;
  if ((s21_isnan(x)) || (s21_isinf(x))) {
    tmp = s21_NaN;
  } else if (x == 0) {
    tmp = 1.;
  } else {
    while ((x <= -2 * s21_M_PI) || (x >= 2 * s21_M_PI)) {
      if (x <= -2 * s21_M_PI) {
        x += 2 * s21_M_PI;
      } else {
        x -= 2 * s21_M_PI;
      }
    }
    for (int i = 0; i < s21_M_N; i++) {
      tmp += (s21_pow((-1), i) * s21_pow(x, 2 * i)) / s21_fact(2 * i);
    }
  }
  return tmp;
}