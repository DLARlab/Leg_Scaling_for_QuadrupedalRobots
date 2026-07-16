/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint_src.h"

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
  double t3372;
  double t3754;
  double t3790;
  double t3783;
  double t3791;
  double t3557;
  double t3574;
  double t3788;
  double t3793;
  double t3807;
  double t3810;
  double t3815;
  double t3824;
  double t3845;
  double t3846;
  double t3899;
  double t3913;
  double t3416;
  double t3915;
  double t3304;
  double t3958;
  double t3959;
  double t3964;
  double t3970;
  double t3976;
  double t4039;
  double t4087;
  double t4092;
  double t4102;
  double t3946;
  double t4144;
  double t4150;
  double t4151;
  double t3940;
  double t3941;
  double t3943;
  double t3571;
  double t3916;
  double t3929;
  double t4131;
  double t4133;
  double t4134;
  double t3956;
  double t4104;
  double t4127;
  double t4160;
  double t4181;
  double t4187;
  double t4141;
  double t4152;
  double t4154;
  t3372 = Cos(var1[3]);
  t3754 = Cos(var1[5]);
  t3790 = Sin(var1[3]);
  t3783 = Sin(var1[4]);
  t3791 = Sin(var1[5]);
  t3557 = Cos(var1[7]);
  t3574 = Cos(var1[6]);
  t3788 = t3372*t3754*t3783;
  t3793 = t3790*t3791;
  t3807 = t3788 + t3793;
  t3810 = t3574*t3807;
  t3815 = -1.*t3754*t3790;
  t3824 = t3372*t3783*t3791;
  t3845 = t3815 + t3824;
  t3846 = Sin(var1[6]);
  t3899 = -1.*t3845*t3846;
  t3913 = t3810 + t3899;
  t3416 = Cos(var1[4]);
  t3915 = Sin(var1[7]);
  t3304 = Cos(var1[8]);
  t3958 = t3754*t3790*t3783;
  t3959 = -1.*t3372*t3791;
  t3964 = t3958 + t3959;
  t3970 = t3574*t3964;
  t3976 = t3372*t3754;
  t4039 = t3790*t3783*t3791;
  t4087 = t3976 + t4039;
  t4092 = -1.*t4087*t3846;
  t4102 = t3970 + t4092;
  t3946 = Sin(var1[8]);
  t4144 = t3416*t3754*t3574;
  t4150 = -1.*t3416*t3791*t3846;
  t4151 = t4144 + t4150;
  t3940 = t3557*t3913;
  t3941 = t3372*t3416*t3915;
  t3943 = t3940 + t3941;
  t3571 = t3372*t3416*t3557;
  t3916 = -1.*t3913*t3915;
  t3929 = t3571 + t3916;
  t4131 = t3557*t4102;
  t4133 = t3416*t3790*t3915;
  t4134 = t4131 + t4133;
  t3956 = t3416*t3557*t3790;
  t4104 = -1.*t4102*t3915;
  t4127 = t3956 + t4104;
  t4160 = t3557*t4151;
  t4181 = -1.*t3783*t3915;
  t4187 = t4160 + t4181;
  t4141 = -1.*t3557*t3783;
  t4152 = -1.*t4151*t3915;
  t4154 = t4141 + t4152;
  p_output1[0]=t3304*t3929 - 1.*t3943*t3946;
  p_output1[1]=t3304*t4127 - 1.*t3946*t4134;
  p_output1[2]=t3304*t4154 - 1.*t3946*t4187;
  p_output1[3]=t3574*t3845 + t3807*t3846;
  p_output1[4]=t3846*t3964 + t3574*t4087;
  p_output1[5]=t3416*t3574*t3791 + t3416*t3754*t3846;
  p_output1[6]=t3304*t3943 + t3929*t3946;
  p_output1[7]=t3946*t4127 + t3304*t4134;
  p_output1[8]=t3946*t4154 + t3304*t4187;
}



void R_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
