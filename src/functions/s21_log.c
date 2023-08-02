#include "../s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  int ex_pow = 0;

  if (x == s21_INF) {
    res = s21_INF;
  } else if ((x == -s21_INF) || (x == s21_NaN) || (x < 0)) {
    res = s21_NaN;
  } else if (x == 0) {
    res = -s21_INF;
  } else {
    for (; x >= s21_M_E; x /= s21_M_E, ex_pow++) {
      continue;
    }

    for (int i = 0; i < 100; i++) {
      res = res + 2 * (x - s21_exp(res)) / (x + s21_exp(res));
    }
  }

  return res + ex_pow;
}