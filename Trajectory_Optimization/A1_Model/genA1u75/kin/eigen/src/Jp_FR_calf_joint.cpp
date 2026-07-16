/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint.h"

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
  double t733;
  double t1083;
  double t1139;
  double t1052;
  double t1172;
  double t856;
  double t1090;
  double t1364;
  double t1371;
  double t1565;
  double t1840;
  double t1846;
  double t1869;
  double t164;
  double t179;
  double t2954;
  double t2991;
  double t3018;
  double t3032;
  double t3399;
  double t3408;
  double t3465;
  double t3712;
  double t3134;
  double t3198;
  double t3392;
  double t3776;
  double t3787;
  double t3815;
  double t309;
  double t410;
  double t461;
  double t521;
  double t949;
  double t983;
  double t986;
  double t1044;
  double t1953;
  double t2096;
  double t4757;
  double t4770;
  double t4825;
  double t4904;
  double t4905;
  double t4917;
  double t3048;
  double t3052;
  double t5008;
  double t5050;
  double t5051;
  double t3545;
  double t3715;
  double t3751;
  double t3824;
  double t3826;
  double t3829;
  double t5100;
  double t5118;
  double t5125;
  double t5154;
  double t5211;
  double t5242;
  double t5820;
  double t5823;
  double t5854;
  double t5931;
  double t5932;
  double t6091;
  double t6198;
  double t6225;
  double t6263;
  double t7183;
  double t7208;
  double t7230;
  double t7334;
  double t7421;
  double t7447;
  double t7480;
  double t7494;
  double t7516;
  double t8015;
  double t8031;
  double t8100;
  double t8118;
  double t8170;
  double t8181;
  double t8254;
  double t8255;
  double t8258;
  double t8403;
  double t8476;
  double t8482;
  double t8539;
  double t8545;
  double t8558;
  double t8670;
  double t8722;
  double t8743;
  double t2546;
  double t8825;
  double t8828;
  double t9057;
  double t9061;
  double t9063;
  double t9180;
  double t9181;
  double t8810;
  double t9242;
  double t9299;
  double t9315;
  double t9336;
  double t9340;
  double t9008;
  double t9023;
  double t9041;
  double t9056;
  double t9064;
  double t9066;
  double t9080;
  double t9091;
  double t9099;
  double t9122;
  double t9127;
  double t9130;
  double t9139;
  double t9140;
  double t9144;
  double t5371;
  double t9426;
  double t9434;
  double t9442;
  double t9324;
  double t9333;
  double t9486;
  double t9489;
  double t9495;
  double t9477;
  double t9480;
  double t9561;
  double t9568;
  double t9570;
  double t9540;
  double t9553;
  double t9557;
  double t5384;
  double t5416;
  double t9468;
  double t9642;
  double t9649;
  double t9651;
  double t9659;
  double t9661;
  double t9502;
  double t9705;
  double t9707;
  double t9709;
  double t9520;
  double t9573;
  double t9747;
  double t9749;
  double t9753;
  double t9624;
  t733 = Sin(var1[3]);
  t1083 = Cos(var1[5]);
  t1139 = Sin(var1[4]);
  t1052 = Cos(var1[3]);
  t1172 = Sin(var1[5]);
  t856 = Cos(var1[6]);
  t1090 = -1.*t1052*t1083;
  t1364 = -1.*t733*t1139*t1172;
  t1371 = t1090 + t1364;
  t1565 = -1.*t1083*t733*t1139;
  t1840 = t1052*t1172;
  t1846 = t1565 + t1840;
  t1869 = Sin(var1[6]);
  t164 = Cos(var1[4]);
  t179 = Cos(var1[7]);
  t2954 = t856*t1846;
  t2991 = -1.*t1371*t1869;
  t3018 = t2954 + t2991;
  t3032 = Sin(var1[7]);
  t3399 = Cos(var1[8]);
  t3408 = -1.*t3399;
  t3465 = 1. + t3408;
  t3712 = Sin(var1[8]);
  t3134 = -1.*t164*t179*t733;
  t3198 = -1.*t3018*t3032;
  t3392 = t3134 + t3198;
  t3776 = t179*t3018;
  t3787 = -1.*t164*t733*t3032;
  t3815 = t3776 + t3787;
  t309 = -1.*t179;
  t410 = 1. + t309;
  t461 = 0.183*t410;
  t521 = 0. + t461;
  t949 = -1.*t856;
  t983 = 1. + t949;
  t986 = -0.047*t983;
  t1044 = 0. + t986;
  t1953 = 0.047*t1869;
  t2096 = 0. + t1953;
  t4757 = -1.*t1083*t733;
  t4770 = t1052*t1139*t1172;
  t4825 = t4757 + t4770;
  t4904 = t1052*t1083*t1139;
  t4905 = t733*t1172;
  t4917 = t4904 + t4905;
  t3048 = 0.183*t3032;
  t3052 = 0. + t3048;
  t5008 = t856*t4917;
  t5050 = -1.*t4825*t1869;
  t5051 = t5008 + t5050;
  t3545 = 0.183*t3465;
  t3715 = 0.15*t3712;
  t3751 = 0. + t3545 + t3715;
  t3824 = -0.15*t3465;
  t3826 = 0.183*t3712;
  t3829 = 0. + t3824 + t3826;
  t5100 = t1052*t164*t179;
  t5118 = -1.*t5051*t3032;
  t5125 = t5100 + t5118;
  t5154 = t179*t5051;
  t5211 = t1052*t164*t3032;
  t5242 = t5154 + t5211;
  t5820 = t1052*t164*t1083*t856;
  t5823 = -1.*t1052*t164*t1172*t1869;
  t5854 = t5820 + t5823;
  t5931 = -1.*t1052*t179*t1139;
  t5932 = -1.*t5854*t3032;
  t6091 = t5931 + t5932;
  t6198 = t179*t5854;
  t6225 = -1.*t1052*t1139*t3032;
  t6263 = t6198 + t6225;
  t7183 = t164*t1083*t856*t733;
  t7208 = -1.*t164*t733*t1172*t1869;
  t7230 = t7183 + t7208;
  t7334 = -1.*t179*t733*t1139;
  t7421 = -1.*t7230*t3032;
  t7447 = t7334 + t7421;
  t7480 = t179*t7230;
  t7494 = -1.*t733*t1139*t3032;
  t7516 = t7480 + t7494;
  t8015 = -1.*t1083*t856*t1139;
  t8031 = t1139*t1172*t1869;
  t8100 = t8015 + t8031;
  t8118 = -1.*t164*t179;
  t8170 = -1.*t8100*t3032;
  t8181 = t8118 + t8170;
  t8254 = t179*t8100;
  t8255 = -1.*t164*t3032;
  t8258 = t8254 + t8255;
  t8403 = t1083*t733;
  t8476 = -1.*t1052*t1139*t1172;
  t8482 = t8403 + t8476;
  t8539 = t856*t8482;
  t8545 = -1.*t4917*t1869;
  t8558 = t8539 + t8545;
  t8670 = t1083*t733*t1139;
  t8722 = -1.*t1052*t1172;
  t8743 = t8670 + t8722;
  t2546 = t856*t1371;
  t8825 = -1.*t8743*t1869;
  t8828 = t2546 + t8825;
  t9057 = -1.*t164*t856*t1172;
  t9061 = -1.*t164*t1083*t1869;
  t9063 = t9057 + t9061;
  t9180 = -1.*t856*t4825;
  t9181 = t9180 + t8545;
  t8810 = t856*t8743;
  t9242 = t1052*t1083;
  t9299 = t733*t1139*t1172;
  t9315 = t9242 + t9299;
  t9336 = -1.*t856*t9315;
  t9340 = t9336 + t8825;
  t9008 = t164*t1083*t856;
  t9023 = -1.*t164*t1172*t1869;
  t9041 = t9008 + t9023;
  t9056 = -0.11079*t9041;
  t9064 = t9063*t3052;
  t9066 = -1.*t9063*t3032*t3751;
  t9080 = t179*t9063*t3829;
  t9091 = -1.*t3399*t9063*t3032;
  t9099 = -1.*t179*t9063*t3712;
  t9122 = t9091 + t9099;
  t9127 = 0.183*t9122;
  t9130 = t179*t3399*t9063;
  t9139 = -1.*t9063*t3032*t3712;
  t9140 = t9130 + t9139;
  t9144 = -0.15*t9140;
  t5371 = t3399*t5125;
  t9426 = -1.*t179*t5051;
  t9434 = -1.*t1052*t164*t3032;
  t9442 = t9426 + t9434;
  t9324 = -1.*t9315*t1869;
  t9333 = t8810 + t9324;
  t9486 = t164*t179*t733;
  t9489 = -1.*t9333*t3032;
  t9495 = t9486 + t9489;
  t9477 = -1.*t179*t9333;
  t9480 = t9477 + t3787;
  t9561 = -1.*t179*t1139;
  t9568 = -1.*t9041*t3032;
  t9570 = t9561 + t9568;
  t9540 = -1.*t179*t9041;
  t9553 = t1139*t3032;
  t9557 = t9540 + t9553;
  t5384 = -1.*t5242*t3712;
  t5416 = t5371 + t5384;
  t9468 = -1.*t5125*t3712;
  t9642 = 0.183*t3399;
  t9649 = -0.15*t3712;
  t9651 = t9642 + t9649;
  t9659 = 0.15*t3399;
  t9661 = t9659 + t3826;
  t9502 = t3399*t9495;
  t9705 = t179*t9333;
  t9707 = t164*t733*t3032;
  t9709 = t9705 + t9707;
  t9520 = -1.*t9495*t3712;
  t9573 = t3399*t9570;
  t9747 = t179*t9041;
  t9749 = -1.*t1139*t3032;
  t9753 = t9747 + t9749;
  t9624 = -1.*t9570*t3712;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1044*t1371 + t1846*t2096 - 0.11079*(t1846*t1869 + t2546) + t3018*t3052 + t3392*t3751 - 0.15*(t3392*t3712 + t3399*t3815) + 0.183*(t3392*t3399 - 1.*t3712*t3815) + t3815*t3829 - 1.*t164*t521*t733;
  p_output1(10)=t1044*t4825 + t2096*t4917 + t3052*t5051 + t3751*t5125 + t1052*t164*t521 + t3829*t5242 - 0.15*(t3712*t5125 + t3399*t5242) + 0.183*t5416 - 0.11079*(t1869*t4917 + t4825*t856);
  p_output1(11)=0;
  p_output1(12)=t1044*t1052*t1172*t164 + t1052*t1083*t164*t2096 - 1.*t1052*t1139*t521 + t3052*t5854 + t3751*t6091 + t3829*t6263 - 0.15*(t3712*t6091 + t3399*t6263) + 0.183*(t3399*t6091 - 1.*t3712*t6263) - 0.11079*(t1052*t1083*t164*t1869 + t1052*t1172*t164*t856);
  p_output1(13)=t3052*t7230 + t1044*t1172*t164*t733 + t1083*t164*t2096*t733 - 1.*t1139*t521*t733 + t3751*t7447 + t3829*t7516 - 0.15*(t3712*t7447 + t3399*t7516) + 0.183*(t3399*t7447 - 1.*t3712*t7516) - 0.11079*(t1083*t164*t1869*t733 + t1172*t164*t733*t856);
  p_output1(14)=-1.*t1044*t1139*t1172 - 1.*t1083*t1139*t2096 - 1.*t164*t521 + t3052*t8100 + t3751*t8181 + t3829*t8258 - 0.15*(t3712*t8181 + t3399*t8258) + 0.183*(t3399*t8181 - 1.*t3712*t8258) - 0.11079*(-1.*t1083*t1139*t1869 - 1.*t1139*t1172*t856);
  p_output1(15)=t1044*t4917 + t2096*t8482 - 0.11079*(t5008 + t1869*t8482) + t3052*t8558 - 1.*t3032*t3751*t8558 + t179*t3829*t8558 + 0.183*(-1.*t3032*t3399*t8558 - 1.*t179*t3712*t8558) - 0.15*(t179*t3399*t8558 - 1.*t3032*t3712*t8558);
  p_output1(16)=t1371*t2096 + t1044*t8743 - 0.11079*(t1371*t1869 + t8810) + t3052*t8828 - 1.*t3032*t3751*t8828 + t179*t3829*t8828 + 0.183*(-1.*t3032*t3399*t8828 - 1.*t179*t3712*t8828) - 0.15*(t179*t3399*t8828 - 1.*t3032*t3712*t8828);
  p_output1(17)=t1044*t1083*t164 - 1.*t1172*t164*t2096 + t9056 + t9064 + t9066 + t9080 + t9127 + t9144;
  p_output1(18)=-0.047*t1869*t4825 - 0.11079*t5051 + 0.047*t4917*t856 + t3052*t9181 - 1.*t3032*t3751*t9181 + t179*t3829*t9181 + 0.183*(-1.*t3032*t3399*t9181 - 1.*t179*t3712*t9181) - 0.15*(t179*t3399*t9181 - 1.*t3032*t3712*t9181);
  p_output1(19)=0.047*t856*t8743 - 0.047*t1869*t9315 - 0.11079*t9333 + t3052*t9340 - 1.*t3032*t3751*t9340 + t179*t3829*t9340 + 0.183*(-1.*t3032*t3399*t9340 - 1.*t179*t3712*t9340) - 0.15*(t179*t3399*t9340 - 1.*t3032*t3712*t9340);
  p_output1(20)=-0.047*t1172*t164*t1869 + 0.047*t1083*t164*t856 + t9056 + t9064 + t9066 + t9080 + t9127 + t9144;
  p_output1(21)=0.183*t1052*t164*t3032 + 0.183*t179*t5051 + t3829*t5125 + t3751*t9442 - 0.15*(t5371 + t3712*t9442) + 0.183*(t3399*t9442 + t9468);
  p_output1(22)=0.183*t164*t3032*t733 + 0.183*t179*t9333 + t3751*t9480 + t3829*t9495 - 0.15*(t3712*t9480 + t9502) + 0.183*(t3399*t9480 + t9520);
  p_output1(23)=-0.183*t1139*t3032 + 0.183*t179*t9041 + t3751*t9557 + t3829*t9570 - 0.15*(t3712*t9557 + t9573) + 0.183*(t3399*t9557 + t9624);
  p_output1(24)=-0.15*t5416 + 0.183*(-1.*t3399*t5242 + t9468) + t5242*t9651 + t5125*t9661;
  p_output1(25)=t9495*t9661 + t9651*t9709 + 0.183*(t9520 - 1.*t3399*t9709) - 0.15*(t9502 - 1.*t3712*t9709);
  p_output1(26)=t9570*t9661 + t9651*t9753 + 0.183*(t9624 - 1.*t3399*t9753) - 0.15*(t9573 - 1.*t3712*t9753);
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
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


       
Eigen::Matrix<double,3,18> Jp_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



