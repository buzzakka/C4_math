#include "../s21_math.h"

long double s21_atan(double x) {
  long double res = 1;
  if (s21_isnan(x)) {
    res = s21_NaN;
  } else if ((x == s21_INF) || (x >= DBL_MAX)) {
    res = 1.570796;
  } else if ((x == -s21_INF) || (x <= -DBL_MAX)) {
    res = -1.570796;
  } else if (s21_fabs(x) < 1) {
    res = 0;
    for (int i = 0; i < s21_M_N; i++) {
      res += (s21_pow(-1, i) * s21_pow(x, 1 + 2 * i)) / (1 + 2 * i);
    }
  } else if (s21_fabs(x) > 1) {
    res = ((s21_M_PI * s21_fabs(x)) / (2 * x));
    for (int i = 0; i < s21_M_N; i++) {
      res -= (s21_pow(-1, i) * s21_pow(x, -1 - (2 * i))) / (1 + 2 * i);
    }
  } else if (s21_fabs(x) == 1.0) {
    res = (x < 0) ? -0.785398 : 0.785398;
  }
  return res;
}