/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot_src.h"

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
  double t986;
  double t1547;
  double t1426;
  double t1482;
  double t1593;
  double t1369;
  double t1545;
  double t1624;
  double t1713;
  double t1781;
  double t1971;
  double t1986;
  double t2175;
  double t906;
  double t2848;
  double t105;
  double t2912;
  double t3382;
  double t3395;
  double t3451;
  double t3699;
  double t3867;
  double t3889;
  double t3946;
  double t3961;
  double t3967;
  double t4077;
  double t4098;
  double t4120;
  double t209;
  double t584;
  double t763;
  double t897;
  double t1372;
  double t1413;
  double t1795;
  double t1841;
  double t1885;
  double t1918;
  double t4473;
  double t4496;
  double t4516;
  double t4570;
  double t4618;
  double t4741;
  double t2869;
  double t2877;
  double t3872;
  double t3890;
  double t3894;
  double t4791;
  double t4793;
  double t4813;
  double t4000;
  double t4049;
  double t4061;
  double t4816;
  double t4845;
  double t4854;
  double t4884;
  double t4890;
  double t4897;
  double t5074;
  double t5076;
  double t5087;
  double t5090;
  double t5092;
  double t5094;
  double t5104;
  double t5107;
  double t5108;
  double t5229;
  double t5232;
  double t5248;
  double t5251;
  double t5258;
  double t5267;
  double t5276;
  double t5278;
  double t5279;
  double t5465;
  double t5468;
  double t5471;
  double t5505;
  double t5530;
  double t5543;
  double t5562;
  double t5563;
  double t5565;
  double t5715;
  double t5766;
  double t5789;
  double t5822;
  double t5847;
  double t5849;
  double t5955;
  double t5958;
  double t5962;
  double t2547;
  double t5971;
  double t5973;
  double t6175;
  double t6187;
  double t6188;
  double t6333;
  double t6338;
  double t6445;
  double t6446;
  double t6452;
  double t6461;
  double t6463;
  double t6091;
  double t6192;
  double t6198;
  double t6204;
  double t6225;
  double t6233;
  double t6237;
  double t6266;
  double t6285;
  double t6286;
  double t6289;
  double t6297;
  double t6298;
  double t6309;
  double t6316;
  double t6318;
  double t6721;
  double t6732;
  double t6761;
  double t4920;
  double t6489;
  double t6510;
  double t6918;
  double t6930;
  double t6963;
  double t6966;
  double t6973;
  double t7078;
  double t7079;
  double t7084;
  double t7094;
  double t7134;
  double t7135;
  double t4911;
  double t4925;
  double t6861;
  double t7231;
  double t7274;
  double t7288;
  double t7296;
  double t7354;
  double t7383;
  double t7408;
  double t7452;
  double t7017;
  double t7044;
  double t7525;
  double t7528;
  double t7532;
  double t7173;
  double t7191;
  t986 = Sin(var1[3]);
  t1547 = Cos(var1[3]);
  t1426 = Cos(var1[5]);
  t1482 = Sin(var1[4]);
  t1593 = Sin(var1[5]);
  t1369 = Sin(var1[12]);
  t1545 = -1.*t1426*t986*t1482;
  t1624 = t1547*t1593;
  t1713 = t1545 + t1624;
  t1781 = Cos(var1[12]);
  t1971 = -1.*t1547*t1426;
  t1986 = -1.*t986*t1482*t1593;
  t2175 = t1971 + t1986;
  t906 = Cos(var1[4]);
  t2848 = Sin(var1[13]);
  t105 = Cos(var1[13]);
  t2912 = t1781*t1713;
  t3382 = -1.*t1369*t2175;
  t3395 = t2912 + t3382;
  t3451 = Cos(var1[14]);
  t3699 = -1.*t3451;
  t3867 = 1. + t3699;
  t3889 = Sin(var1[14]);
  t3946 = -1.*t906*t2848*t986;
  t3961 = t105*t3395;
  t3967 = t3946 + t3961;
  t4077 = -1.*t105*t906*t986;
  t4098 = -1.*t2848*t3395;
  t4120 = t4077 + t4098;
  t209 = -1.*t105;
  t584 = 1. + t209;
  t763 = -0.183*t584;
  t897 = 0. + t763;
  t1372 = 0.047*t1369;
  t1413 = 0. + t1372;
  t1795 = -1.*t1781;
  t1841 = 1. + t1795;
  t1885 = -0.047*t1841;
  t1918 = 0. + t1885;
  t4473 = t1547*t1426*t1482;
  t4496 = t986*t1593;
  t4516 = t4473 + t4496;
  t4570 = -1.*t1426*t986;
  t4618 = t1547*t1482*t1593;
  t4741 = t4570 + t4618;
  t2869 = -0.183*t2848;
  t2877 = 0. + t2869;
  t3872 = -0.1*t3867;
  t3890 = -0.183*t3889;
  t3894 = 0. + t3872 + t3890;
  t4791 = t1781*t4516;
  t4793 = -1.*t1369*t4741;
  t4813 = t4791 + t4793;
  t4000 = -0.183*t3867;
  t4049 = 0.1*t3889;
  t4061 = 0. + t4000 + t4049;
  t4816 = t1547*t906*t2848;
  t4845 = t105*t4813;
  t4854 = t4816 + t4845;
  t4884 = t105*t1547*t906;
  t4890 = -1.*t2848*t4813;
  t4897 = t4884 + t4890;
  t5074 = t1781*t1547*t906*t1426;
  t5076 = -1.*t1547*t906*t1369*t1593;
  t5087 = t5074 + t5076;
  t5090 = -1.*t1547*t2848*t1482;
  t5092 = t105*t5087;
  t5094 = t5090 + t5092;
  t5104 = -1.*t105*t1547*t1482;
  t5107 = -1.*t2848*t5087;
  t5108 = t5104 + t5107;
  t5229 = t1781*t906*t1426*t986;
  t5232 = -1.*t906*t1369*t986*t1593;
  t5248 = t5229 + t5232;
  t5251 = -1.*t2848*t986*t1482;
  t5258 = t105*t5248;
  t5267 = t5251 + t5258;
  t5276 = -1.*t105*t986*t1482;
  t5278 = -1.*t2848*t5248;
  t5279 = t5276 + t5278;
  t5465 = -1.*t1781*t1426*t1482;
  t5468 = t1369*t1482*t1593;
  t5471 = t5465 + t5468;
  t5505 = -1.*t906*t2848;
  t5530 = t105*t5471;
  t5543 = t5505 + t5530;
  t5562 = -1.*t105*t906;
  t5563 = -1.*t2848*t5471;
  t5565 = t5562 + t5563;
  t5715 = t1426*t986;
  t5766 = -1.*t1547*t1482*t1593;
  t5789 = t5715 + t5766;
  t5822 = -1.*t1369*t4516;
  t5847 = t1781*t5789;
  t5849 = t5822 + t5847;
  t5955 = t1426*t986*t1482;
  t5958 = -1.*t1547*t1593;
  t5962 = t5955 + t5958;
  t2547 = t1781*t2175;
  t5971 = -1.*t1369*t5962;
  t5973 = t5971 + t2547;
  t6175 = -1.*t906*t1426*t1369;
  t6187 = -1.*t1781*t906*t1593;
  t6188 = t6175 + t6187;
  t6333 = -1.*t1781*t4741;
  t6338 = t5822 + t6333;
  t6445 = t1547*t1426;
  t6446 = t986*t1482*t1593;
  t6452 = t6445 + t6446;
  t6461 = -1.*t1781*t6452;
  t6463 = t5971 + t6461;
  t6091 = t1781*t5962;
  t6192 = t2877*t6188;
  t6198 = t105*t3894*t6188;
  t6204 = -1.*t2848*t4061*t6188;
  t6225 = t1781*t906*t1426;
  t6233 = -1.*t906*t1369*t1593;
  t6237 = t6225 + t6233;
  t6266 = -0.13205*t6237;
  t6285 = -1.*t3451*t2848*t6188;
  t6286 = -1.*t105*t3889*t6188;
  t6289 = t6285 + t6286;
  t6297 = -0.183*t6289;
  t6298 = t105*t3451*t6188;
  t6309 = -1.*t2848*t3889*t6188;
  t6316 = t6298 + t6309;
  t6318 = -0.2*t6316;
  t6721 = -1.*t1547*t906*t2848;
  t6732 = -1.*t105*t4813;
  t6761 = t6721 + t6732;
  t4920 = t3451*t4897;
  t6489 = -1.*t1369*t6452;
  t6510 = t6091 + t6489;
  t6918 = -1.*t105*t6510;
  t6930 = t3946 + t6918;
  t6963 = t105*t906*t986;
  t6966 = -1.*t2848*t6510;
  t6973 = t6963 + t6966;
  t7078 = t2848*t1482;
  t7079 = -1.*t105*t6237;
  t7084 = t7078 + t7079;
  t7094 = -1.*t105*t1482;
  t7134 = -1.*t2848*t6237;
  t7135 = t7094 + t7134;
  t4911 = -1.*t3889*t4854;
  t4925 = t4911 + t4920;
  t6861 = -1.*t3889*t4897;
  t7231 = -0.183*t3451;
  t7274 = -0.1*t3889;
  t7288 = t7231 + t7274;
  t7296 = 0.1*t3451;
  t7354 = t7296 + t3890;
  t7383 = t906*t2848*t986;
  t7408 = t105*t6510;
  t7452 = t7383 + t7408;
  t7017 = t3451*t6973;
  t7044 = -1.*t3889*t6973;
  t7525 = -1.*t2848*t1482;
  t7528 = t105*t6237;
  t7532 = t7525 + t7528;
  t7173 = t3451*t7135;
  t7191 = -1.*t3889*t7135;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1413*t1713 + t1918*t2175 - 0.13205*(t1369*t1713 + t2547) + t2877*t3395 + t3894*t3967 + t4061*t4120 - 0.183*(-1.*t3889*t3967 + t3451*t4120) - 0.2*(t3451*t3967 + t3889*t4120) - 1.*t897*t906*t986;
  p_output1[10]=t1413*t4516 + t1918*t4741 - 0.13205*(t1369*t4516 + t1781*t4741) + t2877*t4813 + t3894*t4854 + t4061*t4897 - 0.2*(t3451*t4854 + t3889*t4897) - 0.183*t4925 + t1547*t897*t906;
  p_output1[11]=0;
  p_output1[12]=t2877*t5087 + t3894*t5094 + t4061*t5108 - 0.183*(-1.*t3889*t5094 + t3451*t5108) - 0.2*(t3451*t5094 + t3889*t5108) - 1.*t1482*t1547*t897 + t1413*t1426*t1547*t906 + t1547*t1593*t1918*t906 - 0.13205*(t1369*t1426*t1547*t906 + t1547*t1593*t1781*t906);
  p_output1[13]=t2877*t5248 + t3894*t5267 + t4061*t5279 - 0.183*(-1.*t3889*t5267 + t3451*t5279) - 0.2*(t3451*t5267 + t3889*t5279) - 1.*t1482*t897*t986 + t1413*t1426*t906*t986 + t1593*t1918*t906*t986 - 0.13205*(t1369*t1426*t906*t986 + t1593*t1781*t906*t986);
  p_output1[14]=-1.*t1413*t1426*t1482 - 0.13205*(-1.*t1369*t1426*t1482 - 1.*t1482*t1593*t1781) - 1.*t1482*t1593*t1918 + t2877*t5471 + t3894*t5543 + t4061*t5565 - 0.183*(-1.*t3889*t5543 + t3451*t5565) - 0.2*(t3451*t5543 + t3889*t5565) - 1.*t897*t906;
  p_output1[15]=t1918*t4516 + t1413*t5789 - 0.13205*(t4791 + t1369*t5789) + t2877*t5849 + t105*t3894*t5849 - 1.*t2848*t4061*t5849 - 0.183*(-1.*t2848*t3451*t5849 - 1.*t105*t3889*t5849) - 0.2*(t105*t3451*t5849 - 1.*t2848*t3889*t5849);
  p_output1[16]=t1413*t2175 + t1918*t5962 + t2877*t5973 + t105*t3894*t5973 - 1.*t2848*t4061*t5973 - 0.183*(-1.*t2848*t3451*t5973 - 1.*t105*t3889*t5973) - 0.2*(t105*t3451*t5973 - 1.*t2848*t3889*t5973) - 0.13205*(t1369*t2175 + t6091);
  p_output1[17]=t6192 + t6198 + t6204 + t6266 + t6297 + t6318 - 1.*t1413*t1593*t906 + t1426*t1918*t906;
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
  p_output1[36]=0.047*t1781*t4516 - 0.047*t1369*t4741 - 0.13205*t4813 + t2877*t6338 + t105*t3894*t6338 - 1.*t2848*t4061*t6338 - 0.183*(-1.*t2848*t3451*t6338 - 1.*t105*t3889*t6338) - 0.2*(t105*t3451*t6338 - 1.*t2848*t3889*t6338);
  p_output1[37]=0.047*t1781*t5962 - 0.047*t1369*t6452 + t2877*t6463 + t105*t3894*t6463 - 1.*t2848*t4061*t6463 - 0.183*(-1.*t2848*t3451*t6463 - 1.*t105*t3889*t6463) - 0.2*(t105*t3451*t6463 - 1.*t2848*t3889*t6463) - 0.13205*t6510;
  p_output1[38]=t6192 + t6198 + t6204 + t6266 + t6297 + t6318 - 0.047*t1369*t1593*t906 + 0.047*t1426*t1781*t906;
  p_output1[39]=-0.183*t105*t4813 + t3894*t4897 + t4061*t6761 - 0.2*(t4920 + t3889*t6761) - 0.183*(t3451*t6761 + t6861) - 0.183*t1547*t2848*t906;
  p_output1[40]=-0.183*t105*t6510 + t4061*t6930 + t3894*t6973 - 0.2*(t3889*t6930 + t7017) - 0.183*(t3451*t6930 + t7044) - 0.183*t2848*t906*t986;
  p_output1[41]=0.183*t1482*t2848 - 0.183*t105*t6237 + t4061*t7084 + t3894*t7135 - 0.2*(t3889*t7084 + t7173) - 0.183*(t3451*t7084 + t7191);
  p_output1[42]=-0.2*t4925 - 0.183*(-1.*t3451*t4854 + t6861) + t4854*t7288 + t4897*t7354;
  p_output1[43]=t6973*t7354 + t7288*t7452 - 0.183*(t7044 - 1.*t3451*t7452) - 0.2*(t7017 - 1.*t3889*t7452);
  p_output1[44]=t7135*t7354 + t7288*t7532 - 0.183*(t7191 - 1.*t3451*t7532) - 0.2*(t7173 - 1.*t3889*t7532);
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



void Jp_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
