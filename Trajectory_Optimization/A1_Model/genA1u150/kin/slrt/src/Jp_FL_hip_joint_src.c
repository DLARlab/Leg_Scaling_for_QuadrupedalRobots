/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint_src.h"

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
  double t546;
  double t3758;
  double t2529;
  double t2715;
  double t3946;
  double t1588;
  double t2839;
  double t4057;
  double t4092;
  double t4729;
  double t5668;
  double t5993;
  double t6044;
  double t245;
  double t1615;
  double t1885;
  double t4878;
  double t4938;
  double t5028;
  double t5535;
  double t7118;
  double t7134;
  double t7150;
  double t7177;
  double t7182;
  double t7225;
  double t7733;
  double t7746;
  double t7799;
  double t7894;
  double t7905;
  double t7910;
  double t7847;
  double t7934;
  double t8060;
  double t8088;
  double t8113;
  double t7980;
  double t7995;
  double t8010;
  double t8015;
  t546 = Sin(var1[3]);
  t3758 = Cos(var1[3]);
  t2529 = Cos(var1[5]);
  t2715 = Sin(var1[4]);
  t3946 = Sin(var1[5]);
  t1588 = Sin(var1[9]);
  t2839 = -1.*t2529*t546*t2715;
  t4057 = t3758*t3946;
  t4092 = t2839 + t4057;
  t4729 = Cos(var1[9]);
  t5668 = -1.*t3758*t2529;
  t5993 = -1.*t546*t2715*t3946;
  t6044 = t5668 + t5993;
  t245 = Cos(var1[4]);
  t1615 = -0.047*t1588;
  t1885 = 0. + t1615;
  t4878 = -1.*t4729;
  t4938 = 1. + t4878;
  t5028 = 0.047*t4938;
  t5535 = 0. + t5028;
  t7118 = t3758*t2529*t2715;
  t7134 = t546*t3946;
  t7150 = t7118 + t7134;
  t7177 = -1.*t2529*t546;
  t7182 = t3758*t2715*t3946;
  t7225 = t7177 + t7182;
  t7733 = t2529*t546;
  t7746 = -1.*t3758*t2715*t3946;
  t7799 = t7733 + t7746;
  t7894 = t2529*t546*t2715;
  t7905 = -1.*t3758*t3946;
  t7910 = t7894 + t7905;
  t7847 = t4729*t7150;
  t7934 = t4729*t7910;
  t8060 = t3758*t2529;
  t8088 = t546*t2715*t3946;
  t8113 = t8060 + t8088;
  t7980 = t4729*t245*t2529;
  t7995 = -1.*t245*t1588*t3946;
  t8010 = t7980 + t7995;
  t8015 = 0.047*t8010;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1885*t4092 - 0.183*t245*t546 + t5535*t6044 + 0.047*(t1588*t4092 + t4729*t6044);
  p_output1[10]=0.183*t245*t3758 + t1885*t7150 + t5535*t7225 + 0.047*(t1588*t7150 + t4729*t7225);
  p_output1[11]=0;
  p_output1[12]=t1885*t245*t2529*t3758 - 0.183*t2715*t3758 + 0.047*(t1588*t245*t2529*t3758 + t245*t3758*t3946*t4729) + t245*t3758*t3946*t5535;
  p_output1[13]=t1885*t245*t2529*t546 - 0.183*t2715*t546 + 0.047*(t1588*t245*t2529*t546 + t245*t3946*t4729*t546) + t245*t3946*t546*t5535;
  p_output1[14]=-0.183*t245 - 1.*t1885*t2529*t2715 + 0.047*(-1.*t1588*t2529*t2715 - 1.*t2715*t3946*t4729) - 1.*t2715*t3946*t5535;
  p_output1[15]=t5535*t7150 + t1885*t7799 + 0.047*(t1588*t7799 + t7847);
  p_output1[16]=t1885*t6044 + t5535*t7910 + 0.047*(t1588*t6044 + t7934);
  p_output1[17]=-1.*t1885*t245*t3946 + t245*t2529*t5535 + t8015;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t4729*t7150 + 0.047*t1588*t7225 + 0.047*(-1.*t1588*t7225 + t7847);
  p_output1[28]=-0.047*t4729*t7910 + 0.047*t1588*t8113 + 0.047*(t7934 - 1.*t1588*t8113);
  p_output1[29]=0.047*t1588*t245*t3946 - 0.047*t245*t2529*t4729 + t8015;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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



void Jp_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
