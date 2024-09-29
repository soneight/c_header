#pragma once

/*
    Math C related functionality
*/

#include <cfenv>
#include <cfloat>
#include <cmath>

#include "libc.hxx"

namespace c {
    // fenv
    // -- C++11
    using std::fenv_t;
    using std::fexcept_t;
    using std::fegetenv;
    using std::fegetexceptflag;
    using std::fegetround;
    using std::feclearexcept;
    using std::feholdexcept;
    using std::feraiseexcept;
    using std::fesetenv;
    using std::fesetexceptflag;
    using std::fesetround;
    using std::fetestexcept;
    using std::feupdateenv;
    // math
    using std::abs;
    using std::acos;
    using std::asin;
    using std::atan;
    using std::atan2;
    using std::ceil;
    using std::cos;
    using std::cosh;
    using std::fabs;
    using std::floor;
    using std::fmod;
    using std::frexp;
    using std::exp;
    using std::ldexp;
    using std::log;
    using std::log10;
    using std::modf;
    using std::pow;
    using std::sin;
    using std::sinh;
    using std::sqrt;
    using std::tan;
    using std::tanh;
    // -- C++11
    using std::double_t;
    using std::float_t;
    using std::acosf;
    using std::acosh;
    using std::acoshf;
    using std::acoshl;
    using std::acosl;
    using std::asinf;
    using std::asinh;
    using std::asinhf;
    using std::asinhl;
    using std::asinl;
    using std::atan2f;
    using std::atan2l;
    using std::atanf;
    using std::atanh;
    using std::atanhf;
    using std::atanhl;
    using std::atanl;
    using std::cbrt;
    using std::cbrtf;
    using std::cbrtl;
    using std::ceilf;
    using std::ceill;
    using std::copysign;
    using std::copysignf;
    using std::copysignl;
    using std::cosf;
    using std::coshf;
    using std::coshl;
    using std::cosl;
    using std::fabsf;
    using std::fabsl;
    using std::fdim;
    using std::fdimf;
    using std::fdiml;
    using std::floorf;
    using std::floorl;
    using std::fma;
    using std::fmaf;
    using std::fmal;
    using std::fmax;
    using std::fmaxf;
    using std::fmaxl;
    using std::fmin;
    using std::fminf;
    using std::fminl;
    using std::fmodf;
    using std::fmodl;
    using std::fpclassify;
    using std::frexpf;
    using std::frexpl;
    using std::erf;
    using std::erfc;
    using std::erfcf;
    using std::erfcl;
    using std::erff;
    using std::erfl;
    using std::exp2;
    using std::exp2f;
    using std::exp2l;
    using std::expf;
    using std::expl;
    using std::expm1;
    using std::expm1f;
    using std::expm1l;
    using std::hypot;
    using std::hypotf;
    using std::hypotl;
    using std::ilogb;
    using std::ilogbf;
    using std::ilogbl;
    using std::isfinite;
    using std::isgreater;
    using std::isgreaterequal;
    using std::isinf;
    using std::isless;
    using std::islessequal;
    using std::islessgreater;
    using std::isnan;
    using std::isnormal;
    using std::isunordered;
    using std::ldexpf;
    using std::ldexpl;
    using std::lgamma;
    using std::lgammaf;
    using std::lgammal;
    using std::llrint;
    using std::llrintf;
    using std::llrintl;
    using std::llround;
    using std::llroundf;
    using std::llroundl;
    using std::logb;
    using std::logbf;
    using std::logbl;
    using std::logf;
    using std::logl;
    using std::log10f;
    using std::log10l;
    using std::log1p;
    using std::log1pf;
    using std::log1pl;
    using std::log2;
    using std::log2f;
    using std::log2l;
    using std::lrint;
    using std::lrintf;
    using std::lrintl;
    using std::lround;
    using std::lroundf;
    using std::lroundl;
    using std::modff;
    using std::modfl;
    using std::nan;
    using std::nanf;
    using std::nanl;
    using std::nearbyint;
    using std::nearbyintf;
    using std::nearbyintl;
    using std::nextafter;
    using std::nextafterf;
    using std::nextafterl;
    using std::nexttoward;
    using std::nexttowardf;
    using std::nexttowardl;
    using std::powf;
    using std::powl;
    using std::remainder;
    using std::remainderf;
    using std::remainderl;
    using std::remquo;
    using std::remquof;
    using std::remquol;
    using std::rint;
    using std::rintf;
    using std::rintl;
    using std::round;
    using std::roundf;
    using std::roundl;
    using std::scalbln;
    using std::scalblnf;
    using std::scalblnl;
    using std::signbit;
    using std::sinf;
    using std::sinhf;
    using std::sinhl;
    using std::sinl;
    using std::sqrtf;
    using std::sqrtl;
    using std::tanf;
    using std::tanhf;
    using std::tanhl;
    using std::tanl;
    using std::tgamma;
    using std::tgammaf;
    using std::tgammal;
    using std::trunc;
    using std::truncf;
    using std::truncl;
    // -- C++17
    using std::assoc_laguerre;
    using std::assoc_laguerref;
    using std::assoc_laguerrel;
    using std::assoc_legendre;
    using std::assoc_legendref;
    using std::assoc_legendrel;
    using std::beta;
    using std::betaf;
    using std::betal;
    using std::comp_ellint_1;
    using std::comp_ellint_1f;
    using std::comp_ellint_1l;
    using std::comp_ellint_2;
    using std::comp_ellint_2f;
    using std::comp_ellint_2l;
    using std::comp_ellint_3;
    using std::comp_ellint_3f;
    using std::comp_ellint_3l;
    using std::cyl_bessel_i;
    using std::cyl_bessel_if;
    using std::cyl_bessel_il;
    using std::cyl_bessel_j;
    using std::cyl_bessel_jf;
    using std::cyl_bessel_jl;
    using std::cyl_bessel_k;
    using std::cyl_bessel_kf;
    using std::cyl_bessel_kl;
    using std::cyl_neumann;
    using std::cyl_neumannf;
    using std::cyl_neumannl;
    using std::ellint_1;
    using std::ellint_1f;
    using std::ellint_1l;
    using std::ellint_2;
    using std::ellint_2f;
    using std::ellint_2l;
    using std::ellint_3;
    using std::ellint_3f;
    using std::ellint_3l;
    using std::expint;
    using std::expintf;
    using std::expintl;
    using std::hermite;
    using std::hermitef;
    using std::hermitel;
    using std::laguerre;
    using std::laguerref;
    using std::laguerrel;
    using std::legendre;
    using std::legendref;
    using std::legendrel;
    using std::riemann_zeta;
    using std::riemann_zetaf;
    using std::riemann_zetal;
    using std::sph_bessel;
    using std::sph_besself;
    using std::sph_bessell;
    using std::sph_legendre;
    using std::sph_legendref;
    using std::sph_legendrel;
    using std::sph_neumann;
    using std::sph_neumannf;
    using std::sph_neumannl;
    // -- C++20
    //using std::lerp;
    // libc.hxx->inttypes
    // -- C++11
    using std::imaxabs;
    using std::imaxdiv;
    // libc.hxx->stdlib
    using std::div_t;
    using std::ldiv_t;
    using std::abs;
    using std::div;
    using std::labs;
    using std::ldiv;
    // -- C++11
    using std::lldiv_t;
    using std::llabs;
    using std::lldiv;
}
