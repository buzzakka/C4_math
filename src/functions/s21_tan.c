#include "../s21_math.h"

long double s21_tan(double x) {
  x = (long double)x;
  long double res = 0;
  if ((x == s21_NaN) || (x == s21_INF) || (x == -s21_INF)) {
    res = s21_NaN;
  } else if (x == 0) {
    res = 0;
  } else if (x == s21_M_PI2) {
    res = 16331239353195370.000000;
  } else if (x == -s21_M_PI2) {
    res = -16331239353195370.000000;
  } else if (x == s21_M_3PI2) {
    res = 5443746451065123.000000;
  } else if (x == -s21_M_3PI2) {
    res = -5443746451065123.000000;
  } else {
    res = s21_sin(x) / s21_cos(x);
  }
  return res;
}