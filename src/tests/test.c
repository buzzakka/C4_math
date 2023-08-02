#include "../s21_math.h"
// #include "s21_abs.c"
// #include "s21_atan.c"
// #include "s21_ceil.c"
// #include "s21_cos.c"
// #include "s21_exp.c"
// #include "s21_fabs.c"
// #include "s21_fact.c"
// #include "s21_floor.c"
// #include "s21_fmod.c"
// #include "s21_log.c"
// #include "s21_pow.c"
// #include "s21_sin.c"
// #include "s21_sqrt.c"
// #include "s21_tan.c"
#include <check.h>
#include <math.h>

START_TEST(s21_abs_test) {
  ck_assert_int_eq(s21_abs(100), abs(100));
  ck_assert_int_eq(s21_abs(-100), abs(-100));
  ck_assert_int_eq(s21_abs(0), abs(0));
  ck_assert_int_eq(s21_abs(1), abs(1));
  ck_assert_int_eq(s21_abs(-1), abs(-1));
  ck_assert_int_eq(s21_abs(2), abs(2));
  ck_assert_int_eq(s21_abs(-2), abs(-2));
  ck_assert_int_eq(s21_abs(3), abs(3));
  ck_assert_int_eq(s21_abs(-3), abs(-3));
  ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(s21_atan_test) {
  ck_assert_double_eq_tol(s21_atan(0), atan(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_PI6), atan(s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_PI4), atan(s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_PI3), atan(s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_PI2), atan(s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_2PI3), atan(s21_M_2PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_3PI4), atan(s21_M_3PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_5PI6), atan(s21_M_5PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_7PI6), atan(s21_M_7PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_5PI4), atan(s21_M_5PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_4PI3), atan(s21_M_4PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_3PI2), atan(s21_M_3PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_5PI3), atan(s21_M_5PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_7PI4), atan(s21_M_7PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_11PI6), atan(s21_M_11PI6),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(s21_M_2PI), atan(s21_M_2PI), pow(10, -6));

  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_PI6)), atan(-cos(s21_M_PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_PI4)), atan(-cos(s21_M_PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_PI3)), atan(-cos(s21_M_PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_PI2)), atan(-cos(s21_M_PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_2PI3)), atan(-cos(s21_M_2PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_3PI4)), atan(-cos(s21_M_3PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_5PI6)), atan(-cos(s21_M_5PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_7PI6)), atan(-cos(s21_M_7PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_5PI4)), atan(-cos(s21_M_5PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_4PI3)), atan(-cos(s21_M_4PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_3PI2)), atan(-cos(s21_M_3PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_5PI3)), atan(-cos(s21_M_5PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_7PI4)), atan(-cos(s21_M_7PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_11PI6)), atan(-cos(s21_M_11PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-cos(s21_M_2PI)), atan(-cos(s21_M_2PI)),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_atan(-s21_M_PI6), atan(-s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_PI4), atan(-s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_PI3), atan(-s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_PI2), atan(-s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_2PI3), atan(-s21_M_2PI3),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_3PI4), atan(-s21_M_3PI4),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_5PI6), atan(-s21_M_5PI6),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_7PI6), atan(-s21_M_7PI6),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_5PI4), atan(-s21_M_5PI4),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_4PI3), atan(-s21_M_4PI3),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_3PI2), atan(-s21_M_3PI2),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_5PI3), atan(-s21_M_5PI3),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_7PI4), atan(-s21_M_7PI4),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_11PI6), atan(-s21_M_11PI6),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-s21_M_2PI), atan(-s21_M_2PI), pow(10, -6));

  ck_assert_double_eq_tol(s21_atan(0), atan(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_PI6)), atan(cos(s21_M_PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_PI4)), atan(cos(s21_M_PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_PI3)), atan(cos(s21_M_PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_PI2)), atan(cos(s21_M_PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_2PI3)), atan(cos(s21_M_2PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_3PI4)), atan(cos(s21_M_3PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_5PI6)), atan(cos(s21_M_5PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_7PI6)), atan(cos(s21_M_7PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_5PI4)), atan(cos(s21_M_5PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_4PI3)), atan(cos(s21_M_4PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_3PI2)), atan(cos(s21_M_3PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_5PI3)), atan(cos(s21_M_5PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_7PI4)), atan(cos(s21_M_7PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_11PI6)), atan(cos(s21_M_11PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(cos(s21_M_2PI)), atan(cos(s21_M_2PI)),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_atan(999999999999999), atan(999999999999999),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-999999999999999), atan(-999999999999999),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_atan(1e-9), atan(1e-9), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-1e-9), atan(-1e-9), pow(10, -6));

  ck_assert_double_eq_tol(s21_atan(DBL_MAX), atan(DBL_MAX), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(-DBL_MAX), atan(-DBL_MAX), pow(10, -6));

  ck_assert_double_eq_tol(s21_atan(-INFINITY), atan(-INFINITY), pow(10, -6));
  ck_assert_double_eq_tol(s21_atan(INFINITY), atan(INFINITY), pow(10, -6));

  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));

  ck_assert_double_nan(s21_atan(cos(NAN)));
  ck_assert_double_nan(atan(cos(NAN)));

  ck_assert_double_nan(s21_atan(cos(INFINITY)));
  ck_assert_double_nan(atan(cos(INFINITY)));

  ck_assert_double_nan(s21_atan(cos(-INFINITY)));
  ck_assert_double_nan(atan(cos(-INFINITY)));
}
END_TEST

START_TEST(s21_acos_test) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(s21_M_PI6), acos(s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(s21_M_PI4), acos(s21_M_PI4), pow(10, -6));

  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_PI6)), acos(-cos(s21_M_PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_PI4)), acos(-cos(s21_M_PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_PI3)), acos(-cos(s21_M_PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_PI2)), acos(-cos(s21_M_PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_2PI3)), acos(-cos(s21_M_2PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_5PI6)), acos(-cos(s21_M_5PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_7PI6)), acos(-cos(s21_M_7PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_4PI3)), acos(-cos(s21_M_4PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_3PI2)), acos(-cos(s21_M_3PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_5PI3)), acos(-cos(s21_M_5PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_11PI6)), acos(-cos(s21_M_11PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-cos(s21_M_2PI)), acos(-cos(s21_M_2PI)),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_acos(-s21_M_PI6), acos(-s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-s21_M_PI4), acos(-s21_M_PI4), pow(10, -6));

  ck_assert_double_eq_tol(s21_acos(cos(s21_M_PI6)), acos(cos(s21_M_PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_PI4)), acos(cos(s21_M_PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_PI3)), acos(cos(s21_M_PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_PI2)), acos(cos(s21_M_PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_2PI3)), acos(cos(s21_M_2PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_5PI6)), acos(cos(s21_M_5PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_7PI6)), acos(cos(s21_M_7PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_4PI3)), acos(cos(s21_M_4PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_3PI2)), acos(cos(s21_M_3PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_5PI3)), acos(cos(s21_M_5PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_11PI6)), acos(cos(s21_M_11PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(cos(s21_M_2PI)), acos(cos(s21_M_2PI)),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_acos(1e-9), acos(1e-9), pow(10, -6));
  ck_assert_double_eq_tol(s21_acos(-1e-9), acos(-1e-9), pow(10, -6));

  ck_assert_double_nan(s21_acos(NAN));
  ck_assert_double_nan(acos(NAN));

  ck_assert_double_nan(s21_acos(cos(NAN)));
  ck_assert_double_nan(acos(cos(NAN)));

  ck_assert_double_nan(s21_acos(cos(INFINITY)));
  ck_assert_double_nan(acos(cos(INFINITY)));

  ck_assert_double_nan(s21_acos(cos(-INFINITY)));
  ck_assert_double_nan(acos(cos(-INFINITY)));
}
END_TEST

START_TEST(s21_asin_test) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_PI6)), asin(-cos(s21_M_PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_PI4)), asin(-cos(s21_M_PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_PI3)), asin(-cos(s21_M_PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_PI2)), asin(-cos(s21_M_PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_2PI3)), asin(-cos(s21_M_2PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_5PI6)), asin(-cos(s21_M_5PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_7PI6)), asin(-cos(s21_M_7PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_4PI3)), asin(-cos(s21_M_4PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_3PI2)), asin(-cos(s21_M_3PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_5PI3)), asin(-cos(s21_M_5PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_11PI6)), asin(-cos(s21_M_11PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-cos(s21_M_2PI)), asin(-cos(s21_M_2PI)),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_asin(0), asin(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_PI6)), asin(cos(s21_M_PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_PI4)), asin(cos(s21_M_PI4)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_PI3)), asin(cos(s21_M_PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_PI2)), asin(cos(s21_M_PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_2PI3)), asin(cos(s21_M_2PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_5PI6)), asin(cos(s21_M_5PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_7PI6)), asin(cos(s21_M_7PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_4PI3)), asin(cos(s21_M_4PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_3PI2)), asin(cos(s21_M_3PI2)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_5PI3)), asin(cos(s21_M_5PI3)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_11PI6)), asin(cos(s21_M_11PI6)),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(cos(s21_M_2PI)), asin(cos(s21_M_2PI)),
                          pow(10, -6));

  ck_assert_double_nan(s21_asin(999999999999999));
  ck_assert_double_nan(asin(999999999999999));
  ck_assert_double_nan(s21_asin(-999999999999999));
  ck_assert_double_nan(asin(-999999999999999));

  ck_assert_double_eq_tol(s21_asin(1e-9), asin(1e-9), pow(10, -6));
  ck_assert_double_eq_tol(s21_asin(-1e-9), asin(-1e-9), pow(10, -6));

  ck_assert_double_nan(s21_asin(INFINITY));
  ck_assert_double_nan(asin(INFINITY));
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));

  ck_assert_double_nan(s21_asin(NAN));
  ck_assert_double_nan(asin(NAN));

  ck_assert_double_nan(s21_asin(cos(NAN)));
  ck_assert_double_nan(asin(cos(NAN)));

  ck_assert_double_nan(s21_asin(cos(INFINITY)));
  ck_assert_double_nan(asin(cos(INFINITY)));

  ck_assert_double_nan(s21_asin(cos(-INFINITY)));
  ck_assert_double_nan(asin(cos(-INFINITY)));
}
END_TEST

START_TEST(s21_ceil_test) {
  ck_assert_double_eq(s21_ceil(10.5), ceil(10.5));
  ck_assert_double_eq(s21_ceil(-10.5), ceil(-10.5));

  ck_assert_double_eq(s21_ceil(0), ceil(0));

  ck_assert_double_eq(s21_ceil(0.5), ceil(0.5));
  ck_assert_double_eq(s21_ceil(-0.5), ceil(-0.5));

  ck_assert_double_eq(s21_ceil(2), ceil(2));
  ck_assert_double_eq(s21_ceil(-2), ceil(-2));

  ck_assert_double_eq(s21_ceil(999999999999999.3), ceil(999999999999999.3));
  ck_assert_double_eq(s21_ceil(-999999999999999.3), ceil(-999999999999999.3));

  ck_assert_double_eq(s21_ceil(1e-9), ceil(1e-9));
  ck_assert_double_eq(s21_ceil(-1e-9), ceil(-1e-9));

  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));

  ck_assert_double_infinite(s21_ceil(INFINITY));
  ck_assert_double_infinite(ceil(INFINITY));

  ck_assert_double_infinite(s21_ceil(-INFINITY));
  ck_assert_double_infinite(ceil(-INFINITY));
}
END_TEST

START_TEST(s21_cos_test) {
  ck_assert_double_eq_tol(s21_cos(0), cos(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_PI6), cos(s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_PI4), cos(s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_PI3), cos(s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_PI2), cos(s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_2PI3), cos(s21_M_2PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_3PI4), cos(s21_M_3PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_5PI6), cos(s21_M_5PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_7PI6), cos(s21_M_7PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_5PI4), cos(s21_M_5PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_4PI3), cos(s21_M_4PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_3PI2), cos(s21_M_3PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_5PI3), cos(s21_M_5PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_7PI4), cos(s21_M_7PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_11PI6), cos(s21_M_11PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(s21_M_2PI), cos(s21_M_2PI), pow(10, -6));

  ck_assert_double_eq_tol(s21_cos(-s21_M_PI6), cos(-s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_PI4), cos(-s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_PI3), cos(-s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_PI2), cos(-s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_2PI3), cos(-s21_M_2PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_3PI4), cos(-s21_M_3PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_5PI6), cos(-s21_M_5PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_7PI6), cos(-s21_M_7PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_5PI4), cos(-s21_M_5PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_4PI3), cos(-s21_M_4PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_3PI2), cos(-s21_M_3PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_5PI3), cos(-s21_M_5PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_7PI4), cos(-s21_M_7PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_11PI6), cos(-s21_M_11PI6),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-s21_M_2PI), cos(-s21_M_2PI), pow(10, -6));

  ck_assert_double_eq_tol(s21_cos(9999), cos(9999), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-9999), cos(-9999), pow(10, -6));

  ck_assert_double_eq_tol(s21_cos(1e-9), cos(1e-9), pow(10, -6));
  ck_assert_double_eq_tol(s21_cos(-1e-9), cos(-1e-9), pow(10, -6));

  ck_assert_double_nan(s21_cos(NAN));
  ck_assert_double_nan(cos(NAN));

  ck_assert_double_nan(s21_cos(-INFINITY));
  ck_assert_double_nan(cos(-INFINITY));

  ck_assert_double_nan(s21_cos(INFINITY));
  ck_assert_double_nan(cos(INFINITY));
}
END_TEST

START_TEST(s21_exp_test) {
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(-5), exp(-5), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(5), exp(5), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(0.5), exp(0.5), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(-INFINITY), exp(-INFINITY), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(-DBL_MAX), exp(-DBL_MAX), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(1e-9), exp(1e-9), pow(10, -6));
  ck_assert_ldouble_eq_tol(s21_exp(-1e-9), exp(-1e-9), pow(10, -6));

  ck_assert_double_infinite(s21_exp(INFINITY));
  ck_assert_double_infinite(exp(INFINITY));

  ck_assert_double_infinite(s21_exp(DBL_MAX));
  ck_assert_double_infinite(exp(DBL_MAX));

  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}
END_TEST

START_TEST(s21_fabs_test) {
  ck_assert_double_eq(s21_fabs(0.09), fabs(0.09));
  ck_assert_double_eq(s21_fabs(-0.09), fabs(-0.09));
  ck_assert_double_eq(s21_fabs(0), fabs(0));
  ck_assert_double_eq(s21_fabs(1.), fabs(1.));
  ck_assert_double_eq(s21_fabs(-1.), fabs(-1.));
  ck_assert_double_eq(s21_fabs(999999999999999.3), fabs(999999999999999.3));
  ck_assert_double_eq(s21_fabs(-999999999999999.3), fabs(-999999999999999.3));
  ck_assert_double_eq(s21_fabs(1e-9), fabs(1e-9));
  ck_assert_double_eq(s21_fabs(-1e-9), fabs(-1e-9));

  ck_assert_double_nan(s21_fabs(NAN));
  ck_assert_double_nan(fabs(NAN));

  ck_assert_double_infinite(s21_fabs(-INFINITY));
  ck_assert_double_infinite(fabs(-INFINITY));

  ck_assert_double_infinite(s21_fabs(INFINITY));
  ck_assert_double_infinite(fabs(INFINITY));
}
END_TEST

START_TEST(s21_floor_test) {
  ck_assert_double_eq(s21_floor(10.5), floor(10.5));
  ck_assert_double_eq(s21_floor(-10.5), floor(-10.5));
  ck_assert_double_eq(s21_floor(0), floor(0));
  ck_assert_double_eq(s21_floor(0.5), floor(0.5));
  ck_assert_double_eq(s21_floor(-0.5), floor(-0.5));

  ck_assert_double_eq(s21_floor(2), floor(2));
  ck_assert_double_eq(s21_floor(-2), floor(-2));

  ck_assert_double_eq(s21_floor(999999999999999.3), floor(999999999999999.3));
  ck_assert_double_eq(s21_floor(-999999999999999.3), floor(-999999999999999.3));

  ck_assert_double_eq(s21_floor(1e-9), floor(1e-9));
  ck_assert_double_eq(s21_floor(-1e-9), floor(-1e-9));

  ck_assert_double_nan(s21_floor(NAN));
  ck_assert_double_nan(floor(NAN));

  ck_assert_double_infinite(s21_floor(-INFINITY));
  ck_assert_double_infinite(floor(-INFINITY));

  ck_assert_double_infinite(s21_fabs(INFINITY));
  ck_assert_double_infinite(floor(INFINITY));
}
END_TEST

START_TEST(s21_fmod_test) {
  ck_assert_double_eq(s21_fmod(10.5, 1), fmod(10.5, 1));
  ck_assert_double_eq(s21_fmod(-10.5, 1), fmod(-10.5, 1));
  ck_assert_double_eq(s21_fmod(10.5, -1), fmod(10.5, -1));
  ck_assert_double_eq(s21_fmod(-10.5, -1), fmod(-10.5, -1));

  ck_assert_double_eq(s21_fmod(10.5, 4), fmod(10.5, 4));
  ck_assert_double_eq(s21_fmod(-10.5, 4), fmod(-10.5, 4));
  ck_assert_double_eq(s21_fmod(10.5, -4), fmod(10.5, -4));
  ck_assert_double_eq(s21_fmod(-10.5, -4), fmod(-10.5, -4));

  ck_assert_double_eq(s21_fmod(10.5, 5), fmod(10.5, 5));
  ck_assert_double_eq(s21_fmod(-10.5, 5), fmod(-10.5, 5));
  ck_assert_double_eq(s21_fmod(10.5, -5), fmod(10.5, -5));
  ck_assert_double_eq(s21_fmod(-10.5, -5), fmod(-10.5, -5));

  ck_assert_double_eq(s21_fmod(4, 10.5), fmod(4, 10.5));
  ck_assert_double_eq(s21_fmod(-4, 10.5), fmod(-4, 10.5));
  ck_assert_double_eq(s21_fmod(4, -10.5), fmod(4, -10.5));
  ck_assert_double_eq(s21_fmod(-4, -10.5), fmod(-4, -10.5));

  ck_assert_double_eq(s21_fmod(5, 10.5), fmod(5, 10.5));
  ck_assert_double_eq(s21_fmod(-5, 10.5), fmod(-5, 10.5));
  ck_assert_double_eq(s21_fmod(5, -10.5), fmod(5, -10.5));
  ck_assert_double_eq(s21_fmod(-5, -10.5), fmod(-5, -10.5));

  ck_assert_double_eq(s21_fmod(0, 10.5), fmod(0, 10.5));
  ck_assert_double_eq(s21_fmod(0, -10.5), fmod(0, -10.5));

  ck_assert_double_eq(s21_fmod(0, INFINITY), fmod(0, INFINITY));
  ck_assert_double_eq(s21_fmod(0, -INFINITY), fmod(0, -INFINITY));

  ck_assert_double_nan(s21_fmod(5, 0));
  ck_assert_double_nan(fmod(5, 0));

  ck_assert_double_nan(s21_fmod(-5, 0));
  ck_assert_double_nan(fmod(-5, 0));

  ck_assert_double_eq(s21_fmod(1e-9, 10.5), fmod(1e-9, 10.5));
  ck_assert_double_eq(s21_fmod(-1e-9, -10.5), fmod(-1e-9, -10.5));

  ck_assert_double_eq(s21_fmod(99999999999999999, 10.5),
                      fmod(99999999999999999, 10.5));
  ck_assert_double_eq(s21_fmod(99999999999999999, -10.5),
                      fmod(99999999999999999, -10.5));
  ck_assert_double_eq(s21_fmod(-99999999999999999, 10.5),
                      fmod(-99999999999999999, 10.5));
  ck_assert_double_eq(s21_fmod(-99999999999999999, -10.5),
                      fmod(-99999999999999999, -10.5));

  ck_assert_double_eq_tol(s21_fmod(10.5, 1e-9), fmod(10.5, 1e-9), pow(10, -6));
  ck_assert_double_eq_tol(s21_fmod(-10.5, -1e-9), fmod(-10.5, 1e-9),
                          pow(10, -6));

  ck_assert_double_nan(s21_fmod(INFINITY, 5));
  ck_assert_double_nan(fmod(INFINITY, 5));

  ck_assert_double_nan(s21_fmod(INFINITY, -5));
  ck_assert_double_nan(fmod(INFINITY, -5));

  ck_assert_double_nan(s21_fmod(-INFINITY, 5));
  ck_assert_double_nan(fmod(-INFINITY, 5));

  ck_assert_double_nan(s21_fmod(-INFINITY, -5));
  ck_assert_double_nan(fmod(-INFINITY, -5));

  ck_assert_double_nan(s21_fmod(NAN, 5));
  ck_assert_double_nan(fmod(NAN, 5));

  ck_assert_double_nan(s21_fmod(NAN, -5));
  ck_assert_double_nan(fmod(NAN, -5));

  ck_assert_double_nan(s21_fmod(5, NAN));
  ck_assert_double_nan(fmod(5, NAN));

  ck_assert_double_nan(s21_fmod(-5, NAN));
  ck_assert_double_nan(fmod(-5, NAN));
}
END_TEST

START_TEST(s21_log_test) {
  ck_assert_double_eq_tol(s21_log(0.5), log(0.5), pow(10, -6));
  ck_assert_double_eq_tol(s21_log(1), log(1), pow(10, -6));
  ck_assert_double_eq_tol(s21_log(4), log(4), pow(10, -6));
  ck_assert_double_eq_tol(s21_log(DBL_MAX), log(DBL_MAX), pow(10, -6));

  ck_assert_double_nan(s21_log(-1e-9));
  ck_assert_double_nan(log(-1e-9));

  ck_assert_double_nan(s21_log(-DBL_MAX));
  ck_assert_double_nan(log(-DBL_MAX));

  ck_assert_double_nan(s21_log(NAN));
  ck_assert_double_nan(log(NAN));

  ck_assert_double_nan(s21_log(-INFINITY));
  ck_assert_double_nan(log(-INFINITY));

  ck_assert_double_infinite(s21_log(INFINITY));
  ck_assert_double_infinite(log(INFINITY));

  ck_assert_double_infinite(s21_log(0));
  ck_assert_double_infinite(log(0));
}
END_TEST

START_TEST(s21_pow_test) {
  ck_assert_double_eq_tol(s21_pow(2.5, 0.5), pow(2.5, 0.5), pow(10, -6));

  ck_assert_double_nan(s21_pow(-2.5, 0.5));
  ck_assert_double_nan(pow(-2.5, 0.5));

  ck_assert_double_eq_tol(s21_pow(2.5, -0.5), pow(2.5, -0.5), pow(10, -6));

  ck_assert_double_nan(s21_pow(-2.5, -0.5));
  ck_assert_double_nan(pow(-2.5, -0.5));

  ck_assert_double_eq_tol(s21_pow(2, 2), pow(2, 2), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-2, 2), pow(-2, 2), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(2, -2), pow(2, -2), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-2, -2), pow(-2, -2), pow(10, -6));

  ck_assert_double_eq_tol(s21_pow(0, 2), pow(0, 2), pow(10, -6));
  ck_assert_double_infinite(s21_pow(0, -2));
  ck_assert_double_infinite(pow(0, -2));
  ck_assert_double_eq_tol(s21_pow(0, 3), pow(0, 3), pow(10, -6));
  ck_assert_double_infinite(s21_pow(0, -3));
  ck_assert_double_infinite(pow(0, -3));
  ck_assert_double_eq_tol(s21_pow(0, 0.2), pow(0, 0.2), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(0, 2.2), pow(0, 2.2), pow(10, -6));

  ck_assert_double_nan(s21_pow(0, NAN));
  ck_assert_double_nan(pow(0, NAN));
  ck_assert_double_nan(s21_pow(0, -NAN));
  ck_assert_double_nan(pow(0, -NAN));

  ck_assert_double_eq_tol(s21_pow(0, 0), pow(0, 0), pow(10, -6));

  ck_assert_double_eq_tol(s21_pow(0, INFINITY), pow(0, INFINITY), pow(10, -6));
  ck_assert_double_infinite(s21_pow(0, -INFINITY));
  ck_assert_double_infinite(pow(0, -INFINITY));

  ck_assert_double_eq_tol(s21_pow(-1, INFINITY), pow(-1, INFINITY),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-1, -INFINITY), pow(-1, -INFINITY),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-1, 2), pow(-1, 2), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-1, 3), pow(-1, 3), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(1, NAN), pow(1, NAN), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(1, -NAN), pow(1, -NAN), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(1, INFINITY), pow(1, INFINITY), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(1, -INFINITY), pow(1, -INFINITY),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(1, 0), pow(1, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(1, 2), pow(1, 2), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(1, 3), pow(1, 3), pow(10, -6));

  ck_assert_double_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-NAN, 0), pow(-NAN, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(2, 0), pow(2, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-2, 0), pow(-2, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(3, 0), pow(3, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(-3, 0), pow(-3, 0), pow(10, -6));

  ck_assert_double_eq_tol(s21_pow(-0.5, 0), pow(-0.5, 0), pow(10, -6));
  ck_assert_double_eq_tol(s21_pow(0.5, 0), pow(0.5, 0), pow(10, -6));

  ck_assert_double_eq_tol(s21_pow(-0.5, INFINITY), pow(-0.5, INFINITY),
                          pow(10, -6));

  ck_assert_double_infinite(s21_pow(-0.5, -INFINITY));
  ck_assert_double_infinite(pow(-0.5, -INFINITY));
  ck_assert_double_eq_tol(s21_pow(0.5, INFINITY), pow(0.5, INFINITY),
                          pow(10, -6));

  ck_assert_double_nan(s21_pow(0.5, NAN));
  ck_assert_double_nan(pow(0.5, NAN));
  ck_assert_double_nan(s21_pow(-0.5, NAN));
  ck_assert_double_nan(pow(-0.5, NAN));

  ck_assert_double_infinite(s21_pow(0.5, -INFINITY));
  ck_assert_double_infinite(pow(0.5, -INFINITY));

  ck_assert_double_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), pow(10, -6));

  ck_assert_double_infinite(s21_pow(INFINITY, 2));
  ck_assert_double_infinite(pow(INFINITY, 2));
  ck_assert_double_infinite(s21_pow(INFINITY, 3));
  ck_assert_double_infinite(pow(INFINITY, 3));

  ck_assert_double_infinite(s21_pow(INFINITY, INFINITY));
  ck_assert_double_infinite(pow(INFINITY, INFINITY));

  ck_assert_double_eq_tol(s21_pow(INFINITY, -INFINITY),
                          pow(INFINITY, -INFINITY), pow(10, -6));

  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));

  ck_assert_double_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0),
                          pow(10, -6));
  ck_assert_double_infinite(s21_pow(-INFINITY, 2));
  ck_assert_double_infinite(pow(-INFINITY, 2));
  ck_assert_double_infinite(s21_pow(-INFINITY, 3));
  ck_assert_double_infinite(pow(-INFINITY, 3));
  ck_assert_double_infinite(s21_pow(-INFINITY, INFINITY));
  ck_assert_double_infinite(pow(-INFINITY, INFINITY));
  ck_assert_double_eq_tol(s21_pow(-INFINITY, -INFINITY),
                          pow(-INFINITY, -INFINITY), pow(10, -6));

  ck_assert_double_nan(s21_pow(-INFINITY, NAN));
  ck_assert_double_nan(pow(-INFINITY, NAN));

  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_sin_test) {
  ck_assert_double_eq_tol(s21_sin(0), sin(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_PI6), sin(s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_PI4), sin(s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_PI3), sin(s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_PI2), sin(s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_2PI3), sin(s21_M_2PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_3PI4), sin(s21_M_3PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_5PI6), sin(s21_M_5PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_7PI6), sin(s21_M_7PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_5PI4), sin(s21_M_5PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_4PI3), sin(s21_M_4PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_3PI2), sin(s21_M_3PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_5PI3), sin(s21_M_5PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_7PI4), sin(s21_M_7PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_11PI6), sin(s21_M_11PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(s21_M_2PI), sin(s21_M_2PI), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(4 * s21_M_PI), sin(4 * s21_M_PI),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_sin(-s21_M_PI6), sin(-s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_PI4), sin(-s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_PI3), sin(-s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_PI2), sin(-s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_2PI3), sin(-s21_M_2PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_3PI4), sin(-s21_M_3PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_5PI6), sin(-s21_M_5PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_7PI6), sin(-s21_M_7PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_5PI4), sin(-s21_M_5PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_4PI3), sin(-s21_M_4PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_3PI2), sin(-s21_M_3PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_5PI3), sin(-s21_M_5PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_7PI4), sin(-s21_M_7PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_11PI6), sin(-s21_M_11PI6),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-s21_M_2PI), sin(-s21_M_2PI), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-4 * s21_M_PI), sin(-4 * s21_M_PI),
                          pow(10, -6));

  ck_assert_double_eq_tol(s21_sin(1e-9), sin(1e-9), pow(10, -6));
  ck_assert_double_eq_tol(s21_sin(-1e-9), sin(-1e-9), pow(10, -6));

  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));

  ck_assert_double_nan(s21_sin(-INFINITY));
  ck_assert_double_nan(sin(-INFINITY));

  ck_assert_double_nan(s21_sin(INFINITY));
  ck_assert_double_nan(sin(INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test) {
  ck_assert_double_eq_tol(s21_sqrt(0), sqrt(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_sqrt(0.09), sqrt(0.09), pow(10, -6));
  ck_assert_double_eq_tol(s21_sqrt(1), sqrt(1), pow(10, -6));
  ck_assert_double_eq_tol(s21_sqrt(2), sqrt(2), pow(10, -6));
  ck_assert_double_eq_tol(s21_sqrt(3), sqrt(3), pow(10, -6));
  ck_assert_double_eq_tol(s21_sqrt(4), sqrt(4), pow(10, -6));

  ck_assert_double_nan(s21_sqrt(-0.09));
  ck_assert_double_nan(sqrt(-0.09));

  ck_assert_double_nan(s21_sqrt(NAN));
  ck_assert_double_nan(sqrt(NAN));

  ck_assert_double_nan(s21_sqrt(-NAN));
  ck_assert_double_nan(sqrt(-NAN));

  ck_assert_double_infinite(s21_sqrt(INFINITY));
  ck_assert_double_infinite(sqrt(INFINITY));

  ck_assert_double_nan(s21_sqrt(-INFINITY));
  ck_assert_double_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_tan_test) {
  ck_assert_double_eq_tol(s21_tan(0), tan(0), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_PI6), tan(s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_PI4), tan(s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_PI3), tan(s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_PI2), tan(s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_2PI3), tan(s21_M_2PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_3PI4), tan(s21_M_3PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_5PI6), tan(s21_M_5PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_7PI6), tan(s21_M_7PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_5PI4), tan(s21_M_5PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_4PI3), tan(s21_M_4PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_3PI2), tan(s21_M_3PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_5PI3), tan(s21_M_5PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_7PI4), tan(s21_M_7PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_11PI6), tan(s21_M_11PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(s21_M_2PI), tan(s21_M_2PI), pow(10, -6));

  ck_assert_double_eq_tol(s21_tan(-s21_M_PI6), tan(-s21_M_PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_PI4), tan(-s21_M_PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_PI3), tan(-s21_M_PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_PI2), tan(-s21_M_PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_2PI3), tan(-s21_M_2PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_3PI4), tan(-s21_M_3PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_5PI6), tan(-s21_M_5PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_7PI6), tan(-s21_M_7PI6), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_5PI4), tan(-s21_M_5PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_4PI3), tan(-s21_M_4PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_3PI2), tan(-s21_M_3PI2), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_5PI3), tan(-s21_M_5PI3), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_7PI4), tan(-s21_M_7PI4), pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_11PI6), tan(-s21_M_11PI6),
                          pow(10, -6));
  ck_assert_double_eq_tol(s21_tan(-s21_M_2PI), tan(-s21_M_2PI), pow(10, -6));

  ck_assert_double_nan(s21_tan(NAN));
  ck_assert_double_nan(tan(NAN));

  ck_assert_double_nan(s21_tan(-INFINITY));
  ck_assert_double_nan(tan(-INFINITY));

  ck_assert_double_nan(s21_tan(INFINITY));
  ck_assert_double_nan(tan(INFINITY));
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);

  int failed = 0;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, s21_abs_test);
  tcase_add_test(tc1_1, s21_acos_test);
  tcase_add_test(tc1_1, s21_asin_test);
  tcase_add_test(tc1_1, s21_atan_test);
  tcase_add_test(tc1_1, s21_ceil_test);
  tcase_add_test(tc1_1, s21_cos_test);
  tcase_add_test(tc1_1, s21_exp_test);
  tcase_add_test(tc1_1, s21_fabs_test);
  tcase_add_test(tc1_1, s21_floor_test);
  tcase_add_test(tc1_1, s21_fmod_test);
  tcase_add_test(tc1_1, s21_log_test);
  tcase_add_test(tc1_1, s21_pow_test);
  tcase_add_test(tc1_1, s21_sin_test);
  tcase_add_test(tc1_1, s21_sqrt_test);
  tcase_add_test(tc1_1, s21_tan_test);

  srunner_run_all(sr, CK_ENV);
  failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}