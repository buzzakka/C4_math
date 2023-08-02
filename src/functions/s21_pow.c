#include "../s21_math.h"

long double s21_pow(double base, double exp) {
  long double res = 1.;
  long double copy = base;

  /*
      (0, exp), где exp < 0
  */
  if (exp == 0) {
    res = 1;
  } else if (exp == 1) {
    res = base;
  } else if (base == 0.) {
    if (exp < 0.) {
      res = s21_INF;
    } else if (s21_isnan(exp)) {
      res = s21_NaN;
    } else {
      res = 0;
    }
  } else if (s21_fabs(base) == 1.) {
    if (base == 1.) {
      res = 1;
    } else {
      if (s21_isinf(exp) ||
          ((s21_fmod(s21_fabs(exp), 2) == 0) && (s21_fmod(exp, 1) == 0))) {
        res = 1;
      } else if ((s21_fmod(exp, 1) != 0) || s21_isnan(exp)) {
        res = s21_NaN;
      } else {
        res = -1;
      }
    }
  } else if (s21_isnan(base) || s21_isnan(exp)) {
    res = s21_NaN;
  } else if (s21_isinf(exp)) {
    if (exp > 0) {
      res = (s21_fabs(base) < 1) ? 0 : s21_INF;
    } else {
      res = (s21_fabs(base) > 1) ? 0 : s21_INF;
    }
  } else if (s21_isinf(base)) {
    if (base > 0) {
      res = (exp < 0) ? 0 : s21_INF;
    } else {
      if (exp > 0) {
        if ((s21_fmod(exp, 2) == 0) || (s21_fmod(exp, 1) != 0)) {
          res = s21_INF;
        } else {
          res = -s21_INF;
        }
      } else {
        res = 0;
      }
    }
  } else if (base < 0 && s21_fmod(exp, 1) != 0) {
    res = s21_NaN;
  } else {
    if (copy < 0) {
      copy = -copy;
      res = s21_exp(exp * s21_log(copy));
      if (s21_fmod(exp, 2) != 0) {
        res = -res;
      }
    } else {
      res = s21_exp(exp * s21_log(base));
    }
  }
  return res;
}