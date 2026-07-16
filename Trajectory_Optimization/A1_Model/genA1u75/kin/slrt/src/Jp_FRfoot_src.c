/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot_src.h"

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
  double t992;
  double t1257;
  double t1286;
  double t1246;
  double t1293;
  double t1058;
  double t1275;
  double t1294;
  double t1295;
  double t1297;
  double t1298;
  double t1299;
  double t1300;
  double t85;
  double t188;
  double t1313;
  double t1314;
  double t1316;
  double t1317;
  double t1328;
  double t1329;
  double t1330;
  double t1332;
  double t1323;
  double t1324;
  double t1327;
  double t1338;
  double t1339;
  double t1341;
  double t577;
  double t831;
  double t892;
  double t984;
  double t1142;
  double t1210;
  double t1222;
  double t1225;
  double t1302;
  double t1305;
  double t1869;
  double t1962;
  double t1977;
  double t2105;
  double t2108;
  double t2109;
  double t1318;
  double t1319;
  double t2172;
  double t2266;
  double t2275;
  double t1331;
  double t1333;
  double t1335;
  double t1346;
  double t1348;
  double t1349;
  double t2365;
  double t2526;
  double t2540;
  double t2890;
  double t2918;
  double t2920;
  double t4222;
  double t4265;
  double t4306;
  double t4410;
  double t4503;
  double t4609;
  double t4633;
  double t4645;
  double t4667;
  double t5299;
  double t5300;
  double t5303;
  double t5305;
  double t5306;
  double t5309;
  double t5317;
  double t5318;
  double t5322;
  double t5985;
  double t6049;
  double t6073;
  double t6140;
  double t6146;
  double t6198;
  double t6206;
  double t6225;
  double t6263;
  double t6464;
  double t6483;
  double t6491;
  double t6823;
  double t6824;
  double t6838;
  double t7243;
  double t7258;
  double t7264;
  double t1309;
  double t7283;
  double t7292;
  double t7538;
  double t7541;
  double t7542;
  double t7626;
  double t7628;
  double t7276;
  double t7683;
  double t7686;
  double t7689;
  double t7738;
  double t7756;
  double t7498;
  double t7502;
  double t7503;
  double t7518;
  double t7544;
  double t7546;
  double t7548;
  double t7550;
  double t7565;
  double t7569;
  double t7579;
  double t7594;
  double t7601;
  double t7605;
  double t7606;
  double t2987;
  double t7998;
  double t8002;
  double t8003;
  double t7695;
  double t7717;
  double t8073;
  double t8074;
  double t8075;
  double t8064;
  double t8066;
  double t8232;
  double t8273;
  double t8309;
  double t8100;
  double t8103;
  double t8179;
  double t3029;
  double t3045;
  double t8050;
  double t8426;
  double t8430;
  double t8437;
  double t8444;
  double t8504;
  double t8077;
  double t8592;
  double t8622;
  double t8653;
  double t8086;
  double t8365;
  double t8767;
  double t8788;
  double t8790;
  double t8416;
  t992 = Sin(var1[3]);
  t1257 = Cos(var1[5]);
  t1286 = Sin(var1[4]);
  t1246 = Cos(var1[3]);
  t1293 = Sin(var1[5]);
  t1058 = Cos(var1[6]);
  t1275 = -1.*t1246*t1257;
  t1294 = -1.*t992*t1286*t1293;
  t1295 = t1275 + t1294;
  t1297 = -1.*t1257*t992*t1286;
  t1298 = t1246*t1293;
  t1299 = t1297 + t1298;
  t1300 = Sin(var1[6]);
  t85 = Cos(var1[4]);
  t188 = Cos(var1[7]);
  t1313 = t1058*t1299;
  t1314 = -1.*t1295*t1300;
  t1316 = t1313 + t1314;
  t1317 = Sin(var1[7]);
  t1328 = Cos(var1[8]);
  t1329 = -1.*t1328;
  t1330 = 1. + t1329;
  t1332 = Sin(var1[8]);
  t1323 = -1.*t85*t188*t992;
  t1324 = -1.*t1316*t1317;
  t1327 = t1323 + t1324;
  t1338 = t188*t1316;
  t1339 = -1.*t85*t992*t1317;
  t1341 = t1338 + t1339;
  t577 = -1.*t188;
  t831 = 1. + t577;
  t892 = 0.183*t831;
  t984 = 0. + t892;
  t1142 = -1.*t1058;
  t1210 = 1. + t1142;
  t1222 = -0.047*t1210;
  t1225 = 0. + t1222;
  t1302 = 0.047*t1300;
  t1305 = 0. + t1302;
  t1869 = -1.*t1257*t992;
  t1962 = t1246*t1286*t1293;
  t1977 = t1869 + t1962;
  t2105 = t1246*t1257*t1286;
  t2108 = t992*t1293;
  t2109 = t2105 + t2108;
  t1318 = 0.183*t1317;
  t1319 = 0. + t1318;
  t2172 = t1058*t2109;
  t2266 = -1.*t1977*t1300;
  t2275 = t2172 + t2266;
  t1331 = 0.183*t1330;
  t1333 = 0.15*t1332;
  t1335 = 0. + t1331 + t1333;
  t1346 = -0.15*t1330;
  t1348 = 0.183*t1332;
  t1349 = 0. + t1346 + t1348;
  t2365 = t1246*t85*t188;
  t2526 = -1.*t2275*t1317;
  t2540 = t2365 + t2526;
  t2890 = t188*t2275;
  t2918 = t1246*t85*t1317;
  t2920 = t2890 + t2918;
  t4222 = t1246*t85*t1257*t1058;
  t4265 = -1.*t1246*t85*t1293*t1300;
  t4306 = t4222 + t4265;
  t4410 = -1.*t1246*t188*t1286;
  t4503 = -1.*t4306*t1317;
  t4609 = t4410 + t4503;
  t4633 = t188*t4306;
  t4645 = -1.*t1246*t1286*t1317;
  t4667 = t4633 + t4645;
  t5299 = t85*t1257*t1058*t992;
  t5300 = -1.*t85*t992*t1293*t1300;
  t5303 = t5299 + t5300;
  t5305 = -1.*t188*t992*t1286;
  t5306 = -1.*t5303*t1317;
  t5309 = t5305 + t5306;
  t5317 = t188*t5303;
  t5318 = -1.*t992*t1286*t1317;
  t5322 = t5317 + t5318;
  t5985 = -1.*t1257*t1058*t1286;
  t6049 = t1286*t1293*t1300;
  t6073 = t5985 + t6049;
  t6140 = -1.*t85*t188;
  t6146 = -1.*t6073*t1317;
  t6198 = t6140 + t6146;
  t6206 = t188*t6073;
  t6225 = -1.*t85*t1317;
  t6263 = t6206 + t6225;
  t6464 = t1257*t992;
  t6483 = -1.*t1246*t1286*t1293;
  t6491 = t6464 + t6483;
  t6823 = t1058*t6491;
  t6824 = -1.*t2109*t1300;
  t6838 = t6823 + t6824;
  t7243 = t1257*t992*t1286;
  t7258 = -1.*t1246*t1293;
  t7264 = t7243 + t7258;
  t1309 = t1058*t1295;
  t7283 = -1.*t7264*t1300;
  t7292 = t1309 + t7283;
  t7538 = -1.*t85*t1058*t1293;
  t7541 = -1.*t85*t1257*t1300;
  t7542 = t7538 + t7541;
  t7626 = -1.*t1058*t1977;
  t7628 = t7626 + t6824;
  t7276 = t1058*t7264;
  t7683 = t1246*t1257;
  t7686 = t992*t1286*t1293;
  t7689 = t7683 + t7686;
  t7738 = -1.*t1058*t7689;
  t7756 = t7738 + t7283;
  t7498 = t85*t1257*t1058;
  t7502 = -1.*t85*t1293*t1300;
  t7503 = t7498 + t7502;
  t7518 = -0.11079*t7503;
  t7544 = t7542*t1319;
  t7546 = -1.*t7542*t1317*t1335;
  t7548 = t188*t7542*t1349;
  t7550 = -1.*t1328*t7542*t1317;
  t7565 = -1.*t188*t7542*t1332;
  t7569 = t7550 + t7565;
  t7579 = 0.183*t7569;
  t7594 = t188*t1328*t7542;
  t7601 = -1.*t7542*t1317*t1332;
  t7605 = t7594 + t7601;
  t7606 = -0.3*t7605;
  t2987 = t1328*t2540;
  t7998 = -1.*t188*t2275;
  t8002 = -1.*t1246*t85*t1317;
  t8003 = t7998 + t8002;
  t7695 = -1.*t7689*t1300;
  t7717 = t7276 + t7695;
  t8073 = t85*t188*t992;
  t8074 = -1.*t7717*t1317;
  t8075 = t8073 + t8074;
  t8064 = -1.*t188*t7717;
  t8066 = t8064 + t1339;
  t8232 = -1.*t188*t1286;
  t8273 = -1.*t7503*t1317;
  t8309 = t8232 + t8273;
  t8100 = -1.*t188*t7503;
  t8103 = t1286*t1317;
  t8179 = t8100 + t8103;
  t3029 = -1.*t2920*t1332;
  t3045 = t2987 + t3029;
  t8050 = -1.*t2540*t1332;
  t8426 = 0.183*t1328;
  t8430 = -0.15*t1332;
  t8437 = t8426 + t8430;
  t8444 = 0.15*t1328;
  t8504 = t8444 + t1348;
  t8077 = t1328*t8075;
  t8592 = t188*t7717;
  t8622 = t85*t992*t1317;
  t8653 = t8592 + t8622;
  t8086 = -1.*t8075*t1332;
  t8365 = t1328*t8309;
  t8767 = t188*t7503;
  t8788 = -1.*t1286*t1317;
  t8790 = t8767 + t8788;
  t8416 = -1.*t8309*t1332;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1225*t1295 + t1299*t1305 - 0.11079*(t1299*t1300 + t1309) + t1316*t1319 + t1327*t1335 - 0.3*(t1327*t1332 + t1328*t1341) + 0.183*(t1327*t1328 - 1.*t1332*t1341) + t1341*t1349 - 1.*t85*t984*t992;
  p_output1[10]=t1225*t1977 + t1305*t2109 - 0.11079*(t1058*t1977 + t1300*t2109) + t1319*t2275 + t1335*t2540 + t1349*t2920 - 0.3*(t1332*t2540 + t1328*t2920) + 0.183*t3045 + t1246*t85*t984;
  p_output1[11]=0;
  p_output1[12]=t1319*t4306 + t1335*t4609 + t1349*t4667 - 0.3*(t1332*t4609 + t1328*t4667) + 0.183*(t1328*t4609 - 1.*t1332*t4667) + t1225*t1246*t1293*t85 + t1246*t1257*t1305*t85 - 0.11079*(t1058*t1246*t1293*t85 + t1246*t1257*t1300*t85) - 1.*t1246*t1286*t984;
  p_output1[13]=t1319*t5303 + t1335*t5309 + t1349*t5322 - 0.3*(t1332*t5309 + t1328*t5322) + 0.183*(t1328*t5309 - 1.*t1332*t5322) + t1225*t1293*t85*t992 + t1257*t1305*t85*t992 - 1.*t1286*t984*t992 - 0.11079*(t1058*t1293*t85*t992 + t1257*t1300*t85*t992);
  p_output1[14]=-1.*t1225*t1286*t1293 - 0.11079*(-1.*t1058*t1286*t1293 - 1.*t1257*t1286*t1300) - 1.*t1257*t1286*t1305 + t1319*t6073 + t1335*t6198 + t1349*t6263 - 0.3*(t1332*t6198 + t1328*t6263) + 0.183*(t1328*t6198 - 1.*t1332*t6263) - 1.*t85*t984;
  p_output1[15]=t1225*t2109 + t1305*t6491 - 0.11079*(t2172 + t1300*t6491) + t1319*t6838 - 1.*t1317*t1335*t6838 + t1349*t188*t6838 - 0.3*(-1.*t1317*t1332*t6838 + t1328*t188*t6838) + 0.183*(-1.*t1317*t1328*t6838 - 1.*t1332*t188*t6838);
  p_output1[16]=t1295*t1305 + t1225*t7264 - 0.11079*(t1295*t1300 + t7276) + t1319*t7292 - 1.*t1317*t1335*t7292 + t1349*t188*t7292 - 0.3*(-1.*t1317*t1332*t7292 + t1328*t188*t7292) + 0.183*(-1.*t1317*t1328*t7292 - 1.*t1332*t188*t7292);
  p_output1[17]=t7518 + t7544 + t7546 + t7548 + t7579 + t7606 + t1225*t1257*t85 - 1.*t1293*t1305*t85;
  p_output1[18]=-0.047*t1300*t1977 + 0.047*t1058*t2109 - 0.11079*t2275 + t1319*t7628 - 1.*t1317*t1335*t7628 + t1349*t188*t7628 - 0.3*(-1.*t1317*t1332*t7628 + t1328*t188*t7628) + 0.183*(-1.*t1317*t1328*t7628 - 1.*t1332*t188*t7628);
  p_output1[19]=0.047*t1058*t7264 - 0.047*t1300*t7689 - 0.11079*t7717 + t1319*t7756 - 1.*t1317*t1335*t7756 + t1349*t188*t7756 - 0.3*(-1.*t1317*t1332*t7756 + t1328*t188*t7756) + 0.183*(-1.*t1317*t1328*t7756 - 1.*t1332*t188*t7756);
  p_output1[20]=t7518 + t7544 + t7546 + t7548 + t7579 + t7606 + 0.047*t1058*t1257*t85 - 0.047*t1293*t1300*t85;
  p_output1[21]=0.183*t188*t2275 + t1349*t2540 + t1335*t8003 - 0.3*(t2987 + t1332*t8003) + 0.183*(t1328*t8003 + t8050) + 0.183*t1246*t1317*t85;
  p_output1[22]=0.183*t188*t7717 + t1335*t8066 + t1349*t8075 - 0.3*(t1332*t8066 + t8077) + 0.183*(t1328*t8066 + t8086) + 0.183*t1317*t85*t992;
  p_output1[23]=-0.183*t1286*t1317 + 0.183*t188*t7503 + t1335*t8179 + t1349*t8309 - 0.3*(t1332*t8179 + t8365) + 0.183*(t1328*t8179 + t8416);
  p_output1[24]=-0.3*t3045 + 0.183*(-1.*t1328*t2920 + t8050) + t2920*t8437 + t2540*t8504;
  p_output1[25]=t8075*t8504 + t8437*t8653 + 0.183*(t8086 - 1.*t1328*t8653) - 0.3*(t8077 - 1.*t1332*t8653);
  p_output1[26]=t8309*t8504 + t8437*t8790 + 0.183*(t8416 - 1.*t1328*t8790) - 0.3*(t8365 - 1.*t1332*t8790);
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



void Jp_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
