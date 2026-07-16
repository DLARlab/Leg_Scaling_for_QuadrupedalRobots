/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:47 GMT-05:00
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
  double t528;
  double t947;
  double t812;
  double t861;
  double t1021;
  double t671;
  double t938;
  double t1027;
  double t1122;
  double t1336;
  double t1726;
  double t1878;
  double t2139;
  double t397;
  double t2479;
  double t43;
  double t2625;
  double t2804;
  double t2819;
  double t2956;
  double t3011;
  double t3062;
  double t3250;
  double t3315;
  double t3365;
  double t3498;
  double t3827;
  double t3831;
  double t3841;
  double t117;
  double t310;
  double t316;
  double t355;
  double t765;
  double t797;
  double t1495;
  double t1551;
  double t1571;
  double t1601;
  double t4168;
  double t4323;
  double t4331;
  double t4494;
  double t4528;
  double t4890;
  double t2547;
  double t2618;
  double t3082;
  double t3264;
  double t3305;
  double t5039;
  double t5056;
  double t5060;
  double t3541;
  double t3613;
  double t3789;
  double t5302;
  double t5391;
  double t5392;
  double t5441;
  double t5542;
  double t5547;
  double t5985;
  double t6005;
  double t6010;
  double t6096;
  double t6104;
  double t6149;
  double t6173;
  double t6211;
  double t6226;
  double t6891;
  double t6938;
  double t6950;
  double t6989;
  double t6995;
  double t7002;
  double t7067;
  double t7076;
  double t7079;
  double t7563;
  double t7592;
  double t7634;
  double t7694;
  double t7721;
  double t7744;
  double t7809;
  double t7820;
  double t7853;
  double t8082;
  double t8094;
  double t8111;
  double t8127;
  double t8128;
  double t8140;
  double t8389;
  double t8404;
  double t8409;
  double t2277;
  double t8463;
  double t8493;
  double t8730;
  double t8750;
  double t8758;
  double t8890;
  double t8897;
  double t9098;
  double t9108;
  double t9111;
  double t9123;
  double t9130;
  double t8568;
  double t8760;
  double t8763;
  double t8775;
  double t8777;
  double t8780;
  double t8787;
  double t8800;
  double t8815;
  double t8819;
  double t8821;
  double t8822;
  double t8837;
  double t8841;
  double t8858;
  double t8863;
  double t9288;
  double t9310;
  double t9320;
  double t5636;
  double t9155;
  double t9163;
  double t9385;
  double t9387;
  double t9407;
  double t9409;
  double t9414;
  double t9492;
  double t9497;
  double t9499;
  double t9510;
  double t9518;
  double t9519;
  double t5625;
  double t5652;
  double t9345;
  double t9592;
  double t9595;
  double t9596;
  double t9627;
  double t9628;
  double t9653;
  double t9668;
  double t9671;
  double t9443;
  double t9464;
  double t9721;
  double t9724;
  double t9730;
  double t9543;
  double t9574;
  t528 = Sin(var1[3]);
  t947 = Cos(var1[3]);
  t812 = Cos(var1[5]);
  t861 = Sin(var1[4]);
  t1021 = Sin(var1[5]);
  t671 = Sin(var1[9]);
  t938 = -1.*t812*t528*t861;
  t1027 = t947*t1021;
  t1122 = t938 + t1027;
  t1336 = Cos(var1[9]);
  t1726 = -1.*t947*t812;
  t1878 = -1.*t528*t861*t1021;
  t2139 = t1726 + t1878;
  t397 = Cos(var1[4]);
  t2479 = Sin(var1[10]);
  t43 = Cos(var1[10]);
  t2625 = t1336*t1122;
  t2804 = -1.*t671*t2139;
  t2819 = t2625 + t2804;
  t2956 = Cos(var1[11]);
  t3011 = -1.*t2956;
  t3062 = 1. + t3011;
  t3250 = Sin(var1[11]);
  t3315 = -1.*t397*t2479*t528;
  t3365 = t43*t2819;
  t3498 = t3315 + t3365;
  t3827 = -1.*t43*t397*t528;
  t3831 = -1.*t2479*t2819;
  t3841 = t3827 + t3831;
  t117 = -1.*t43;
  t310 = 1. + t117;
  t316 = 0.183*t310;
  t355 = 0. + t316;
  t765 = -0.047*t671;
  t797 = 0. + t765;
  t1495 = -1.*t1336;
  t1551 = 1. + t1495;
  t1571 = 0.047*t1551;
  t1601 = 0. + t1571;
  t4168 = t947*t812*t861;
  t4323 = t528*t1021;
  t4331 = t4168 + t4323;
  t4494 = -1.*t812*t528;
  t4528 = t947*t861*t1021;
  t4890 = t4494 + t4528;
  t2547 = 0.183*t2479;
  t2618 = 0. + t2547;
  t3082 = -0.3*t3062;
  t3264 = 0.183*t3250;
  t3305 = 0. + t3082 + t3264;
  t5039 = t1336*t4331;
  t5056 = -1.*t671*t4890;
  t5060 = t5039 + t5056;
  t3541 = 0.183*t3062;
  t3613 = 0.3*t3250;
  t3789 = 0. + t3541 + t3613;
  t5302 = t947*t397*t2479;
  t5391 = t43*t5060;
  t5392 = t5302 + t5391;
  t5441 = t43*t947*t397;
  t5542 = -1.*t2479*t5060;
  t5547 = t5441 + t5542;
  t5985 = t1336*t947*t397*t812;
  t6005 = -1.*t947*t397*t671*t1021;
  t6010 = t5985 + t6005;
  t6096 = -1.*t947*t2479*t861;
  t6104 = t43*t6010;
  t6149 = t6096 + t6104;
  t6173 = -1.*t43*t947*t861;
  t6211 = -1.*t2479*t6010;
  t6226 = t6173 + t6211;
  t6891 = t1336*t397*t812*t528;
  t6938 = -1.*t397*t671*t528*t1021;
  t6950 = t6891 + t6938;
  t6989 = -1.*t2479*t528*t861;
  t6995 = t43*t6950;
  t7002 = t6989 + t6995;
  t7067 = -1.*t43*t528*t861;
  t7076 = -1.*t2479*t6950;
  t7079 = t7067 + t7076;
  t7563 = -1.*t1336*t812*t861;
  t7592 = t671*t861*t1021;
  t7634 = t7563 + t7592;
  t7694 = -1.*t397*t2479;
  t7721 = t43*t7634;
  t7744 = t7694 + t7721;
  t7809 = -1.*t43*t397;
  t7820 = -1.*t2479*t7634;
  t7853 = t7809 + t7820;
  t8082 = t812*t528;
  t8094 = -1.*t947*t861*t1021;
  t8111 = t8082 + t8094;
  t8127 = -1.*t671*t4331;
  t8128 = t1336*t8111;
  t8140 = t8127 + t8128;
  t8389 = t812*t528*t861;
  t8404 = -1.*t947*t1021;
  t8409 = t8389 + t8404;
  t2277 = t1336*t2139;
  t8463 = -1.*t671*t8409;
  t8493 = t8463 + t2277;
  t8730 = -1.*t397*t812*t671;
  t8750 = -1.*t1336*t397*t1021;
  t8758 = t8730 + t8750;
  t8890 = -1.*t1336*t4890;
  t8897 = t8127 + t8890;
  t9098 = t947*t812;
  t9108 = t528*t861*t1021;
  t9111 = t9098 + t9108;
  t9123 = -1.*t1336*t9111;
  t9130 = t8463 + t9123;
  t8568 = t1336*t8409;
  t8760 = t2618*t8758;
  t8763 = t43*t3305*t8758;
  t8775 = -1.*t2479*t3789*t8758;
  t8777 = t1336*t397*t812;
  t8780 = -1.*t397*t671*t1021;
  t8787 = t8777 + t8780;
  t8800 = 0.17458*t8787;
  t8815 = -1.*t2956*t2479*t8758;
  t8819 = -1.*t43*t3250*t8758;
  t8821 = t8815 + t8819;
  t8822 = 0.183*t8821;
  t8837 = t43*t2956*t8758;
  t8841 = -1.*t2479*t3250*t8758;
  t8858 = t8837 + t8841;
  t8863 = -0.3*t8858;
  t9288 = -1.*t947*t397*t2479;
  t9310 = -1.*t43*t5060;
  t9320 = t9288 + t9310;
  t5636 = t2956*t5547;
  t9155 = -1.*t671*t9111;
  t9163 = t8568 + t9155;
  t9385 = -1.*t43*t9163;
  t9387 = t3315 + t9385;
  t9407 = t43*t397*t528;
  t9409 = -1.*t2479*t9163;
  t9414 = t9407 + t9409;
  t9492 = t2479*t861;
  t9497 = -1.*t43*t8787;
  t9499 = t9492 + t9497;
  t9510 = -1.*t43*t861;
  t9518 = -1.*t2479*t8787;
  t9519 = t9510 + t9518;
  t5625 = -1.*t3250*t5392;
  t5652 = t5625 + t5636;
  t9345 = -1.*t3250*t5547;
  t9592 = 0.183*t2956;
  t9595 = -0.3*t3250;
  t9596 = t9592 + t9595;
  t9627 = 0.3*t2956;
  t9628 = t9627 + t3264;
  t9653 = t397*t2479*t528;
  t9668 = t43*t9163;
  t9671 = t9653 + t9668;
  t9443 = t2956*t9414;
  t9464 = -1.*t3250*t9414;
  t9721 = -1.*t2479*t861;
  t9724 = t43*t8787;
  t9730 = t9721 + t9724;
  t9543 = t2956*t9519;
  t9574 = -1.*t3250*t9519;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1601*t2139 + t2618*t2819 + t3305*t3498 + t3789*t3841 + 0.183*(-1.*t3250*t3498 + t2956*t3841) - 0.3*(t2956*t3498 + t3250*t3841) - 1.*t355*t397*t528 + 0.17458*(t2277 + t1122*t671) + t1122*t797;
  p_output1[10]=t1601*t4890 + t2618*t5060 + t3305*t5392 + t3789*t5547 - 0.3*(t2956*t5392 + t3250*t5547) + 0.183*t5652 + 0.17458*(t1336*t4890 + t4331*t671) + t4331*t797 + t355*t397*t947;
  p_output1[11]=0;
  p_output1[12]=t2618*t6010 + t3305*t6149 + t3789*t6226 + 0.183*(-1.*t3250*t6149 + t2956*t6226) - 0.3*(t2956*t6149 + t3250*t6226) + t1021*t1601*t397*t947 + t397*t797*t812*t947 - 1.*t355*t861*t947 + 0.17458*(t1021*t1336*t397*t947 + t397*t671*t812*t947);
  p_output1[13]=t1021*t1601*t397*t528 + t2618*t6950 + t3305*t7002 + t3789*t7079 + 0.183*(-1.*t3250*t7002 + t2956*t7079) - 0.3*(t2956*t7002 + t3250*t7079) + t397*t528*t797*t812 + 0.17458*(t1021*t1336*t397*t528 + t397*t528*t671*t812) - 1.*t355*t528*t861;
  p_output1[14]=-1.*t355*t397 + t2618*t7634 + t3305*t7744 + t3789*t7853 + 0.183*(-1.*t3250*t7744 + t2956*t7853) - 0.3*(t2956*t7744 + t3250*t7853) - 1.*t1021*t1601*t861 - 1.*t797*t812*t861 + 0.17458*(-1.*t1021*t1336*t861 - 1.*t671*t812*t861);
  p_output1[15]=t1601*t4331 + t797*t8111 + 0.17458*(t5039 + t671*t8111) + t2618*t8140 - 1.*t2479*t3789*t8140 + t3305*t43*t8140 - 0.3*(-1.*t2479*t3250*t8140 + t2956*t43*t8140) + 0.183*(-1.*t2479*t2956*t8140 - 1.*t3250*t43*t8140);
  p_output1[16]=t2139*t797 + t1601*t8409 + t2618*t8493 - 1.*t2479*t3789*t8493 + t3305*t43*t8493 - 0.3*(-1.*t2479*t3250*t8493 + t2956*t43*t8493) + 0.183*(-1.*t2479*t2956*t8493 - 1.*t3250*t43*t8493) + 0.17458*(t2139*t671 + t8568);
  p_output1[17]=-1.*t1021*t397*t797 + t1601*t397*t812 + t8760 + t8763 + t8775 + t8800 + t8822 + t8863;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t1336*t4331 + 0.17458*t5060 + 0.047*t4890*t671 + t2618*t8897 - 1.*t2479*t3789*t8897 + t3305*t43*t8897 - 0.3*(-1.*t2479*t3250*t8897 + t2956*t43*t8897) + 0.183*(-1.*t2479*t2956*t8897 - 1.*t3250*t43*t8897);
  p_output1[28]=-0.047*t1336*t8409 + 0.047*t671*t9111 + t2618*t9130 - 1.*t2479*t3789*t9130 + t3305*t43*t9130 - 0.3*(-1.*t2479*t3250*t9130 + t2956*t43*t9130) + 0.183*(-1.*t2479*t2956*t9130 - 1.*t3250*t43*t9130) + 0.17458*t9163;
  p_output1[29]=0.047*t1021*t397*t671 - 0.047*t1336*t397*t812 + t8760 + t8763 + t8775 + t8800 + t8822 + t8863;
  p_output1[30]=0.183*t43*t5060 + t3305*t5547 + t3789*t9320 - 0.3*(t5636 + t3250*t9320) + 0.183*(t2956*t9320 + t9345) + 0.183*t2479*t397*t947;
  p_output1[31]=0.183*t2479*t397*t528 + 0.183*t43*t9163 + t3789*t9387 + t3305*t9414 - 0.3*(t3250*t9387 + t9443) + 0.183*(t2956*t9387 + t9464);
  p_output1[32]=-0.183*t2479*t861 + 0.183*t43*t8787 + t3789*t9499 + t3305*t9519 - 0.3*(t3250*t9499 + t9543) + 0.183*(t2956*t9499 + t9574);
  p_output1[33]=-0.3*t5652 + 0.183*(-1.*t2956*t5392 + t9345) + t5392*t9596 + t5547*t9628;
  p_output1[34]=t9414*t9628 + t9596*t9671 + 0.183*(t9464 - 1.*t2956*t9671) - 0.3*(t9443 - 1.*t3250*t9671);
  p_output1[35]=t9519*t9628 + t9596*t9730 + 0.183*(t9574 - 1.*t2956*t9730) - 0.3*(t9543 - 1.*t3250*t9730);
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
