#include "../s21_math.h"

long double s21_fabs(double x) {
  long double res = (x < 0.) ? -x : x;
  return res;
}