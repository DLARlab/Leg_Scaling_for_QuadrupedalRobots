/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint_src.h"

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
  double t4422;
  double t4451;
  double t4456;
  double t4452;
  double t4461;
  double t4393;
  double t4434;
  double t4436;
  double t4444;
  double t4478;
  double t4453;
  double t4463;
  double t4465;
  double t4485;
  double t4486;
  double t4487;
  double t4493;
  double t4505;
  double t4507;
  double t4509;
  double t4510;
  double t4511;
  double t4472;
  double t4488;
  double t4489;
  double t4508;
  double t4512;
  double t4514;
  double t4528;
  double t4529;
  double t4532;
  double t4538;
  double t4539;
  double t4540;
  double t4435;
  double t4490;
  double t4491;
  double t4570;
  double t4571;
  double t4574;
  double t4575;
  double t4577;
  double t4578;
  double t4582;
  double t4583;
  double t4585;
  double t4586;
  double t4541;
  double t4542;
  double t4543;
  double t4589;
  double t4590;
  double t4492;
  double t4516;
  double t4519;
  double t4547;
  double t4554;
  double t4555;
  double t4524;
  double t4533;
  double t4537;
  t4422 = Cos(var1[3]);
  t4451 = Cos(var1[5]);
  t4456 = Sin(var1[3]);
  t4452 = Sin(var1[4]);
  t4461 = Sin(var1[5]);
  t4393 = Cos(var1[16]);
  t4434 = Cos(var1[4]);
  t4436 = Sin(var1[16]);
  t4444 = Cos(var1[15]);
  t4478 = Sin(var1[15]);
  t4453 = t4422*t4451*t4452;
  t4463 = t4456*t4461;
  t4465 = t4453 + t4463;
  t4485 = -1.*t4451*t4456;
  t4486 = t4422*t4452*t4461;
  t4487 = t4485 + t4486;
  t4493 = t4451*t4456*t4452;
  t4505 = -1.*t4422*t4461;
  t4507 = t4493 + t4505;
  t4509 = t4422*t4451;
  t4510 = t4456*t4452*t4461;
  t4511 = t4509 + t4510;
  t4472 = t4444*t4465;
  t4488 = -1.*t4478*t4487;
  t4489 = t4472 + t4488;
  t4508 = t4444*t4507;
  t4512 = -1.*t4478*t4511;
  t4514 = t4508 + t4512;
  t4528 = t4444*t4434*t4451;
  t4529 = -1.*t4434*t4478*t4461;
  t4532 = t4528 + t4529;
  t4538 = t4478*t4465;
  t4539 = t4444*t4487;
  t4540 = t4538 + t4539;
  t4435 = t4393*t4422*t4434;
  t4490 = -1.*t4436*t4489;
  t4491 = t4435 + t4490;
  t4570 = -1.*t4393;
  t4571 = 1. + t4570;
  t4574 = -0.183*t4571;
  t4575 = 0. + t4574;
  t4577 = -0.047*t4478;
  t4578 = 0. + t4577;
  t4582 = -1.*t4444;
  t4583 = 1. + t4582;
  t4585 = 0.047*t4583;
  t4586 = 0. + t4585;
  t4541 = t4478*t4507;
  t4542 = t4444*t4511;
  t4543 = t4541 + t4542;
  t4589 = -0.183*t4436;
  t4590 = 0. + t4589;
  t4492 = t4393*t4434*t4456;
  t4516 = -1.*t4436*t4514;
  t4519 = t4492 + t4516;
  t4547 = t4434*t4451*t4478;
  t4554 = t4444*t4434*t4461;
  t4555 = t4547 + t4554;
  t4524 = -1.*t4393*t4452;
  t4533 = -1.*t4436*t4532;
  t4537 = t4524 + t4533;
  p_output1[0]=t4491;
  p_output1[1]=t4519;
  p_output1[2]=t4537;
  p_output1[3]=0.;
  p_output1[4]=t4540;
  p_output1[5]=t4543;
  p_output1[6]=t4555;
  p_output1[7]=0.;
  p_output1[8]=t4422*t4434*t4436 + t4393*t4489;
  p_output1[9]=t4434*t4436*t4456 + t4393*t4514;
  p_output1[10]=-1.*t4436*t4452 + t4393*t4532;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4491 + 0.08953*t4540 + t4422*t4434*t4575 + t4465*t4578 + t4487*t4586 + t4489*t4590 + var1[0];
  p_output1[13]=0. - 0.183*t4519 + 0.08953*t4543 + t4434*t4456*t4575 + t4507*t4578 + t4511*t4586 + t4514*t4590 + var1[1];
  p_output1[14]=0. - 0.183*t4537 + 0.08953*t4555 - 1.*t4452*t4575 + t4434*t4451*t4578 + t4434*t4461*t4586 + t4532*t4590 + var1[2];
  p_output1[15]=1.;
}



void H_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
