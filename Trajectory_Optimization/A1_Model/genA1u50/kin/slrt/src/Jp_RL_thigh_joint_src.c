/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint_src.h"

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
  double t4364;
  double t4381;
  double t4374;
  double t4379;
  double t4386;
  double t4371;
  double t4380;
  double t4387;
  double t4388;
  double t4390;
  double t4396;
  double t4398;
  double t4402;
  double t4318;
  double t4356;
  double t4410;
  double t4413;
  double t4414;
  double t4415;
  double t4331;
  double t4340;
  double t4353;
  double t4355;
  double t4372;
  double t4373;
  double t4391;
  double t4392;
  double t4393;
  double t4394;
  double t4423;
  double t4426;
  double t4427;
  double t4429;
  double t4430;
  double t4431;
  double t4411;
  double t4412;
  double t4437;
  double t4438;
  double t4439;
  double t4456;
  double t4458;
  double t4459;
  double t4475;
  double t4476;
  double t4477;
  double t4496;
  double t4499;
  double t4503;
  double t4512;
  double t4513;
  double t4514;
  double t4518;
  double t4519;
  double t4520;
  double t4529;
  double t4530;
  double t4531;
  double t4405;
  double t4534;
  double t4535;
  double t4545;
  double t4546;
  double t4547;
  double t4557;
  double t4558;
  double t4564;
  double t4565;
  double t4566;
  double t4568;
  double t4569;
  double t4538;
  double t4548;
  double t4549;
  double t4550;
  double t4551;
  double t4552;
  double t4553;
  double t4572;
  double t4573;
  t4364 = Sin(var1[3]);
  t4381 = Cos(var1[3]);
  t4374 = Cos(var1[5]);
  t4379 = Sin(var1[4]);
  t4386 = Sin(var1[5]);
  t4371 = Sin(var1[15]);
  t4380 = -1.*t4374*t4364*t4379;
  t4387 = t4381*t4386;
  t4388 = t4380 + t4387;
  t4390 = Cos(var1[15]);
  t4396 = -1.*t4381*t4374;
  t4398 = -1.*t4364*t4379*t4386;
  t4402 = t4396 + t4398;
  t4318 = Cos(var1[16]);
  t4356 = Cos(var1[4]);
  t4410 = Sin(var1[16]);
  t4413 = t4390*t4388;
  t4414 = -1.*t4371*t4402;
  t4415 = t4413 + t4414;
  t4331 = -1.*t4318;
  t4340 = 1. + t4331;
  t4353 = -0.183*t4340;
  t4355 = 0. + t4353;
  t4372 = -0.047*t4371;
  t4373 = 0. + t4372;
  t4391 = -1.*t4390;
  t4392 = 1. + t4391;
  t4393 = 0.047*t4392;
  t4394 = 0. + t4393;
  t4423 = t4381*t4374*t4379;
  t4426 = t4364*t4386;
  t4427 = t4423 + t4426;
  t4429 = -1.*t4374*t4364;
  t4430 = t4381*t4379*t4386;
  t4431 = t4429 + t4430;
  t4411 = -0.183*t4410;
  t4412 = 0. + t4411;
  t4437 = t4390*t4427;
  t4438 = -1.*t4371*t4431;
  t4439 = t4437 + t4438;
  t4456 = t4390*t4381*t4356*t4374;
  t4458 = -1.*t4381*t4356*t4371*t4386;
  t4459 = t4456 + t4458;
  t4475 = t4390*t4356*t4374*t4364;
  t4476 = -1.*t4356*t4371*t4364*t4386;
  t4477 = t4475 + t4476;
  t4496 = -1.*t4390*t4374*t4379;
  t4499 = t4371*t4379*t4386;
  t4503 = t4496 + t4499;
  t4512 = t4374*t4364;
  t4513 = -1.*t4381*t4379*t4386;
  t4514 = t4512 + t4513;
  t4518 = -1.*t4371*t4427;
  t4519 = t4390*t4514;
  t4520 = t4518 + t4519;
  t4529 = t4374*t4364*t4379;
  t4530 = -1.*t4381*t4386;
  t4531 = t4529 + t4530;
  t4405 = t4390*t4402;
  t4534 = -1.*t4371*t4531;
  t4535 = t4534 + t4405;
  t4545 = -1.*t4356*t4374*t4371;
  t4546 = -1.*t4390*t4356*t4386;
  t4547 = t4545 + t4546;
  t4557 = -1.*t4390*t4431;
  t4558 = t4518 + t4557;
  t4564 = t4381*t4374;
  t4565 = t4364*t4379*t4386;
  t4566 = t4564 + t4565;
  t4568 = -1.*t4390*t4566;
  t4569 = t4534 + t4568;
  t4538 = t4390*t4531;
  t4548 = t4412*t4547;
  t4549 = 0.183*t4410*t4547;
  t4550 = t4390*t4356*t4374;
  t4551 = -1.*t4356*t4371*t4386;
  t4552 = t4550 + t4551;
  t4553 = 0.08953*t4552;
  t4572 = -1.*t4371*t4566;
  t4573 = t4538 + t4572;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t4355*t4356*t4364 + t4373*t4388 + t4394*t4402 + 0.08953*(t4371*t4388 + t4405) + t4412*t4415 - 0.183*(-1.*t4318*t4356*t4364 - 1.*t4410*t4415);
  p_output1[10]=t4355*t4356*t4381 + t4373*t4427 + t4394*t4431 + 0.08953*(t4371*t4427 + t4390*t4431) + t4412*t4439 - 0.183*(t4318*t4356*t4381 - 1.*t4410*t4439);
  p_output1[11]=0;
  p_output1[12]=t4356*t4373*t4374*t4381 - 1.*t4355*t4379*t4381 + 0.08953*(t4356*t4371*t4374*t4381 + t4356*t4381*t4386*t4390) + t4356*t4381*t4386*t4394 + t4412*t4459 - 0.183*(-1.*t4318*t4379*t4381 - 1.*t4410*t4459);
  p_output1[13]=t4356*t4364*t4373*t4374 - 1.*t4355*t4364*t4379 + 0.08953*(t4356*t4364*t4371*t4374 + t4356*t4364*t4386*t4390) + t4356*t4364*t4386*t4394 + t4412*t4477 - 0.183*(-1.*t4318*t4364*t4379 - 1.*t4410*t4477);
  p_output1[14]=-1.*t4355*t4356 - 1.*t4373*t4374*t4379 + 0.08953*(-1.*t4371*t4374*t4379 - 1.*t4379*t4386*t4390) - 1.*t4379*t4386*t4394 + t4412*t4503 - 0.183*(-1.*t4318*t4356 - 1.*t4410*t4503);
  p_output1[15]=t4394*t4427 + t4373*t4514 + 0.08953*(t4437 + t4371*t4514) + 0.183*t4410*t4520 + t4412*t4520;
  p_output1[16]=t4373*t4402 + t4394*t4531 + 0.183*t4410*t4535 + t4412*t4535 + 0.08953*(t4371*t4402 + t4538);
  p_output1[17]=-1.*t4356*t4373*t4386 + t4356*t4374*t4394 + t4548 + t4549 + t4553;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.047*t4390*t4427 + 0.047*t4371*t4431 + 0.08953*t4439 + 0.183*t4410*t4558 + t4412*t4558;
  p_output1[46]=-0.047*t4390*t4531 + 0.047*t4371*t4566 + 0.183*t4410*t4569 + t4412*t4569 + 0.08953*t4573;
  p_output1[47]=0.047*t4356*t4371*t4386 - 0.047*t4356*t4374*t4390 + t4548 + t4549 + t4553;
  p_output1[48]=-0.183*t4356*t4381*t4410 - 0.183*t4318*t4439 - 0.183*(-1.*t4356*t4381*t4410 - 1.*t4318*t4439);
  p_output1[49]=-0.183*t4356*t4364*t4410 - 0.183*t4318*t4573 - 0.183*(-1.*t4356*t4364*t4410 - 1.*t4318*t4573);
  p_output1[50]=0.183*t4379*t4410 - 0.183*t4318*t4552 - 0.183*(t4379*t4410 - 1.*t4318*t4552);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
