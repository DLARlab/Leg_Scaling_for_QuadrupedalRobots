/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t738;
  double t1739;
  double t1175;
  double t1312;
  double t1764;
  double t812;
  double t1531;
  double t1799;
  double t1813;
  double t1894;
  double t2037;
  double t2078;
  double t2192;
  double t727;
  double t3007;
  double t207;
  double t3135;
  double t3207;
  double t3212;
  double t3265;
  double t3286;
  double t3695;
  double t3920;
  double t4217;
  double t4280;
  double t4404;
  double t4697;
  double t4727;
  double t4798;
  double t250;
  double t293;
  double t435;
  double t477;
  double t908;
  double t1037;
  double t1912;
  double t1928;
  double t1940;
  double t1964;
  double t5168;
  double t5171;
  double t5179;
  double t5401;
  double t5416;
  double t5432;
  double t3083;
  double t3095;
  double t3734;
  double t4056;
  double t4216;
  double t5599;
  double t5741;
  double t5806;
  double t4420;
  double t4479;
  double t4513;
  double t5991;
  double t6147;
  double t6179;
  double t6211;
  double t6253;
  double t6551;
  double t8679;
  double t8794;
  double t8942;
  double t9006;
  double t9042;
  double t9160;
  double t9205;
  double t9250;
  double t9316;
  double t9474;
  double t9480;
  double t9486;
  double t9521;
  double t9524;
  double t9527;
  double t9559;
  double t9570;
  double t9611;
  double t9781;
  double t9791;
  double t9794;
  double t9801;
  double t9805;
  double t9809;
  double t9814;
  double t9817;
  double t9820;
  double t9864;
  double t9874;
  double t9877;
  double t9890;
  double t9892;
  double t9893;
  double t9920;
  double t9922;
  double t9924;
  double t2411;
  double t9933;
  double t9936;
  double t9979;
  double t9981;
  double t9982;
  double t10012;
  double t10013;
  double t10034;
  double t10035;
  double t10036;
  double t10042;
  double t10043;
  double t9943;
  double t9985;
  double t9986;
  double t9987;
  double t9988;
  double t9989;
  double t9990;
  double t9992;
  double t9993;
  double t9994;
  double t9996;
  double t9997;
  double t10000;
  double t10002;
  double t10003;
  double t10004;
  double t10098;
  double t10099;
  double t10102;
  double t6859;
  double t10047;
  double t10048;
  double t10143;
  double t10144;
  double t10149;
  double t10150;
  double t10151;
  double t10177;
  double t10178;
  double t10179;
  double t10181;
  double t10184;
  double t10185;
  double t6745;
  double t6894;
  double t10122;
  double t10209;
  double t10210;
  double t10215;
  double t10217;
  double t10219;
  double t10231;
  double t10232;
  double t10233;
  double t10156;
  double t10167;
  double t10260;
  double t10261;
  double t10262;
  double t10189;
  double t10202;
  t738 = Sin(var1[3]);
  t1739 = Cos(var1[3]);
  t1175 = Cos(var1[5]);
  t1312 = Sin(var1[4]);
  t1764 = Sin(var1[5]);
  t812 = Sin(var1[12]);
  t1531 = -1.*t1175*t738*t1312;
  t1799 = t1739*t1764;
  t1813 = t1531 + t1799;
  t1894 = Cos(var1[12]);
  t2037 = -1.*t1739*t1175;
  t2078 = -1.*t738*t1312*t1764;
  t2192 = t2037 + t2078;
  t727 = Cos(var1[4]);
  t3007 = Sin(var1[13]);
  t207 = Cos(var1[13]);
  t3135 = t1894*t1813;
  t3207 = -1.*t812*t2192;
  t3212 = t3135 + t3207;
  t3265 = Cos(var1[14]);
  t3286 = -1.*t3265;
  t3695 = 1. + t3286;
  t3920 = Sin(var1[14]);
  t4217 = -1.*t727*t3007*t738;
  t4280 = t207*t3212;
  t4404 = t4217 + t4280;
  t4697 = -1.*t207*t727*t738;
  t4727 = -1.*t3007*t3212;
  t4798 = t4697 + t4727;
  t250 = -1.*t207;
  t293 = 1. + t250;
  t435 = -0.183*t293;
  t477 = 0. + t435;
  t908 = 0.047*t812;
  t1037 = 0. + t908;
  t1912 = -1.*t1894;
  t1928 = 1. + t1912;
  t1940 = -0.047*t1928;
  t1964 = 0. + t1940;
  t5168 = t1739*t1175*t1312;
  t5171 = t738*t1764;
  t5179 = t5168 + t5171;
  t5401 = -1.*t1175*t738;
  t5416 = t1739*t1312*t1764;
  t5432 = t5401 + t5416;
  t3083 = -0.183*t3007;
  t3095 = 0. + t3083;
  t3734 = -0.15*t3695;
  t4056 = -0.183*t3920;
  t4216 = 0. + t3734 + t4056;
  t5599 = t1894*t5179;
  t5741 = -1.*t812*t5432;
  t5806 = t5599 + t5741;
  t4420 = -0.183*t3695;
  t4479 = 0.15*t3920;
  t4513 = 0. + t4420 + t4479;
  t5991 = t1739*t727*t3007;
  t6147 = t207*t5806;
  t6179 = t5991 + t6147;
  t6211 = t207*t1739*t727;
  t6253 = -1.*t3007*t5806;
  t6551 = t6211 + t6253;
  t8679 = t1894*t1739*t727*t1175;
  t8794 = -1.*t1739*t727*t812*t1764;
  t8942 = t8679 + t8794;
  t9006 = -1.*t1739*t3007*t1312;
  t9042 = t207*t8942;
  t9160 = t9006 + t9042;
  t9205 = -1.*t207*t1739*t1312;
  t9250 = -1.*t3007*t8942;
  t9316 = t9205 + t9250;
  t9474 = t1894*t727*t1175*t738;
  t9480 = -1.*t727*t812*t738*t1764;
  t9486 = t9474 + t9480;
  t9521 = -1.*t3007*t738*t1312;
  t9524 = t207*t9486;
  t9527 = t9521 + t9524;
  t9559 = -1.*t207*t738*t1312;
  t9570 = -1.*t3007*t9486;
  t9611 = t9559 + t9570;
  t9781 = -1.*t1894*t1175*t1312;
  t9791 = t812*t1312*t1764;
  t9794 = t9781 + t9791;
  t9801 = -1.*t727*t3007;
  t9805 = t207*t9794;
  t9809 = t9801 + t9805;
  t9814 = -1.*t207*t727;
  t9817 = -1.*t3007*t9794;
  t9820 = t9814 + t9817;
  t9864 = t1175*t738;
  t9874 = -1.*t1739*t1312*t1764;
  t9877 = t9864 + t9874;
  t9890 = -1.*t812*t5179;
  t9892 = t1894*t9877;
  t9893 = t9890 + t9892;
  t9920 = t1175*t738*t1312;
  t9922 = -1.*t1739*t1764;
  t9924 = t9920 + t9922;
  t2411 = t1894*t2192;
  t9933 = -1.*t812*t9924;
  t9936 = t9933 + t2411;
  t9979 = -1.*t727*t1175*t812;
  t9981 = -1.*t1894*t727*t1764;
  t9982 = t9979 + t9981;
  t10012 = -1.*t1894*t5432;
  t10013 = t9890 + t10012;
  t10034 = t1739*t1175;
  t10035 = t738*t1312*t1764;
  t10036 = t10034 + t10035;
  t10042 = -1.*t1894*t10036;
  t10043 = t9933 + t10042;
  t9943 = t1894*t9924;
  t9985 = t3095*t9982;
  t9986 = t207*t4216*t9982;
  t9987 = -1.*t3007*t4513*t9982;
  t9988 = t1894*t727*t1175;
  t9989 = -1.*t727*t812*t1764;
  t9990 = t9988 + t9989;
  t9992 = -0.13205*t9990;
  t9993 = -1.*t3265*t3007*t9982;
  t9994 = -1.*t207*t3920*t9982;
  t9996 = t9993 + t9994;
  t9997 = -0.183*t9996;
  t10000 = t207*t3265*t9982;
  t10002 = -1.*t3007*t3920*t9982;
  t10003 = t10000 + t10002;
  t10004 = -0.15*t10003;
  t10098 = -1.*t1739*t727*t3007;
  t10099 = -1.*t207*t5806;
  t10102 = t10098 + t10099;
  t6859 = t3265*t6551;
  t10047 = -1.*t812*t10036;
  t10048 = t9943 + t10047;
  t10143 = -1.*t207*t10048;
  t10144 = t4217 + t10143;
  t10149 = t207*t727*t738;
  t10150 = -1.*t3007*t10048;
  t10151 = t10149 + t10150;
  t10177 = t3007*t1312;
  t10178 = -1.*t207*t9990;
  t10179 = t10177 + t10178;
  t10181 = -1.*t207*t1312;
  t10184 = -1.*t3007*t9990;
  t10185 = t10181 + t10184;
  t6745 = -1.*t3920*t6179;
  t6894 = t6745 + t6859;
  t10122 = -1.*t3920*t6551;
  t10209 = -0.183*t3265;
  t10210 = -0.15*t3920;
  t10215 = t10209 + t10210;
  t10217 = 0.15*t3265;
  t10219 = t10217 + t4056;
  t10231 = t727*t3007*t738;
  t10232 = t207*t10048;
  t10233 = t10231 + t10232;
  t10156 = t3265*t10151;
  t10167 = -1.*t3920*t10151;
  t10260 = -1.*t3007*t1312;
  t10261 = t207*t9990;
  t10262 = t10260 + t10261;
  t10189 = t3265*t10185;
  t10202 = -1.*t3920*t10185;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1037*t1813 + t1964*t2192 + t3095*t3212 + t4216*t4404 + t4513*t4798 - 0.183*(-1.*t3920*t4404 + t3265*t4798) - 0.15*(t3265*t4404 + t3920*t4798) - 1.*t477*t727*t738 - 0.13205*(t2411 + t1813*t812);
  p_output1(10)=t1037*t5179 + t1964*t5432 + t3095*t5806 + t4216*t6179 + t4513*t6551 - 0.15*(t3265*t6179 + t3920*t6551) - 0.183*t6894 + t1739*t477*t727 - 0.13205*(t1894*t5432 + t5179*t812);
  p_output1(11)=0;
  p_output1(12)=-1.*t1312*t1739*t477 + t1037*t1175*t1739*t727 + t1739*t1764*t1964*t727 - 0.13205*(t1739*t1764*t1894*t727 + t1175*t1739*t727*t812) + t3095*t8942 + t4216*t9160 + t4513*t9316 - 0.183*(-1.*t3920*t9160 + t3265*t9316) - 0.15*(t3265*t9160 + t3920*t9316);
  p_output1(13)=-1.*t1312*t477*t738 + t1037*t1175*t727*t738 + t1764*t1964*t727*t738 - 0.13205*(t1764*t1894*t727*t738 + t1175*t727*t738*t812) + t3095*t9486 + t4216*t9527 + t4513*t9611 - 0.183*(-1.*t3920*t9527 + t3265*t9611) - 0.15*(t3265*t9527 + t3920*t9611);
  p_output1(14)=-1.*t1037*t1175*t1312 - 1.*t1312*t1764*t1964 - 1.*t477*t727 - 0.13205*(-1.*t1312*t1764*t1894 - 1.*t1175*t1312*t812) + t3095*t9794 + t4216*t9809 + t4513*t9820 - 0.183*(-1.*t3920*t9809 + t3265*t9820) - 0.15*(t3265*t9809 + t3920*t9820);
  p_output1(15)=t1964*t5179 + t1037*t9877 - 0.13205*(t5599 + t812*t9877) + t3095*t9893 + t207*t4216*t9893 - 1.*t3007*t4513*t9893 - 0.183*(-1.*t3007*t3265*t9893 - 1.*t207*t3920*t9893) - 0.15*(t207*t3265*t9893 - 1.*t3007*t3920*t9893);
  p_output1(16)=t1037*t2192 + t1964*t9924 + t3095*t9936 + t207*t4216*t9936 - 1.*t3007*t4513*t9936 - 0.183*(-1.*t3007*t3265*t9936 - 1.*t207*t3920*t9936) - 0.15*(t207*t3265*t9936 - 1.*t3007*t3920*t9936) - 0.13205*(t2192*t812 + t9943);
  p_output1(17)=t10004 - 1.*t1037*t1764*t727 + t1175*t1964*t727 + t9985 + t9986 + t9987 + t9992 + t9997;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=t10013*t3095 - 0.183*(-1.*t10013*t3007*t3265 - 1.*t10013*t207*t3920) - 0.15*(t10013*t207*t3265 - 1.*t10013*t3007*t3920) + t10013*t207*t4216 - 1.*t10013*t3007*t4513 + 0.047*t1894*t5179 - 0.13205*t5806 - 0.047*t5432*t812;
  p_output1(37)=-0.13205*t10048 + t10043*t3095 - 0.183*(-1.*t10043*t3007*t3265 - 1.*t10043*t207*t3920) - 0.15*(t10043*t207*t3265 - 1.*t10043*t3007*t3920) + t10043*t207*t4216 - 1.*t10043*t3007*t4513 - 0.047*t10036*t812 + 0.047*t1894*t9924;
  p_output1(38)=t10004 + 0.047*t1175*t1894*t727 - 0.047*t1764*t727*t812 + t9985 + t9986 + t9987 + t9992 + t9997;
  p_output1(39)=-0.183*(t10122 + t10102*t3265) + t10102*t4513 - 0.183*t207*t5806 + t4216*t6551 - 0.15*(t10102*t3920 + t6859) - 0.183*t1739*t3007*t727;
  p_output1(40)=-0.183*t10048*t207 - 0.183*(t10167 + t10144*t3265) - 0.15*(t10156 + t10144*t3920) + t10151*t4216 + t10144*t4513 - 0.183*t3007*t727*t738;
  p_output1(41)=0.183*t1312*t3007 - 0.183*(t10202 + t10179*t3265) - 0.15*(t10189 + t10179*t3920) + t10185*t4216 + t10179*t4513 - 0.183*t207*t9990;
  p_output1(42)=t10215*t6179 - 0.183*(t10122 - 1.*t3265*t6179) + t10219*t6551 - 0.15*t6894;
  p_output1(43)=t10151*t10219 + t10215*t10233 - 0.183*(t10167 - 1.*t10233*t3265) - 0.15*(t10156 - 1.*t10233*t3920);
  p_output1(44)=t10185*t10219 + t10215*t10262 - 0.183*(t10202 - 1.*t10262*t3265) - 0.15*(t10189 - 1.*t10262*t3920);
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



