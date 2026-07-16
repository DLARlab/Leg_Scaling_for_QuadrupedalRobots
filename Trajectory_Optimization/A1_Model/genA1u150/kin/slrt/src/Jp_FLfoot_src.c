/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FLfoot_src.h"

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
  double t668;
  double t1417;
  double t1100;
  double t1341;
  double t1643;
  double t1000;
  double t1416;
  double t1649;
  double t1650;
  double t1700;
  double t2200;
  double t2210;
  double t2229;
  double t629;
  double t2545;
  double t98;
  double t2828;
  double t2856;
  double t2953;
  double t3160;
  double t3163;
  double t3415;
  double t3464;
  double t3759;
  double t3820;
  double t3846;
  double t4277;
  double t4320;
  double t4455;
  double t285;
  double t317;
  double t424;
  double t615;
  double t1045;
  double t1064;
  double t1799;
  double t1853;
  double t1934;
  double t2110;
  double t5139;
  double t5221;
  double t5224;
  double t5381;
  double t5448;
  double t5471;
  double t2665;
  double t2730;
  double t3458;
  double t3653;
  double t3682;
  double t5756;
  double t5768;
  double t5769;
  double t4013;
  double t4204;
  double t4209;
  double t5813;
  double t5827;
  double t5852;
  double t5864;
  double t5932;
  double t5938;
  double t6912;
  double t7022;
  double t7082;
  double t7106;
  double t7132;
  double t7187;
  double t7245;
  double t7262;
  double t7266;
  double t7620;
  double t7640;
  double t7670;
  double t7699;
  double t7712;
  double t7717;
  double t7722;
  double t7783;
  double t7786;
  double t8084;
  double t8086;
  double t8180;
  double t8185;
  double t8196;
  double t8200;
  double t8207;
  double t8228;
  double t8231;
  double t8394;
  double t8405;
  double t8410;
  double t8431;
  double t8448;
  double t8449;
  double t8699;
  double t8708;
  double t8716;
  double t2313;
  double t8741;
  double t8749;
  double t9022;
  double t9035;
  double t9047;
  double t9254;
  double t9266;
  double t9444;
  double t9455;
  double t9456;
  double t9462;
  double t9463;
  double t8779;
  double t9057;
  double t9058;
  double t9068;
  double t9088;
  double t9104;
  double t9109;
  double t9129;
  double t9134;
  double t9145;
  double t9150;
  double t9189;
  double t9194;
  double t9202;
  double t9214;
  double t9225;
  double t9724;
  double t9726;
  double t9729;
  double t6090;
  double t9503;
  double t9505;
  double t9850;
  double t9851;
  double t9861;
  double t9869;
  double t9883;
  double t9937;
  double t9955;
  double t9958;
  double t9968;
  double t9975;
  double t9981;
  double t6057;
  double t6122;
  double t9807;
  double t10041;
  double t10059;
  double t10063;
  double t10069;
  double t10070;
  double t10091;
  double t10092;
  double t10093;
  double t9895;
  double t9907;
  double t10122;
  double t10124;
  double t10125;
  double t9991;
  double t10004;
  t668 = Sin(var1[3]);
  t1417 = Cos(var1[3]);
  t1100 = Cos(var1[5]);
  t1341 = Sin(var1[4]);
  t1643 = Sin(var1[5]);
  t1000 = Sin(var1[9]);
  t1416 = -1.*t1100*t668*t1341;
  t1649 = t1417*t1643;
  t1650 = t1416 + t1649;
  t1700 = Cos(var1[9]);
  t2200 = -1.*t1417*t1100;
  t2210 = -1.*t668*t1341*t1643;
  t2229 = t2200 + t2210;
  t629 = Cos(var1[4]);
  t2545 = Sin(var1[10]);
  t98 = Cos(var1[10]);
  t2828 = t1700*t1650;
  t2856 = -1.*t1000*t2229;
  t2953 = t2828 + t2856;
  t3160 = Cos(var1[11]);
  t3163 = -1.*t3160;
  t3415 = 1. + t3163;
  t3464 = Sin(var1[11]);
  t3759 = -1.*t629*t2545*t668;
  t3820 = t98*t2953;
  t3846 = t3759 + t3820;
  t4277 = -1.*t98*t629*t668;
  t4320 = -1.*t2545*t2953;
  t4455 = t4277 + t4320;
  t285 = -1.*t98;
  t317 = 1. + t285;
  t424 = 0.183*t317;
  t615 = 0. + t424;
  t1045 = -0.047*t1000;
  t1064 = 0. + t1045;
  t1799 = -1.*t1700;
  t1853 = 1. + t1799;
  t1934 = 0.047*t1853;
  t2110 = 0. + t1934;
  t5139 = t1417*t1100*t1341;
  t5221 = t668*t1643;
  t5224 = t5139 + t5221;
  t5381 = -1.*t1100*t668;
  t5448 = t1417*t1341*t1643;
  t5471 = t5381 + t5448;
  t2665 = 0.183*t2545;
  t2730 = 0. + t2665;
  t3458 = -0.3*t3415;
  t3653 = 0.183*t3464;
  t3682 = 0. + t3458 + t3653;
  t5756 = t1700*t5224;
  t5768 = -1.*t1000*t5471;
  t5769 = t5756 + t5768;
  t4013 = 0.183*t3415;
  t4204 = 0.3*t3464;
  t4209 = 0. + t4013 + t4204;
  t5813 = t1417*t629*t2545;
  t5827 = t98*t5769;
  t5852 = t5813 + t5827;
  t5864 = t98*t1417*t629;
  t5932 = -1.*t2545*t5769;
  t5938 = t5864 + t5932;
  t6912 = t1700*t1417*t629*t1100;
  t7022 = -1.*t1417*t629*t1000*t1643;
  t7082 = t6912 + t7022;
  t7106 = -1.*t1417*t2545*t1341;
  t7132 = t98*t7082;
  t7187 = t7106 + t7132;
  t7245 = -1.*t98*t1417*t1341;
  t7262 = -1.*t2545*t7082;
  t7266 = t7245 + t7262;
  t7620 = t1700*t629*t1100*t668;
  t7640 = -1.*t629*t1000*t668*t1643;
  t7670 = t7620 + t7640;
  t7699 = -1.*t2545*t668*t1341;
  t7712 = t98*t7670;
  t7717 = t7699 + t7712;
  t7722 = -1.*t98*t668*t1341;
  t7783 = -1.*t2545*t7670;
  t7786 = t7722 + t7783;
  t8084 = -1.*t1700*t1100*t1341;
  t8086 = t1000*t1341*t1643;
  t8180 = t8084 + t8086;
  t8185 = -1.*t629*t2545;
  t8196 = t98*t8180;
  t8200 = t8185 + t8196;
  t8207 = -1.*t98*t629;
  t8228 = -1.*t2545*t8180;
  t8231 = t8207 + t8228;
  t8394 = t1100*t668;
  t8405 = -1.*t1417*t1341*t1643;
  t8410 = t8394 + t8405;
  t8431 = -1.*t1000*t5224;
  t8448 = t1700*t8410;
  t8449 = t8431 + t8448;
  t8699 = t1100*t668*t1341;
  t8708 = -1.*t1417*t1643;
  t8716 = t8699 + t8708;
  t2313 = t1700*t2229;
  t8741 = -1.*t1000*t8716;
  t8749 = t8741 + t2313;
  t9022 = -1.*t629*t1100*t1000;
  t9035 = -1.*t1700*t629*t1643;
  t9047 = t9022 + t9035;
  t9254 = -1.*t1700*t5471;
  t9266 = t8431 + t9254;
  t9444 = t1417*t1100;
  t9455 = t668*t1341*t1643;
  t9456 = t9444 + t9455;
  t9462 = -1.*t1700*t9456;
  t9463 = t8741 + t9462;
  t8779 = t1700*t8716;
  t9057 = t2730*t9047;
  t9058 = t98*t3682*t9047;
  t9068 = -1.*t2545*t4209*t9047;
  t9088 = t1700*t629*t1100;
  t9104 = -1.*t629*t1000*t1643;
  t9109 = t9088 + t9104;
  t9129 = 0.17458*t9109;
  t9134 = -1.*t3160*t2545*t9047;
  t9145 = -1.*t98*t3464*t9047;
  t9150 = t9134 + t9145;
  t9189 = 0.183*t9150;
  t9194 = t98*t3160*t9047;
  t9202 = -1.*t2545*t3464*t9047;
  t9214 = t9194 + t9202;
  t9225 = -0.6*t9214;
  t9724 = -1.*t1417*t629*t2545;
  t9726 = -1.*t98*t5769;
  t9729 = t9724 + t9726;
  t6090 = t3160*t5938;
  t9503 = -1.*t1000*t9456;
  t9505 = t8779 + t9503;
  t9850 = -1.*t98*t9505;
  t9851 = t3759 + t9850;
  t9861 = t98*t629*t668;
  t9869 = -1.*t2545*t9505;
  t9883 = t9861 + t9869;
  t9937 = t2545*t1341;
  t9955 = -1.*t98*t9109;
  t9958 = t9937 + t9955;
  t9968 = -1.*t98*t1341;
  t9975 = -1.*t2545*t9109;
  t9981 = t9968 + t9975;
  t6057 = -1.*t3464*t5852;
  t6122 = t6057 + t6090;
  t9807 = -1.*t3464*t5938;
  t10041 = 0.183*t3160;
  t10059 = -0.3*t3464;
  t10063 = t10041 + t10059;
  t10069 = 0.3*t3160;
  t10070 = t10069 + t3653;
  t10091 = t629*t2545*t668;
  t10092 = t98*t9505;
  t10093 = t10091 + t10092;
  t9895 = t3160*t9883;
  t9907 = -1.*t3464*t9883;
  t10122 = -1.*t2545*t1341;
  t10124 = t98*t9109;
  t10125 = t10122 + t10124;
  t9991 = t3160*t9981;
  t10004 = -1.*t3464*t9981;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1064*t1650 + t2110*t2229 + 0.17458*(t1000*t1650 + t2313) + t2730*t2953 + t3682*t3846 + t4209*t4455 + 0.183*(-1.*t3464*t3846 + t3160*t4455) - 0.6*(t3160*t3846 + t3464*t4455) - 1.*t615*t629*t668;
  p_output1[10]=t1064*t5224 + t2110*t5471 + 0.17458*(t1000*t5224 + t1700*t5471) + t2730*t5769 + t3682*t5852 + t4209*t5938 - 0.6*(t3160*t5852 + t3464*t5938) + 0.183*t6122 + t1417*t615*t629;
  p_output1[11]=0;
  p_output1[12]=-1.*t1341*t1417*t615 + t1064*t1100*t1417*t629 + t1417*t1643*t2110*t629 + 0.17458*(t1000*t1100*t1417*t629 + t1417*t1643*t1700*t629) + t2730*t7082 + t3682*t7187 + t4209*t7266 + 0.183*(-1.*t3464*t7187 + t3160*t7266) - 0.6*(t3160*t7187 + t3464*t7266);
  p_output1[13]=-1.*t1341*t615*t668 + t1064*t1100*t629*t668 + t1643*t2110*t629*t668 + 0.17458*(t1000*t1100*t629*t668 + t1643*t1700*t629*t668) + t2730*t7670 + t3682*t7717 + t4209*t7786 + 0.183*(-1.*t3464*t7717 + t3160*t7786) - 0.6*(t3160*t7717 + t3464*t7786);
  p_output1[14]=-1.*t1064*t1100*t1341 + 0.17458*(-1.*t1000*t1100*t1341 - 1.*t1341*t1643*t1700) - 1.*t1341*t1643*t2110 - 1.*t615*t629 + t2730*t8180 + t3682*t8200 + t4209*t8231 + 0.183*(-1.*t3464*t8200 + t3160*t8231) - 0.6*(t3160*t8200 + t3464*t8231);
  p_output1[15]=t2110*t5224 + t1064*t8410 + 0.17458*(t5756 + t1000*t8410) + t2730*t8449 - 1.*t2545*t4209*t8449 + t3682*t8449*t98 - 0.6*(-1.*t2545*t3464*t8449 + t3160*t8449*t98) + 0.183*(-1.*t2545*t3160*t8449 - 1.*t3464*t8449*t98);
  p_output1[16]=t1064*t2229 + t2110*t8716 + t2730*t8749 - 1.*t2545*t4209*t8749 + 0.17458*(t1000*t2229 + t8779) + t3682*t8749*t98 - 0.6*(-1.*t2545*t3464*t8749 + t3160*t8749*t98) + 0.183*(-1.*t2545*t3160*t8749 - 1.*t3464*t8749*t98);
  p_output1[17]=-1.*t1064*t1643*t629 + t1100*t2110*t629 + t9057 + t9058 + t9068 + t9129 + t9189 + t9225;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t1700*t5224 + 0.047*t1000*t5471 + 0.17458*t5769 + t2730*t9266 - 1.*t2545*t4209*t9266 + t3682*t9266*t98 - 0.6*(-1.*t2545*t3464*t9266 + t3160*t9266*t98) + 0.183*(-1.*t2545*t3160*t9266 - 1.*t3464*t9266*t98);
  p_output1[28]=-0.047*t1700*t8716 + 0.047*t1000*t9456 + t2730*t9463 - 1.*t2545*t4209*t9463 + 0.17458*t9505 + t3682*t9463*t98 - 0.6*(-1.*t2545*t3464*t9463 + t3160*t9463*t98) + 0.183*(-1.*t2545*t3160*t9463 - 1.*t3464*t9463*t98);
  p_output1[29]=0.047*t1000*t1643*t629 - 0.047*t1100*t1700*t629 + t9057 + t9058 + t9068 + t9129 + t9189 + t9225;
  p_output1[30]=t3682*t5938 + 0.183*t1417*t2545*t629 + t4209*t9729 - 0.6*(t6090 + t3464*t9729) + 0.183*t5769*t98 + 0.183*(t3160*t9729 + t9807);
  p_output1[31]=0.183*t2545*t629*t668 + 0.183*t9505*t98 + t4209*t9851 + t3682*t9883 - 0.6*(t3464*t9851 + t9895) + 0.183*(t3160*t9851 + t9907);
  p_output1[32]=-0.183*t1341*t2545 + 0.183*t9109*t98 + t4209*t9958 + 0.183*(t10004 + t3160*t9958) + t3682*t9981 - 0.6*(t3464*t9958 + t9991);
  p_output1[33]=t10063*t5852 + t10070*t5938 - 0.6*t6122 + 0.183*(-1.*t3160*t5852 + t9807);
  p_output1[34]=t10063*t10093 + t10070*t9883 - 0.6*(-1.*t10093*t3464 + t9895) + 0.183*(-1.*t10093*t3160 + t9907);
  p_output1[35]=t10063*t10125 + 0.183*(t10004 - 1.*t10125*t3160) + t10070*t9981 - 0.6*(-1.*t10125*t3464 + t9991);
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



void Jp_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
