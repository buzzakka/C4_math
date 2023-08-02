#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>
#include <stdio.h>
#include <stdlib.h>

#define s21_M_N 200.0
#define s21_M_TOCH 1e-9
#define s21_M_E 2.71828182845904523536
#define s21_M_LOG2E 1.44269504088896340736
#define s21_M_LOG10E 0.434294481903251827651
#define s21_M_LN2 0.693147180559945309417
#define s21_M_LN10 2.30258509299404568402
#define s21_M_PI 3.14159265358979323846264338327950288
#define s21_M_PI_2 1.57079632679489661923
#define s21_M_PI_4 0.785398163397448309616
#define s21_M_1_PI 0.318309886183790671538
#define s21_M_2_PI 0.636619772367581343076
#define s21_M_2_SQRTPI 1.12837916709551257390
#define s21_M_SQRT2 1.41421356237309504880
#define s21_M_SQRT1_2 0.7071067811865475244

#define s21_M_PI6 s21_M_PI / 6
#define s21_M_PI4 s21_M_PI / 4
#define s21_M_PI3 s21_M_PI / 3
#define s21_M_PI2 s21_M_PI / 2
#define s21_M_2PI3 2 * s21_M_PI / 3
#define s21_M_3PI4 3 * s21_M_PI / 4
#define s21_M_5PI6 5 * s21_M_PI / 6
#define s21_M_7PI6 7 * s21_M_PI / 6
#define s21_M_5PI4 5 * s21_M_PI / 4
#define s21_M_4PI3 4 * s21_M_PI / 3
#define s21_M_3PI2 3 * s21_M_PI / 2
#define s21_M_5PI3 5 * s21_M_PI / 3
#define s21_M_7PI4 7 * s21_M_PI / 4
#define s21_M_11PI6 11 * s21_M_PI / 6
#define s21_M_2PI 2 * s21_M_PI

#define s21_INF 1.0 / 0.0
#define s21_NaN 0.0 / 0.0

#define s21_isfin(x) (__builtin_fabs(x) != __builtin_inf())
#define s21_isnan(x) (x != x)
#define s21_isinf(x) (__builtin_fabs(x) == __builtin_inf())

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_fact(int n);

#endif  // SRC_S21_MATH_H_