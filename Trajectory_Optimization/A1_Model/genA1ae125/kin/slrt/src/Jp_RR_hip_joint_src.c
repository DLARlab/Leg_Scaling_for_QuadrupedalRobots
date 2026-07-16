/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint_src.h"

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
  double t5656;
  double t6590;
  double t6577;
  double t6586;
  double t6591;
  double t6560;
  double t6588;
  double t6592;
  double t6593;
  double t6598;
  double t6608;
  double t6610;
  double t6611;
  double t5126;
  double t6564;
  double t6566;
  double t6600;
  double t6601;
  double t6603;
  double t6606;
  double t6624;
  double t6625;
  double t6626;
  double t6629;
  double t6636;
  double t6638;
  double t6694;
  double t6695;
  double t6697;
  double t6716;
  double t6717;
  double t6718;
  double t6702;
  double t6722;
  double t6763;
  double t6765;
  double t6776;
  double t6743;
  double t6744;
  double t6747;
  double t6748;
  t5656 = Sin(var1[3]);
  t6590 = Cos(var1[3]);
  t6577 = Cos(var1[5]);
  t6586 = Sin(var1[4]);
  t6591 = Sin(var1[5]);
  t6560 = Sin(var1[12]);
  t6588 = -1.*t6577*t5656*t6586;
  t6592 = t6590*t6591;
  t6593 = t6588 + t6592;
  t6598 = Cos(var1[12]);
  t6608 = -1.*t6590*t6577;
  t6610 = -1.*t5656*t6586*t6591;
  t6611 = t6608 + t6610;
  t5126 = Cos(var1[4]);
  t6564 = 0.047*t6560;
  t6566 = 0. + t6564;
  t6600 = -1.*t6598;
  t6601 = 1. + t6600;
  t6603 = -0.047*t6601;
  t6606 = 0. + t6603;
  t6624 = t6590*t6577*t6586;
  t6625 = t5656*t6591;
  t6626 = t6624 + t6625;
  t6629 = -1.*t6577*t5656;
  t6636 = t6590*t6586*t6591;
  t6638 = t6629 + t6636;
  t6694 = t6577*t5656;
  t6695 = -1.*t6590*t6586*t6591;
  t6697 = t6694 + t6695;
  t6716 = t6577*t5656*t6586;
  t6717 = -1.*t6590*t6591;
  t6718 = t6716 + t6717;
  t6702 = t6598*t6626;
  t6722 = t6598*t6718;
  t6763 = t6590*t6577;
  t6765 = t5656*t6586*t6591;
  t6776 = t6763 + t6765;
  t6743 = t6598*t5126*t6577;
  t6744 = -1.*t5126*t6560*t6591;
  t6747 = t6743 + t6744;
  t6748 = -0.047*t6747;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t5126*t5656 + t6566*t6593 + t6606*t6611 - 0.047*(t6560*t6593 + t6598*t6611);
  p_output1[10]=-0.183*t5126*t6590 + t6566*t6626 + t6606*t6638 - 0.047*(t6560*t6626 + t6598*t6638);
  p_output1[11]=0;
  p_output1[12]=t5126*t6566*t6577*t6590 + 0.183*t6586*t6590 - 0.047*(t5126*t6560*t6577*t6590 + t5126*t6590*t6591*t6598) + t5126*t6590*t6591*t6606;
  p_output1[13]=t5126*t5656*t6566*t6577 + 0.183*t5656*t6586 - 0.047*(t5126*t5656*t6560*t6577 + t5126*t5656*t6591*t6598) + t5126*t5656*t6591*t6606;
  p_output1[14]=0.183*t5126 - 1.*t6566*t6577*t6586 - 0.047*(-1.*t6560*t6577*t6586 - 1.*t6586*t6591*t6598) - 1.*t6586*t6591*t6606;
  p_output1[15]=t6606*t6626 + t6566*t6697 - 0.047*(t6560*t6697 + t6702);
  p_output1[16]=t6566*t6611 + t6606*t6718 - 0.047*(t6560*t6611 + t6722);
  p_output1[17]=-1.*t5126*t6566*t6591 + t5126*t6577*t6606 + t6748;
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
  p_output1[36]=0.047*t6598*t6626 - 0.047*t6560*t6638 - 0.047*(-1.*t6560*t6638 + t6702);
  p_output1[37]=0.047*t6598*t6718 - 0.047*t6560*t6776 - 0.047*(t6722 - 1.*t6560*t6776);
  p_output1[38]=-0.047*t5126*t6560*t6591 + 0.047*t5126*t6577*t6598 + t6748;
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



void Jp_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
