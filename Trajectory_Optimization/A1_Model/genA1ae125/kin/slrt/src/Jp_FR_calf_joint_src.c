/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint_src.h"

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
  double t2867;
  double t2922;
  double t2924;
  double t2921;
  double t2933;
  double t2901;
  double t2923;
  double t2940;
  double t2946;
  double t2976;
  double t3000;
  double t3003;
  double t3012;
  double t2748;
  double t3045;
  double t3046;
  double t3054;
  double t2715;
  double t3063;
  double t3098;
  double t3110;
  double t3115;
  double t3128;
  double t3149;
  double t3150;
  double t3153;
  double t3075;
  double t3078;
  double t3082;
  double t2780;
  double t2823;
  double t2848;
  double t2851;
  double t2906;
  double t2907;
  double t2912;
  double t2913;
  double t3030;
  double t3031;
  double t3198;
  double t3199;
  double t3204;
  double t3221;
  double t3223;
  double t3225;
  double t3065;
  double t3067;
  double t3233;
  double t3236;
  double t3239;
  double t3127;
  double t3134;
  double t3137;
  double t3155;
  double t3158;
  double t3160;
  double t3259;
  double t3263;
  double t3266;
  double t3246;
  double t3248;
  double t3255;
  double t3345;
  double t3362;
  double t3369;
  double t3401;
  double t3404;
  double t3405;
  double t3382;
  double t3390;
  double t3393;
  double t3471;
  double t3472;
  double t3475;
  double t3497;
  double t3506;
  double t3510;
  double t3486;
  double t3487;
  double t3488;
  double t3594;
  double t3598;
  double t3660;
  double t3696;
  double t3704;
  double t3705;
  double t3680;
  double t3686;
  double t3688;
  double t3767;
  double t3770;
  double t3773;
  double t3793;
  double t3795;
  double t3797;
  double t3899;
  double t3904;
  double t3905;
  double t3036;
  double t3926;
  double t3927;
  double t3993;
  double t3998;
  double t4009;
  double t4109;
  double t4115;
  double t3911;
  double t4152;
  double t4154;
  double t4155;
  double t4168;
  double t4169;
  double t3976;
  double t3978;
  double t3980;
  double t3987;
  double t4015;
  double t4019;
  double t4021;
  double t4029;
  double t4033;
  double t4039;
  double t4072;
  double t4075;
  double t4078;
  double t4080;
  double t4084;
  double t3288;
  double t4228;
  double t4229;
  double t4232;
  double t4157;
  double t4158;
  double t4269;
  double t4270;
  double t4271;
  double t4275;
  double t4281;
  double t4312;
  double t4313;
  double t4315;
  double t4317;
  double t4318;
  double t4319;
  double t3295;
  double t3303;
  double t4241;
  double t4365;
  double t4373;
  double t4374;
  double t4385;
  double t4386;
  double t4284;
  double t4410;
  double t4411;
  double t4413;
  double t4290;
  double t4343;
  double t4472;
  double t4478;
  double t4482;
  double t4353;
  t2867 = Sin(var1[3]);
  t2922 = Cos(var1[5]);
  t2924 = Sin(var1[4]);
  t2921 = Cos(var1[3]);
  t2933 = Sin(var1[5]);
  t2901 = Cos(var1[6]);
  t2923 = -1.*t2921*t2922;
  t2940 = -1.*t2867*t2924*t2933;
  t2946 = t2923 + t2940;
  t2976 = -1.*t2922*t2867*t2924;
  t3000 = t2921*t2933;
  t3003 = t2976 + t3000;
  t3012 = Sin(var1[6]);
  t2748 = Cos(var1[7]);
  t3045 = t2901*t3003;
  t3046 = -1.*t2946*t3012;
  t3054 = t3045 + t3046;
  t2715 = Cos(var1[4]);
  t3063 = Sin(var1[7]);
  t3098 = Cos(var1[8]);
  t3110 = -1.*t3098;
  t3115 = 1. + t3110;
  t3128 = Sin(var1[8]);
  t3149 = -1.*t2715*t2748*t2867;
  t3150 = -1.*t3054*t3063;
  t3153 = t3149 + t3150;
  t3075 = t2748*t3054;
  t3078 = -1.*t2715*t2867*t3063;
  t3082 = t3075 + t3078;
  t2780 = -1.*t2748;
  t2823 = 1. + t2780;
  t2848 = 0.183*t2823;
  t2851 = 0. + t2848;
  t2906 = -1.*t2901;
  t2907 = 1. + t2906;
  t2912 = -0.047*t2907;
  t2913 = 0. + t2912;
  t3030 = 0.047*t3012;
  t3031 = 0. + t3030;
  t3198 = -1.*t2922*t2867;
  t3199 = t2921*t2924*t2933;
  t3204 = t3198 + t3199;
  t3221 = t2921*t2922*t2924;
  t3223 = t2867*t2933;
  t3225 = t3221 + t3223;
  t3065 = 0.183*t3063;
  t3067 = 0. + t3065;
  t3233 = t2901*t3225;
  t3236 = -1.*t3204*t3012;
  t3239 = t3233 + t3236;
  t3127 = -0.25*t3115;
  t3134 = 0.183*t3128;
  t3137 = 0. + t3127 + t3134;
  t3155 = 0.183*t3115;
  t3158 = 0.25*t3128;
  t3160 = 0. + t3155 + t3158;
  t3259 = t2921*t2715*t2748;
  t3263 = -1.*t3239*t3063;
  t3266 = t3259 + t3263;
  t3246 = t2748*t3239;
  t3248 = t2921*t2715*t3063;
  t3255 = t3246 + t3248;
  t3345 = t2921*t2715*t2922*t2901;
  t3362 = -1.*t2921*t2715*t2933*t3012;
  t3369 = t3345 + t3362;
  t3401 = -1.*t2921*t2748*t2924;
  t3404 = -1.*t3369*t3063;
  t3405 = t3401 + t3404;
  t3382 = t2748*t3369;
  t3390 = -1.*t2921*t2924*t3063;
  t3393 = t3382 + t3390;
  t3471 = t2715*t2922*t2901*t2867;
  t3472 = -1.*t2715*t2867*t2933*t3012;
  t3475 = t3471 + t3472;
  t3497 = -1.*t2748*t2867*t2924;
  t3506 = -1.*t3475*t3063;
  t3510 = t3497 + t3506;
  t3486 = t2748*t3475;
  t3487 = -1.*t2867*t2924*t3063;
  t3488 = t3486 + t3487;
  t3594 = -1.*t2922*t2901*t2924;
  t3598 = t2924*t2933*t3012;
  t3660 = t3594 + t3598;
  t3696 = -1.*t2715*t2748;
  t3704 = -1.*t3660*t3063;
  t3705 = t3696 + t3704;
  t3680 = t2748*t3660;
  t3686 = -1.*t2715*t3063;
  t3688 = t3680 + t3686;
  t3767 = t2922*t2867;
  t3770 = -1.*t2921*t2924*t2933;
  t3773 = t3767 + t3770;
  t3793 = t2901*t3773;
  t3795 = -1.*t3225*t3012;
  t3797 = t3793 + t3795;
  t3899 = t2922*t2867*t2924;
  t3904 = -1.*t2921*t2933;
  t3905 = t3899 + t3904;
  t3036 = t2901*t2946;
  t3926 = -1.*t3905*t3012;
  t3927 = t3036 + t3926;
  t3993 = -1.*t2715*t2901*t2933;
  t3998 = -1.*t2715*t2922*t3012;
  t4009 = t3993 + t3998;
  t4109 = -1.*t2901*t3204;
  t4115 = t4109 + t3795;
  t3911 = t2901*t3905;
  t4152 = t2921*t2922;
  t4154 = t2867*t2924*t2933;
  t4155 = t4152 + t4154;
  t4168 = -1.*t2901*t4155;
  t4169 = t4168 + t3926;
  t3976 = t2715*t2922*t2901;
  t3978 = -1.*t2715*t2933*t3012;
  t3980 = t3976 + t3978;
  t3987 = -0.13205*t3980;
  t4015 = t4009*t3067;
  t4019 = t2748*t4009*t3137;
  t4021 = -1.*t4009*t3063*t3160;
  t4029 = -1.*t3098*t4009*t3063;
  t4033 = -1.*t2748*t4009*t3128;
  t4039 = t4029 + t4033;
  t4072 = 0.183*t4039;
  t4075 = t2748*t3098*t4009;
  t4078 = -1.*t4009*t3063*t3128;
  t4080 = t4075 + t4078;
  t4084 = -0.25*t4080;
  t3288 = t3098*t3266;
  t4228 = -1.*t2748*t3239;
  t4229 = -1.*t2921*t2715*t3063;
  t4232 = t4228 + t4229;
  t4157 = -1.*t4155*t3012;
  t4158 = t3911 + t4157;
  t4269 = t2715*t2748*t2867;
  t4270 = -1.*t4158*t3063;
  t4271 = t4269 + t4270;
  t4275 = -1.*t2748*t4158;
  t4281 = t4275 + t3078;
  t4312 = -1.*t2748*t2924;
  t4313 = -1.*t3980*t3063;
  t4315 = t4312 + t4313;
  t4317 = -1.*t2748*t3980;
  t4318 = t2924*t3063;
  t4319 = t4317 + t4318;
  t3295 = -1.*t3255*t3128;
  t3303 = t3288 + t3295;
  t4241 = -1.*t3266*t3128;
  t4365 = 0.183*t3098;
  t4373 = -0.25*t3128;
  t4374 = t4365 + t4373;
  t4385 = 0.25*t3098;
  t4386 = t4385 + t3134;
  t4284 = t3098*t4271;
  t4410 = t2748*t4158;
  t4411 = t2715*t2867*t3063;
  t4413 = t4410 + t4411;
  t4290 = -1.*t4271*t3128;
  t4343 = t3098*t4315;
  t4472 = t2748*t3980;
  t4478 = -1.*t2924*t3063;
  t4482 = t4472 + t4478;
  t4353 = -1.*t4315*t3128;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2715*t2851*t2867 + t2913*t2946 + t3003*t3031 - 0.13205*(t3003*t3012 + t3036) + t3054*t3067 + t3082*t3137 + 0.183*(-1.*t3082*t3128 + t3098*t3153) - 0.25*(t3082*t3098 + t3128*t3153) + t3153*t3160;
  p_output1[10]=t2715*t2851*t2921 + t2913*t3204 + t3031*t3225 - 0.13205*(t2901*t3204 + t3012*t3225) + t3067*t3239 + t3137*t3255 + t3160*t3266 - 0.25*(t3098*t3255 + t3128*t3266) + 0.183*t3303;
  p_output1[11]=0;
  p_output1[12]=-1.*t2851*t2921*t2924 + t2715*t2913*t2921*t2933 - 0.13205*(t2715*t2901*t2921*t2933 + t2715*t2921*t2922*t3012) + t2715*t2921*t2922*t3031 + t3067*t3369 + t3137*t3393 + t3160*t3405 + 0.183*(-1.*t3128*t3393 + t3098*t3405) - 0.25*(t3098*t3393 + t3128*t3405);
  p_output1[13]=-1.*t2851*t2867*t2924 + t2715*t2867*t2913*t2933 - 0.13205*(t2715*t2867*t2901*t2933 + t2715*t2867*t2922*t3012) + t2715*t2867*t2922*t3031 + t3067*t3475 + t3137*t3488 + t3160*t3510 + 0.183*(-1.*t3128*t3488 + t3098*t3510) - 0.25*(t3098*t3488 + t3128*t3510);
  p_output1[14]=-1.*t2715*t2851 - 1.*t2913*t2924*t2933 - 0.13205*(-1.*t2901*t2924*t2933 - 1.*t2922*t2924*t3012) - 1.*t2922*t2924*t3031 + t3067*t3660 + t3137*t3688 + t3160*t3705 + 0.183*(-1.*t3128*t3688 + t3098*t3705) - 0.25*(t3098*t3688 + t3128*t3705);
  p_output1[15]=t2913*t3225 + t3031*t3773 - 0.13205*(t3233 + t3012*t3773) + t3067*t3797 + t2748*t3137*t3797 - 1.*t3063*t3160*t3797 + 0.183*(-1.*t3063*t3098*t3797 - 1.*t2748*t3128*t3797) - 0.25*(t2748*t3098*t3797 - 1.*t3063*t3128*t3797);
  p_output1[16]=t2946*t3031 + t2913*t3905 - 0.13205*(t2946*t3012 + t3911) + t3067*t3927 + t2748*t3137*t3927 - 1.*t3063*t3160*t3927 + 0.183*(-1.*t3063*t3098*t3927 - 1.*t2748*t3128*t3927) - 0.25*(t2748*t3098*t3927 - 1.*t3063*t3128*t3927);
  p_output1[17]=t2715*t2913*t2922 - 1.*t2715*t2933*t3031 + t3987 + t4015 + t4019 + t4021 + t4072 + t4084;
  p_output1[18]=-0.047*t3012*t3204 + 0.047*t2901*t3225 - 0.13205*t3239 + t3067*t4115 + t2748*t3137*t4115 - 1.*t3063*t3160*t4115 + 0.183*(-1.*t3063*t3098*t4115 - 1.*t2748*t3128*t4115) - 0.25*(t2748*t3098*t4115 - 1.*t3063*t3128*t4115);
  p_output1[19]=0.047*t2901*t3905 - 0.047*t3012*t4155 - 0.13205*t4158 + t3067*t4169 + t2748*t3137*t4169 - 1.*t3063*t3160*t4169 + 0.183*(-1.*t3063*t3098*t4169 - 1.*t2748*t3128*t4169) - 0.25*(t2748*t3098*t4169 - 1.*t3063*t3128*t4169);
  p_output1[20]=0.047*t2715*t2901*t2922 - 0.047*t2715*t2933*t3012 + t3987 + t4015 + t4019 + t4021 + t4072 + t4084;
  p_output1[21]=0.183*t2715*t2921*t3063 + 0.183*t2748*t3239 + t3137*t3266 + t3160*t4232 - 0.25*(t3288 + t3128*t4232) + 0.183*(t3098*t4232 + t4241);
  p_output1[22]=0.183*t2715*t2867*t3063 + 0.183*t2748*t4158 + t3137*t4271 + t3160*t4281 - 0.25*(t3128*t4281 + t4284) + 0.183*(t3098*t4281 + t4290);
  p_output1[23]=-0.183*t2924*t3063 + 0.183*t2748*t3980 + t3137*t4315 + t3160*t4319 - 0.25*(t3128*t4319 + t4343) + 0.183*(t3098*t4319 + t4353);
  p_output1[24]=-0.25*t3303 + 0.183*(-1.*t3098*t3255 + t4241) + t3255*t4374 + t3266*t4386;
  p_output1[25]=t4271*t4386 + t4374*t4413 + 0.183*(t4290 - 1.*t3098*t4413) - 0.25*(t4284 - 1.*t3128*t4413);
  p_output1[26]=t4315*t4386 + t4374*t4482 + 0.183*(t4353 - 1.*t3098*t4482) - 0.25*(t4343 - 1.*t3128*t4482);
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



void Jp_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
