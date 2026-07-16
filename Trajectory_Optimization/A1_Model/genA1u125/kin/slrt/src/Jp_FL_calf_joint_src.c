/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t293;
  double t428;
  double t350;
  double t412;
  double t665;
  double t329;
  double t423;
  double t673;
  double t689;
  double t771;
  double t1007;
  double t1130;
  double t1170;
  double t267;
  double t1800;
  double t74;
  double t1945;
  double t2081;
  double t2396;
  double t2978;
  double t3011;
  double t3157;
  double t3389;
  double t3588;
  double t3593;
  double t3623;
  double t3964;
  double t3974;
  double t4155;
  double t147;
  double t150;
  double t185;
  double t192;
  double t346;
  double t347;
  double t802;
  double t810;
  double t844;
  double t926;
  double t4586;
  double t4604;
  double t4605;
  double t4682;
  double t4729;
  double t4776;
  double t1867;
  double t1893;
  double t3297;
  double t3402;
  double t3519;
  double t5151;
  double t5256;
  double t5329;
  double t3798;
  double t3944;
  double t3963;
  double t5363;
  double t5370;
  double t5476;
  double t5503;
  double t5507;
  double t5512;
  double t5876;
  double t5887;
  double t5906;
  double t5985;
  double t6016;
  double t6031;
  double t6131;
  double t6169;
  double t6215;
  double t6730;
  double t6796;
  double t6806;
  double t6819;
  double t6891;
  double t6953;
  double t6990;
  double t7036;
  double t7054;
  double t7548;
  double t7554;
  double t7577;
  double t7593;
  double t7598;
  double t7601;
  double t7660;
  double t7714;
  double t7748;
  double t7944;
  double t8008;
  double t8026;
  double t8062;
  double t8066;
  double t8069;
  double t8195;
  double t8211;
  double t8231;
  double t1620;
  double t8243;
  double t8248;
  double t8440;
  double t8445;
  double t8446;
  double t8565;
  double t8566;
  double t8629;
  double t8635;
  double t8639;
  double t8657;
  double t8661;
  double t8276;
  double t8447;
  double t8448;
  double t8456;
  double t8459;
  double t8465;
  double t8466;
  double t8470;
  double t8472;
  double t8473;
  double t8479;
  double t8481;
  double t8486;
  double t8497;
  double t8508;
  double t8515;
  double t8733;
  double t8735;
  double t8737;
  double t5531;
  double t8676;
  double t8678;
  double t8794;
  double t8797;
  double t8809;
  double t8810;
  double t8814;
  double t8916;
  double t8927;
  double t8939;
  double t8959;
  double t8972;
  double t8981;
  double t5528;
  double t5549;
  double t8754;
  double t9049;
  double t9050;
  double t9051;
  double t9067;
  double t9076;
  double t9098;
  double t9099;
  double t9111;
  double t8826;
  double t8841;
  double t9179;
  double t9180;
  double t9183;
  double t9021;
  double t9034;
  t293 = Sin(var1[3]);
  t428 = Cos(var1[3]);
  t350 = Cos(var1[5]);
  t412 = Sin(var1[4]);
  t665 = Sin(var1[5]);
  t329 = Sin(var1[9]);
  t423 = -1.*t350*t293*t412;
  t673 = t428*t665;
  t689 = t423 + t673;
  t771 = Cos(var1[9]);
  t1007 = -1.*t428*t350;
  t1130 = -1.*t293*t412*t665;
  t1170 = t1007 + t1130;
  t267 = Cos(var1[4]);
  t1800 = Sin(var1[10]);
  t74 = Cos(var1[10]);
  t1945 = t771*t689;
  t2081 = -1.*t329*t1170;
  t2396 = t1945 + t2081;
  t2978 = Cos(var1[11]);
  t3011 = -1.*t2978;
  t3157 = 1. + t3011;
  t3389 = Sin(var1[11]);
  t3588 = -1.*t267*t1800*t293;
  t3593 = t74*t2396;
  t3623 = t3588 + t3593;
  t3964 = -1.*t74*t267*t293;
  t3974 = -1.*t1800*t2396;
  t4155 = t3964 + t3974;
  t147 = -1.*t74;
  t150 = 1. + t147;
  t185 = 0.183*t150;
  t192 = 0. + t185;
  t346 = -0.047*t329;
  t347 = 0. + t346;
  t802 = -1.*t771;
  t810 = 1. + t802;
  t844 = 0.047*t810;
  t926 = 0. + t844;
  t4586 = t428*t350*t412;
  t4604 = t293*t665;
  t4605 = t4586 + t4604;
  t4682 = -1.*t350*t293;
  t4729 = t428*t412*t665;
  t4776 = t4682 + t4729;
  t1867 = 0.183*t1800;
  t1893 = 0. + t1867;
  t3297 = -0.25*t3157;
  t3402 = 0.183*t3389;
  t3519 = 0. + t3297 + t3402;
  t5151 = t771*t4605;
  t5256 = -1.*t329*t4776;
  t5329 = t5151 + t5256;
  t3798 = 0.183*t3157;
  t3944 = 0.25*t3389;
  t3963 = 0. + t3798 + t3944;
  t5363 = t428*t267*t1800;
  t5370 = t74*t5329;
  t5476 = t5363 + t5370;
  t5503 = t74*t428*t267;
  t5507 = -1.*t1800*t5329;
  t5512 = t5503 + t5507;
  t5876 = t771*t428*t267*t350;
  t5887 = -1.*t428*t267*t329*t665;
  t5906 = t5876 + t5887;
  t5985 = -1.*t428*t1800*t412;
  t6016 = t74*t5906;
  t6031 = t5985 + t6016;
  t6131 = -1.*t74*t428*t412;
  t6169 = -1.*t1800*t5906;
  t6215 = t6131 + t6169;
  t6730 = t771*t267*t350*t293;
  t6796 = -1.*t267*t329*t293*t665;
  t6806 = t6730 + t6796;
  t6819 = -1.*t1800*t293*t412;
  t6891 = t74*t6806;
  t6953 = t6819 + t6891;
  t6990 = -1.*t74*t293*t412;
  t7036 = -1.*t1800*t6806;
  t7054 = t6990 + t7036;
  t7548 = -1.*t771*t350*t412;
  t7554 = t329*t412*t665;
  t7577 = t7548 + t7554;
  t7593 = -1.*t267*t1800;
  t7598 = t74*t7577;
  t7601 = t7593 + t7598;
  t7660 = -1.*t74*t267;
  t7714 = -1.*t1800*t7577;
  t7748 = t7660 + t7714;
  t7944 = t350*t293;
  t8008 = -1.*t428*t412*t665;
  t8026 = t7944 + t8008;
  t8062 = -1.*t329*t4605;
  t8066 = t771*t8026;
  t8069 = t8062 + t8066;
  t8195 = t350*t293*t412;
  t8211 = -1.*t428*t665;
  t8231 = t8195 + t8211;
  t1620 = t771*t1170;
  t8243 = -1.*t329*t8231;
  t8248 = t8243 + t1620;
  t8440 = -1.*t267*t350*t329;
  t8445 = -1.*t771*t267*t665;
  t8446 = t8440 + t8445;
  t8565 = -1.*t771*t4776;
  t8566 = t8062 + t8565;
  t8629 = t428*t350;
  t8635 = t293*t412*t665;
  t8639 = t8629 + t8635;
  t8657 = -1.*t771*t8639;
  t8661 = t8243 + t8657;
  t8276 = t771*t8231;
  t8447 = t1893*t8446;
  t8448 = t74*t3519*t8446;
  t8456 = -1.*t1800*t3963*t8446;
  t8459 = t771*t267*t350;
  t8465 = -1.*t267*t329*t665;
  t8466 = t8459 + t8465;
  t8470 = 0.15331*t8466;
  t8472 = -1.*t2978*t1800*t8446;
  t8473 = -1.*t74*t3389*t8446;
  t8479 = t8472 + t8473;
  t8481 = 0.183*t8479;
  t8486 = t74*t2978*t8446;
  t8497 = -1.*t1800*t3389*t8446;
  t8508 = t8486 + t8497;
  t8515 = -0.25*t8508;
  t8733 = -1.*t428*t267*t1800;
  t8735 = -1.*t74*t5329;
  t8737 = t8733 + t8735;
  t5531 = t2978*t5512;
  t8676 = -1.*t329*t8639;
  t8678 = t8276 + t8676;
  t8794 = -1.*t74*t8678;
  t8797 = t3588 + t8794;
  t8809 = t74*t267*t293;
  t8810 = -1.*t1800*t8678;
  t8814 = t8809 + t8810;
  t8916 = t1800*t412;
  t8927 = -1.*t74*t8466;
  t8939 = t8916 + t8927;
  t8959 = -1.*t74*t412;
  t8972 = -1.*t1800*t8466;
  t8981 = t8959 + t8972;
  t5528 = -1.*t3389*t5476;
  t5549 = t5528 + t5531;
  t8754 = -1.*t3389*t5512;
  t9049 = 0.183*t2978;
  t9050 = -0.25*t3389;
  t9051 = t9049 + t9050;
  t9067 = 0.25*t2978;
  t9076 = t9067 + t3402;
  t9098 = t267*t1800*t293;
  t9099 = t74*t8678;
  t9111 = t9098 + t9099;
  t8826 = t2978*t8814;
  t8841 = -1.*t3389*t8814;
  t9179 = -1.*t1800*t412;
  t9180 = t74*t8466;
  t9183 = t9179 + t9180;
  t9021 = t2978*t8981;
  t9034 = -1.*t3389*t8981;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1893*t2396 - 1.*t192*t267*t293 + t3519*t3623 + t3963*t4155 + 0.183*(-1.*t3389*t3623 + t2978*t4155) - 0.25*(t2978*t3623 + t3389*t4155) + t347*t689 + 0.15331*(t1620 + t329*t689) + t1170*t926;
  p_output1[10]=t192*t267*t428 + t347*t4605 + t1893*t5329 + t3519*t5476 + t3963*t5512 - 0.25*(t2978*t5476 + t3389*t5512) + 0.183*t5549 + 0.15331*(t329*t4605 + t4776*t771) + t4776*t926;
  p_output1[11]=0;
  p_output1[12]=t267*t347*t350*t428 - 1.*t192*t412*t428 + t1893*t5906 + t3519*t6031 + t3963*t6215 + 0.183*(-1.*t3389*t6031 + t2978*t6215) - 0.25*(t2978*t6031 + t3389*t6215) + 0.15331*(t267*t329*t350*t428 + t267*t428*t665*t771) + t267*t428*t665*t926;
  p_output1[13]=t267*t293*t347*t350 - 1.*t192*t293*t412 + t1893*t6806 + t3519*t6953 + t3963*t7054 + 0.183*(-1.*t3389*t6953 + t2978*t7054) - 0.25*(t2978*t6953 + t3389*t7054) + 0.15331*(t267*t293*t329*t350 + t267*t293*t665*t771) + t267*t293*t665*t926;
  p_output1[14]=-1.*t192*t267 - 1.*t347*t350*t412 + t1893*t7577 + t3519*t7601 + 0.15331*(-1.*t329*t350*t412 - 1.*t412*t665*t771) + t3963*t7748 + 0.183*(-1.*t3389*t7601 + t2978*t7748) - 0.25*(t2978*t7601 + t3389*t7748) - 1.*t412*t665*t926;
  p_output1[15]=t347*t8026 + 0.15331*(t5151 + t329*t8026) + t1893*t8069 - 1.*t1800*t3963*t8069 + t3519*t74*t8069 - 0.25*(-1.*t1800*t3389*t8069 + t2978*t74*t8069) + 0.183*(-1.*t1800*t2978*t8069 - 1.*t3389*t74*t8069) + t4605*t926;
  p_output1[16]=t1170*t347 + t1893*t8248 - 1.*t1800*t3963*t8248 + t3519*t74*t8248 - 0.25*(-1.*t1800*t3389*t8248 + t2978*t74*t8248) + 0.183*(-1.*t1800*t2978*t8248 - 1.*t3389*t74*t8248) + 0.15331*(t1170*t329 + t8276) + t8231*t926;
  p_output1[17]=-1.*t267*t347*t665 + t8447 + t8448 + t8456 + t8470 + t8481 + t8515 + t267*t350*t926;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.047*t329*t4776 + 0.15331*t5329 - 0.047*t4605*t771 + t1893*t8566 - 1.*t1800*t3963*t8566 + t3519*t74*t8566 - 0.25*(-1.*t1800*t3389*t8566 + t2978*t74*t8566) + 0.183*(-1.*t1800*t2978*t8566 - 1.*t3389*t74*t8566);
  p_output1[28]=-0.047*t771*t8231 + 0.047*t329*t8639 + t1893*t8661 - 1.*t1800*t3963*t8661 + t3519*t74*t8661 - 0.25*(-1.*t1800*t3389*t8661 + t2978*t74*t8661) + 0.183*(-1.*t1800*t2978*t8661 - 1.*t3389*t74*t8661) + 0.15331*t8678;
  p_output1[29]=0.047*t267*t329*t665 - 0.047*t267*t350*t771 + t8447 + t8448 + t8456 + t8470 + t8481 + t8515;
  p_output1[30]=0.183*t1800*t267*t428 + t3519*t5512 + 0.183*t5329*t74 + t3963*t8737 - 0.25*(t5531 + t3389*t8737) + 0.183*(t2978*t8737 + t8754);
  p_output1[31]=0.183*t1800*t267*t293 + 0.183*t74*t8678 + t3963*t8797 + t3519*t8814 - 0.25*(t3389*t8797 + t8826) + 0.183*(t2978*t8797 + t8841);
  p_output1[32]=-0.183*t1800*t412 + 0.183*t74*t8466 + t3963*t8939 + t3519*t8981 - 0.25*(t3389*t8939 + t9021) + 0.183*(t2978*t8939 + t9034);
  p_output1[33]=-0.25*t5549 + 0.183*(-1.*t2978*t5476 + t8754) + t5476*t9051 + t5512*t9076;
  p_output1[34]=t8814*t9076 + t9051*t9111 + 0.183*(t8841 - 1.*t2978*t9111) - 0.25*(t8826 - 1.*t3389*t9111);
  p_output1[35]=t8981*t9076 + t9051*t9183 + 0.183*(t9034 - 1.*t2978*t9183) - 0.25*(t9021 - 1.*t3389*t9183);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
