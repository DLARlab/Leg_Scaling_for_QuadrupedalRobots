/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }


/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t320;
  double t747;
  double t894;
  double t730;
  double t895;
  double t498;
  double t863;
  double t935;
  double t993;
  double t1045;
  double t1081;
  double t1277;
  double t1280;
  double t192;
  double t1844;
  double t1978;
  double t2060;
  double t23;
  double t2123;
  double t2684;
  double t2702;
  double t2756;
  double t2868;
  double t3020;
  double t3044;
  double t3064;
  double t2304;
  double t2309;
  double t2623;
  double t199;
  double t249;
  double t314;
  double t317;
  double t569;
  double t610;
  double t637;
  double t720;
  double t1377;
  double t1402;
  double t3923;
  double t3934;
  double t3974;
  double t4037;
  double t4212;
  double t4290;
  double t2145;
  double t2163;
  double t4379;
  double t4381;
  double t4416;
  double t2866;
  double t2885;
  double t2938;
  double t3069;
  double t3079;
  double t3179;
  double t4940;
  double t4954;
  double t4957;
  double t4428;
  double t4622;
  double t4626;
  double t6201;
  double t6203;
  double t6226;
  double t6446;
  double t6492;
  double t6550;
  double t6250;
  double t6282;
  double t6325;
  double t6932;
  double t6941;
  double t6975;
  double t7084;
  double t7110;
  double t7111;
  double t7031;
  double t7046;
  double t7048;
  double t7536;
  double t7558;
  double t7562;
  double t7734;
  double t7735;
  double t7743;
  double t7606;
  double t7621;
  double t7638;
  double t8063;
  double t8103;
  double t8106;
  double t8217;
  double t8222;
  double t8223;
  double t8418;
  double t8421;
  double t8503;
  double t1563;
  double t8576;
  double t8597;
  double t8735;
  double t8754;
  double t8765;
  double t8923;
  double t8929;
  double t8522;
  double t9056;
  double t9070;
  double t9074;
  double t9094;
  double t9097;
  double t8716;
  double t8719;
  double t8732;
  double t8734;
  double t8775;
  double t8780;
  double t8789;
  double t8847;
  double t8849;
  double t8854;
  double t8874;
  double t8876;
  double t8879;
  double t8906;
  double t8907;
  double t5233;
  double t9315;
  double t9324;
  double t9351;
  double t9080;
  double t9083;
  double t9406;
  double t9422;
  double t9436;
  double t9453;
  double t9465;
  double t9587;
  double t9617;
  double t9618;
  double t9631;
  double t9637;
  double t9647;
  double t5322;
  double t5335;
  double t9381;
  double t9720;
  double t9733;
  double t9744;
  double t9751;
  double t9762;
  double t9488;
  double t9801;
  double t9802;
  double t9805;
  double t9539;
  double t9662;
  double t9842;
  double t9843;
  double t9844;
  double t9699;
  t320 = Sin(var1[3]);
  t747 = Cos(var1[5]);
  t894 = Sin(var1[4]);
  t730 = Cos(var1[3]);
  t895 = Sin(var1[5]);
  t498 = Cos(var1[6]);
  t863 = -1.*t730*t747;
  t935 = -1.*t320*t894*t895;
  t993 = t863 + t935;
  t1045 = -1.*t747*t320*t894;
  t1081 = t730*t895;
  t1277 = t1045 + t1081;
  t1280 = Sin(var1[6]);
  t192 = Cos(var1[7]);
  t1844 = t498*t1277;
  t1978 = -1.*t993*t1280;
  t2060 = t1844 + t1978;
  t23 = Cos(var1[4]);
  t2123 = Sin(var1[7]);
  t2684 = Cos(var1[8]);
  t2702 = -1.*t2684;
  t2756 = 1. + t2702;
  t2868 = Sin(var1[8]);
  t3020 = -1.*t23*t192*t320;
  t3044 = -1.*t2060*t2123;
  t3064 = t3020 + t3044;
  t2304 = t192*t2060;
  t2309 = -1.*t23*t320*t2123;
  t2623 = t2304 + t2309;
  t199 = -1.*t192;
  t249 = 1. + t199;
  t314 = 0.183*t249;
  t317 = 0. + t314;
  t569 = -1.*t498;
  t610 = 1. + t569;
  t637 = -0.047*t610;
  t720 = 0. + t637;
  t1377 = 0.047*t1280;
  t1402 = 0. + t1377;
  t3923 = -1.*t747*t320;
  t3934 = t730*t894*t895;
  t3974 = t3923 + t3934;
  t4037 = t730*t747*t894;
  t4212 = t320*t895;
  t4290 = t4037 + t4212;
  t2145 = 0.183*t2123;
  t2163 = 0. + t2145;
  t4379 = t498*t4290;
  t4381 = -1.*t3974*t1280;
  t4416 = t4379 + t4381;
  t2866 = -0.25*t2756;
  t2885 = 0.183*t2868;
  t2938 = 0. + t2866 + t2885;
  t3069 = 0.183*t2756;
  t3079 = 0.25*t2868;
  t3179 = 0. + t3069 + t3079;
  t4940 = t730*t23*t192;
  t4954 = -1.*t4416*t2123;
  t4957 = t4940 + t4954;
  t4428 = t192*t4416;
  t4622 = t730*t23*t2123;
  t4626 = t4428 + t4622;
  t6201 = t730*t23*t747*t498;
  t6203 = -1.*t730*t23*t895*t1280;
  t6226 = t6201 + t6203;
  t6446 = -1.*t730*t192*t894;
  t6492 = -1.*t6226*t2123;
  t6550 = t6446 + t6492;
  t6250 = t192*t6226;
  t6282 = -1.*t730*t894*t2123;
  t6325 = t6250 + t6282;
  t6932 = t23*t747*t498*t320;
  t6941 = -1.*t23*t320*t895*t1280;
  t6975 = t6932 + t6941;
  t7084 = -1.*t192*t320*t894;
  t7110 = -1.*t6975*t2123;
  t7111 = t7084 + t7110;
  t7031 = t192*t6975;
  t7046 = -1.*t320*t894*t2123;
  t7048 = t7031 + t7046;
  t7536 = -1.*t747*t498*t894;
  t7558 = t894*t895*t1280;
  t7562 = t7536 + t7558;
  t7734 = -1.*t23*t192;
  t7735 = -1.*t7562*t2123;
  t7743 = t7734 + t7735;
  t7606 = t192*t7562;
  t7621 = -1.*t23*t2123;
  t7638 = t7606 + t7621;
  t8063 = t747*t320;
  t8103 = -1.*t730*t894*t895;
  t8106 = t8063 + t8103;
  t8217 = t498*t8106;
  t8222 = -1.*t4290*t1280;
  t8223 = t8217 + t8222;
  t8418 = t747*t320*t894;
  t8421 = -1.*t730*t895;
  t8503 = t8418 + t8421;
  t1563 = t498*t993;
  t8576 = -1.*t8503*t1280;
  t8597 = t1563 + t8576;
  t8735 = -1.*t23*t498*t895;
  t8754 = -1.*t23*t747*t1280;
  t8765 = t8735 + t8754;
  t8923 = -1.*t498*t3974;
  t8929 = t8923 + t8222;
  t8522 = t498*t8503;
  t9056 = t730*t747;
  t9070 = t320*t894*t895;
  t9074 = t9056 + t9070;
  t9094 = -1.*t498*t9074;
  t9097 = t9094 + t8576;
  t8716 = t23*t747*t498;
  t8719 = -1.*t23*t895*t1280;
  t8732 = t8716 + t8719;
  t8734 = -0.15331*t8732;
  t8775 = t8765*t2163;
  t8780 = t192*t8765*t2938;
  t8789 = -1.*t8765*t2123*t3179;
  t8847 = -1.*t2684*t8765*t2123;
  t8849 = -1.*t192*t8765*t2868;
  t8854 = t8847 + t8849;
  t8874 = 0.183*t8854;
  t8876 = t192*t2684*t8765;
  t8879 = -1.*t8765*t2123*t2868;
  t8906 = t8876 + t8879;
  t8907 = -0.5*t8906;
  t5233 = t2684*t4957;
  t9315 = -1.*t192*t4416;
  t9324 = -1.*t730*t23*t2123;
  t9351 = t9315 + t9324;
  t9080 = -1.*t9074*t1280;
  t9083 = t8522 + t9080;
  t9406 = t23*t192*t320;
  t9422 = -1.*t9083*t2123;
  t9436 = t9406 + t9422;
  t9453 = -1.*t192*t9083;
  t9465 = t9453 + t2309;
  t9587 = -1.*t192*t894;
  t9617 = -1.*t8732*t2123;
  t9618 = t9587 + t9617;
  t9631 = -1.*t192*t8732;
  t9637 = t894*t2123;
  t9647 = t9631 + t9637;
  t5322 = -1.*t4626*t2868;
  t5335 = t5233 + t5322;
  t9381 = -1.*t4957*t2868;
  t9720 = 0.183*t2684;
  t9733 = -0.25*t2868;
  t9744 = t9720 + t9733;
  t9751 = 0.25*t2684;
  t9762 = t9751 + t2885;
  t9488 = t2684*t9436;
  t9801 = t192*t9083;
  t9802 = t23*t320*t2123;
  t9805 = t9801 + t9802;
  t9539 = -1.*t9436*t2868;
  t9662 = t2684*t9618;
  t9842 = t192*t8732;
  t9843 = -1.*t894*t2123;
  t9844 = t9842 + t9843;
  t9699 = -1.*t9618*t2868;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1277*t1402 - 0.15331*(t1277*t1280 + t1563) + t2060*t2163 + t2623*t2938 + 0.183*(-1.*t2623*t2868 + t2684*t3064) - 0.5*(t2623*t2684 + t2868*t3064) + t3064*t3179 - 1.*t23*t317*t320 + t720*t993;
  p_output1(10)=t1402*t4290 + t2163*t4416 + t2938*t4626 + t3179*t4957 - 0.5*(t2684*t4626 + t2868*t4957) - 0.15331*(t1280*t4290 + t3974*t498) + 0.183*t5335 + t3974*t720 + t23*t317*t730;
  p_output1(11)=0;
  p_output1(12)=t2163*t6226 + t2938*t6325 + t3179*t6550 + 0.183*(-1.*t2868*t6325 + t2684*t6550) - 0.5*(t2684*t6325 + t2868*t6550) + t1402*t23*t730*t747 - 1.*t317*t730*t894 + t23*t720*t730*t895 - 0.15331*(t1280*t23*t730*t747 + t23*t498*t730*t895);
  p_output1(13)=t2163*t6975 + t2938*t7048 + t3179*t7111 + 0.183*(-1.*t2868*t7048 + t2684*t7111) - 0.5*(t2684*t7048 + t2868*t7111) + t1402*t23*t320*t747 - 1.*t317*t320*t894 + t23*t320*t720*t895 - 0.15331*(t1280*t23*t320*t747 + t23*t320*t498*t895);
  p_output1(14)=-1.*t23*t317 + t2163*t7562 + t2938*t7638 + t3179*t7743 + 0.183*(-1.*t2868*t7638 + t2684*t7743) - 0.5*(t2684*t7638 + t2868*t7743) - 1.*t1402*t747*t894 - 1.*t720*t894*t895 - 0.15331*(-1.*t1280*t747*t894 - 1.*t498*t894*t895);
  p_output1(15)=t4290*t720 + t1402*t8106 - 0.15331*(t4379 + t1280*t8106) + t2163*t8223 + t192*t2938*t8223 - 1.*t2123*t3179*t8223 + 0.183*(-1.*t2123*t2684*t8223 - 1.*t192*t2868*t8223) - 0.5*(t192*t2684*t8223 - 1.*t2123*t2868*t8223);
  p_output1(16)=t720*t8503 + t2163*t8597 + t192*t2938*t8597 - 1.*t2123*t3179*t8597 + 0.183*(-1.*t2123*t2684*t8597 - 1.*t192*t2868*t8597) - 0.5*(t192*t2684*t8597 - 1.*t2123*t2868*t8597) + t1402*t993 - 0.15331*(t8522 + t1280*t993);
  p_output1(17)=t23*t720*t747 + t8734 + t8775 + t8780 + t8789 + t8874 + t8907 - 1.*t1402*t23*t895;
  p_output1(18)=-0.047*t1280*t3974 - 0.15331*t4416 + 0.047*t4290*t498 + t2163*t8929 + t192*t2938*t8929 - 1.*t2123*t3179*t8929 + 0.183*(-1.*t2123*t2684*t8929 - 1.*t192*t2868*t8929) - 0.5*(t192*t2684*t8929 - 1.*t2123*t2868*t8929);
  p_output1(19)=0.047*t498*t8503 - 0.047*t1280*t9074 - 0.15331*t9083 + t2163*t9097 + t192*t2938*t9097 - 1.*t2123*t3179*t9097 + 0.183*(-1.*t2123*t2684*t9097 - 1.*t192*t2868*t9097) - 0.5*(t192*t2684*t9097 - 1.*t2123*t2868*t9097);
  p_output1(20)=0.047*t23*t498*t747 + t8734 + t8775 + t8780 + t8789 + t8874 + t8907 - 0.047*t1280*t23*t895;
  p_output1(21)=0.183*t192*t4416 + t2938*t4957 + 0.183*t2123*t23*t730 + t3179*t9351 - 0.5*(t5233 + t2868*t9351) + 0.183*(t2684*t9351 + t9381);
  p_output1(22)=0.183*t2123*t23*t320 + 0.183*t192*t9083 + t2938*t9436 + t3179*t9465 - 0.5*(t2868*t9465 + t9488) + 0.183*(t2684*t9465 + t9539);
  p_output1(23)=0.183*t192*t8732 - 0.183*t2123*t894 + t2938*t9618 + t3179*t9647 - 0.5*(t2868*t9647 + t9662) + 0.183*(t2684*t9647 + t9699);
  p_output1(24)=-0.5*t5335 + 0.183*(-1.*t2684*t4626 + t9381) + t4626*t9744 + t4957*t9762;
  p_output1(25)=t9436*t9762 + t9744*t9805 + 0.183*(t9539 - 1.*t2684*t9805) - 0.5*(t9488 - 1.*t2868*t9805);
  p_output1(26)=t9618*t9762 + t9744*t9844 + 0.183*(t9699 - 1.*t2684*t9844) - 0.5*(t9662 - 1.*t2868*t9844);
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



