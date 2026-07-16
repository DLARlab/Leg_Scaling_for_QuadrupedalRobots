/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint_src.h"

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
  double t722;
  double t1117;
  double t944;
  double t1017;
  double t1152;
  double t823;
  double t1091;
  double t1163;
  double t1241;
  double t1315;
  double t1755;
  double t1780;
  double t1807;
  double t660;
  double t2437;
  double t22;
  double t2765;
  double t2959;
  double t3203;
  double t3221;
  double t3239;
  double t3248;
  double t3291;
  double t3439;
  double t3651;
  double t3830;
  double t3960;
  double t3976;
  double t3997;
  double t64;
  double t378;
  double t513;
  double t560;
  double t829;
  double t867;
  double t1320;
  double t1350;
  double t1351;
  double t1708;
  double t5102;
  double t5245;
  double t5296;
  double t5348;
  double t5357;
  double t5360;
  double t2551;
  double t2566;
  double t3261;
  double t3312;
  double t3346;
  double t5588;
  double t5593;
  double t5905;
  double t3893;
  double t3915;
  double t3935;
  double t6007;
  double t6032;
  double t6036;
  double t6048;
  double t6057;
  double t6061;
  double t6857;
  double t6861;
  double t6924;
  double t7035;
  double t7069;
  double t7085;
  double t7105;
  double t7217;
  double t7225;
  double t7740;
  double t7775;
  double t7788;
  double t7807;
  double t7829;
  double t7831;
  double t7879;
  double t7901;
  double t7922;
  double t8210;
  double t8213;
  double t8230;
  double t8242;
  double t8254;
  double t8261;
  double t8303;
  double t8307;
  double t8320;
  double t8404;
  double t8414;
  double t8423;
  double t8439;
  double t8444;
  double t8449;
  double t8560;
  double t8567;
  double t8570;
  double t2211;
  double t8587;
  double t8589;
  double t8667;
  double t8669;
  double t8670;
  double t8757;
  double t8767;
  double t8869;
  double t8871;
  double t8873;
  double t8876;
  double t8881;
  double t8599;
  double t8674;
  double t8679;
  double t8680;
  double t8683;
  double t8688;
  double t8700;
  double t8710;
  double t8722;
  double t8728;
  double t8729;
  double t8737;
  double t8739;
  double t8744;
  double t8745;
  double t8746;
  double t9048;
  double t9049;
  double t9050;
  double t6245;
  double t8885;
  double t8926;
  double t9118;
  double t9119;
  double t9128;
  double t9133;
  double t9134;
  double t9190;
  double t9195;
  double t9197;
  double t9202;
  double t9205;
  double t9207;
  double t6244;
  double t6263;
  double t9088;
  double t9246;
  double t9249;
  double t9251;
  double t9256;
  double t9260;
  double t9281;
  double t9282;
  double t9283;
  double t9140;
  double t9154;
  double t9312;
  double t9314;
  double t9316;
  double t9214;
  double t9237;
  t722 = Sin(var1[3]);
  t1117 = Cos(var1[3]);
  t944 = Cos(var1[5]);
  t1017 = Sin(var1[4]);
  t1152 = Sin(var1[5]);
  t823 = Sin(var1[12]);
  t1091 = -1.*t944*t722*t1017;
  t1163 = t1117*t1152;
  t1241 = t1091 + t1163;
  t1315 = Cos(var1[12]);
  t1755 = -1.*t1117*t944;
  t1780 = -1.*t722*t1017*t1152;
  t1807 = t1755 + t1780;
  t660 = Cos(var1[4]);
  t2437 = Sin(var1[13]);
  t22 = Cos(var1[13]);
  t2765 = t1315*t1241;
  t2959 = -1.*t823*t1807;
  t3203 = t2765 + t2959;
  t3221 = Cos(var1[14]);
  t3239 = -1.*t3221;
  t3248 = 1. + t3239;
  t3291 = Sin(var1[14]);
  t3439 = -1.*t660*t2437*t722;
  t3651 = t22*t3203;
  t3830 = t3439 + t3651;
  t3960 = -1.*t22*t660*t722;
  t3976 = -1.*t2437*t3203;
  t3997 = t3960 + t3976;
  t64 = -1.*t22;
  t378 = 1. + t64;
  t513 = -0.183*t378;
  t560 = 0. + t513;
  t829 = 0.047*t823;
  t867 = 0. + t829;
  t1320 = -1.*t1315;
  t1350 = 1. + t1320;
  t1351 = -0.047*t1350;
  t1708 = 0. + t1351;
  t5102 = t1117*t944*t1017;
  t5245 = t722*t1152;
  t5296 = t5102 + t5245;
  t5348 = -1.*t944*t722;
  t5357 = t1117*t1017*t1152;
  t5360 = t5348 + t5357;
  t2551 = -0.183*t2437;
  t2566 = 0. + t2551;
  t3261 = -0.25*t3248;
  t3312 = -0.183*t3291;
  t3346 = 0. + t3261 + t3312;
  t5588 = t1315*t5296;
  t5593 = -1.*t823*t5360;
  t5905 = t5588 + t5593;
  t3893 = -0.183*t3248;
  t3915 = 0.25*t3291;
  t3935 = 0. + t3893 + t3915;
  t6007 = t1117*t660*t2437;
  t6032 = t22*t5905;
  t6036 = t6007 + t6032;
  t6048 = t22*t1117*t660;
  t6057 = -1.*t2437*t5905;
  t6061 = t6048 + t6057;
  t6857 = t1315*t1117*t660*t944;
  t6861 = -1.*t1117*t660*t823*t1152;
  t6924 = t6857 + t6861;
  t7035 = -1.*t1117*t2437*t1017;
  t7069 = t22*t6924;
  t7085 = t7035 + t7069;
  t7105 = -1.*t22*t1117*t1017;
  t7217 = -1.*t2437*t6924;
  t7225 = t7105 + t7217;
  t7740 = t1315*t660*t944*t722;
  t7775 = -1.*t660*t823*t722*t1152;
  t7788 = t7740 + t7775;
  t7807 = -1.*t2437*t722*t1017;
  t7829 = t22*t7788;
  t7831 = t7807 + t7829;
  t7879 = -1.*t22*t722*t1017;
  t7901 = -1.*t2437*t7788;
  t7922 = t7879 + t7901;
  t8210 = -1.*t1315*t944*t1017;
  t8213 = t823*t1017*t1152;
  t8230 = t8210 + t8213;
  t8242 = -1.*t660*t2437;
  t8254 = t22*t8230;
  t8261 = t8242 + t8254;
  t8303 = -1.*t22*t660;
  t8307 = -1.*t2437*t8230;
  t8320 = t8303 + t8307;
  t8404 = t944*t722;
  t8414 = -1.*t1117*t1017*t1152;
  t8423 = t8404 + t8414;
  t8439 = -1.*t823*t5296;
  t8444 = t1315*t8423;
  t8449 = t8439 + t8444;
  t8560 = t944*t722*t1017;
  t8567 = -1.*t1117*t1152;
  t8570 = t8560 + t8567;
  t2211 = t1315*t1807;
  t8587 = -1.*t823*t8570;
  t8589 = t8587 + t2211;
  t8667 = -1.*t660*t944*t823;
  t8669 = -1.*t1315*t660*t1152;
  t8670 = t8667 + t8669;
  t8757 = -1.*t1315*t5360;
  t8767 = t8439 + t8757;
  t8869 = t1117*t944;
  t8871 = t722*t1017*t1152;
  t8873 = t8869 + t8871;
  t8876 = -1.*t1315*t8873;
  t8881 = t8587 + t8876;
  t8599 = t1315*t8570;
  t8674 = t2566*t8670;
  t8679 = t22*t3346*t8670;
  t8680 = -1.*t2437*t3935*t8670;
  t8683 = t1315*t660*t944;
  t8688 = -1.*t660*t823*t1152;
  t8700 = t8683 + t8688;
  t8710 = -0.15331*t8700;
  t8722 = -1.*t3221*t2437*t8670;
  t8728 = -1.*t22*t3291*t8670;
  t8729 = t8722 + t8728;
  t8737 = -0.183*t8729;
  t8739 = t22*t3221*t8670;
  t8744 = -1.*t2437*t3291*t8670;
  t8745 = t8739 + t8744;
  t8746 = -0.25*t8745;
  t9048 = -1.*t1117*t660*t2437;
  t9049 = -1.*t22*t5905;
  t9050 = t9048 + t9049;
  t6245 = t3221*t6061;
  t8885 = -1.*t823*t8873;
  t8926 = t8599 + t8885;
  t9118 = -1.*t22*t8926;
  t9119 = t3439 + t9118;
  t9128 = t22*t660*t722;
  t9133 = -1.*t2437*t8926;
  t9134 = t9128 + t9133;
  t9190 = t2437*t1017;
  t9195 = -1.*t22*t8700;
  t9197 = t9190 + t9195;
  t9202 = -1.*t22*t1017;
  t9205 = -1.*t2437*t8700;
  t9207 = t9202 + t9205;
  t6244 = -1.*t3291*t6036;
  t6263 = t6244 + t6245;
  t9088 = -1.*t3291*t6061;
  t9246 = -0.183*t3221;
  t9249 = -0.25*t3291;
  t9251 = t9246 + t9249;
  t9256 = 0.25*t3221;
  t9260 = t9256 + t3312;
  t9281 = t660*t2437*t722;
  t9282 = t22*t8926;
  t9283 = t9281 + t9282;
  t9140 = t3221*t9134;
  t9154 = -1.*t3291*t9134;
  t9312 = -1.*t2437*t1017;
  t9314 = t22*t8700;
  t9316 = t9312 + t9314;
  t9214 = t3221*t9207;
  t9237 = -1.*t3291*t9207;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1708*t1807 + t2566*t3203 + t3346*t3830 + t3935*t3997 - 0.183*(-1.*t3291*t3830 + t3221*t3997) - 0.25*(t3221*t3830 + t3291*t3997) - 1.*t560*t660*t722 - 0.15331*(t2211 + t1241*t823) + t1241*t867;
  p_output1[10]=t1708*t5360 + t2566*t5905 + t3346*t6036 + t3935*t6061 - 0.25*(t3221*t6036 + t3291*t6061) - 0.183*t6263 + t1117*t560*t660 - 0.15331*(t1315*t5360 + t5296*t823) + t5296*t867;
  p_output1[11]=0;
  p_output1[12]=-1.*t1017*t1117*t560 + t1117*t1152*t1708*t660 + t2566*t6924 + t3346*t7085 + t3935*t7225 - 0.183*(-1.*t3291*t7085 + t3221*t7225) - 0.25*(t3221*t7085 + t3291*t7225) + t1117*t660*t867*t944 - 0.15331*(t1117*t1152*t1315*t660 + t1117*t660*t823*t944);
  p_output1[13]=-1.*t1017*t560*t722 + t1152*t1708*t660*t722 + t2566*t7788 + t3346*t7831 + t3935*t7922 - 0.183*(-1.*t3291*t7831 + t3221*t7922) - 0.25*(t3221*t7831 + t3291*t7922) + t660*t722*t867*t944 - 0.15331*(t1152*t1315*t660*t722 + t660*t722*t823*t944);
  p_output1[14]=-1.*t1017*t1152*t1708 - 1.*t560*t660 + t2566*t8230 + t3346*t8261 + t3935*t8320 - 0.183*(-1.*t3291*t8261 + t3221*t8320) - 0.25*(t3221*t8261 + t3291*t8320) - 1.*t1017*t867*t944 - 0.15331*(-1.*t1017*t1152*t1315 - 1.*t1017*t823*t944);
  p_output1[15]=t1708*t5296 - 0.15331*(t5588 + t823*t8423) + t2566*t8449 + t22*t3346*t8449 - 1.*t2437*t3935*t8449 - 0.183*(-1.*t2437*t3221*t8449 - 1.*t22*t3291*t8449) - 0.25*(t22*t3221*t8449 - 1.*t2437*t3291*t8449) + t8423*t867;
  p_output1[16]=t1708*t8570 + t2566*t8589 + t22*t3346*t8589 - 1.*t2437*t3935*t8589 - 0.183*(-1.*t2437*t3221*t8589 - 1.*t22*t3291*t8589) - 0.25*(t22*t3221*t8589 - 1.*t2437*t3291*t8589) - 0.15331*(t1807*t823 + t8599) + t1807*t867;
  p_output1[17]=-1.*t1152*t660*t867 + t8674 + t8679 + t8680 + t8710 + t8737 + t8746 + t1708*t660*t944;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.047*t1315*t5296 - 0.15331*t5905 - 0.047*t5360*t823 + t2566*t8767 + t22*t3346*t8767 - 1.*t2437*t3935*t8767 - 0.183*(-1.*t2437*t3221*t8767 - 1.*t22*t3291*t8767) - 0.25*(t22*t3221*t8767 - 1.*t2437*t3291*t8767);
  p_output1[37]=0.047*t1315*t8570 - 0.047*t823*t8873 + t2566*t8881 + t22*t3346*t8881 - 1.*t2437*t3935*t8881 - 0.183*(-1.*t2437*t3221*t8881 - 1.*t22*t3291*t8881) - 0.25*(t22*t3221*t8881 - 1.*t2437*t3291*t8881) - 0.15331*t8926;
  p_output1[38]=-0.047*t1152*t660*t823 + t8674 + t8679 + t8680 + t8710 + t8737 + t8746 + 0.047*t1315*t660*t944;
  p_output1[39]=-0.183*t22*t5905 + t3346*t6061 - 0.183*t1117*t2437*t660 + t3935*t9050 - 0.25*(t6245 + t3291*t9050) - 0.183*(t3221*t9050 + t9088);
  p_output1[40]=-0.183*t2437*t660*t722 - 0.183*t22*t8926 + t3935*t9119 + t3346*t9134 - 0.25*(t3291*t9119 + t9140) - 0.183*(t3221*t9119 + t9154);
  p_output1[41]=0.183*t1017*t2437 - 0.183*t22*t8700 + t3935*t9197 + t3346*t9207 - 0.25*(t3291*t9197 + t9214) - 0.183*(t3221*t9197 + t9237);
  p_output1[42]=-0.25*t6263 - 0.183*(-1.*t3221*t6036 + t9088) + t6036*t9251 + t6061*t9260;
  p_output1[43]=t9134*t9260 + t9251*t9283 - 0.183*(t9154 - 1.*t3221*t9283) - 0.25*(t9140 - 1.*t3291*t9283);
  p_output1[44]=t9207*t9260 + t9251*t9316 - 0.183*(t9237 - 1.*t3221*t9316) - 0.25*(t9214 - 1.*t3291*t9316);
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



void Jp_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
