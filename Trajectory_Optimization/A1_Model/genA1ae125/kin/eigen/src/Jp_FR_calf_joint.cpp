/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:14 GMT-05:00
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
  double t777;
  double t1335;
  double t1448;
  double t1186;
  double t1480;
  double t882;
  double t1396;
  double t1503;
  double t1618;
  double t1678;
  double t1818;
  double t2095;
  double t2165;
  double t257;
  double t2520;
  double t2560;
  double t2639;
  double t240;
  double t2651;
  double t2915;
  double t2928;
  double t2937;
  double t2972;
  double t3078;
  double t3103;
  double t3145;
  double t2840;
  double t2885;
  double t2886;
  double t272;
  double t283;
  double t291;
  double t296;
  double t961;
  double t993;
  double t1068;
  double t1102;
  double t2169;
  double t2180;
  double t3509;
  double t3546;
  double t3557;
  double t3626;
  double t3627;
  double t3634;
  double t2762;
  double t2774;
  double t4066;
  double t4069;
  double t4070;
  double t2964;
  double t2983;
  double t2994;
  double t3158;
  double t3161;
  double t3227;
  double t4112;
  double t4141;
  double t4185;
  double t4087;
  double t4098;
  double t4099;
  double t5034;
  double t5035;
  double t5041;
  double t5321;
  double t5421;
  double t5483;
  double t5222;
  double t5284;
  double t5285;
  double t6012;
  double t6036;
  double t6043;
  double t6178;
  double t6248;
  double t6251;
  double t6103;
  double t6150;
  double t6161;
  double t7113;
  double t7136;
  double t7176;
  double t7400;
  double t7461;
  double t7721;
  double t7192;
  double t7219;
  double t7339;
  double t8383;
  double t8406;
  double t8466;
  double t8862;
  double t8906;
  double t9070;
  double t9574;
  double t9575;
  double t9579;
  double t2271;
  double t9636;
  double t9638;
  double t9686;
  double t9694;
  double t9701;
  double t9726;
  double t9729;
  double t9604;
  double t9762;
  double t9764;
  double t9766;
  double t9772;
  double t9776;
  double t9673;
  double t9676;
  double t9679;
  double t9683;
  double t9703;
  double t9704;
  double t9705;
  double t9706;
  double t9709;
  double t9710;
  double t9711;
  double t9712;
  double t9714;
  double t9715;
  double t9718;
  double t4198;
  double t9801;
  double t9802;
  double t9803;
  double t9769;
  double t9770;
  double t9815;
  double t9830;
  double t9832;
  double t9836;
  double t9837;
  double t9857;
  double t9858;
  double t9859;
  double t9861;
  double t9863;
  double t9866;
  double t4201;
  double t4208;
  double t9809;
  double t9882;
  double t9883;
  double t9884;
  double t9886;
  double t9887;
  double t9839;
  double t9896;
  double t9897;
  double t9899;
  double t9849;
  double t9872;
  double t9914;
  double t9915;
  double t9916;
  double t9877;
  t777 = Sin(var1[3]);
  t1335 = Cos(var1[5]);
  t1448 = Sin(var1[4]);
  t1186 = Cos(var1[3]);
  t1480 = Sin(var1[5]);
  t882 = Cos(var1[6]);
  t1396 = -1.*t1186*t1335;
  t1503 = -1.*t777*t1448*t1480;
  t1618 = t1396 + t1503;
  t1678 = -1.*t1335*t777*t1448;
  t1818 = t1186*t1480;
  t2095 = t1678 + t1818;
  t2165 = Sin(var1[6]);
  t257 = Cos(var1[7]);
  t2520 = t882*t2095;
  t2560 = -1.*t1618*t2165;
  t2639 = t2520 + t2560;
  t240 = Cos(var1[4]);
  t2651 = Sin(var1[7]);
  t2915 = Cos(var1[8]);
  t2928 = -1.*t2915;
  t2937 = 1. + t2928;
  t2972 = Sin(var1[8]);
  t3078 = -1.*t240*t257*t777;
  t3103 = -1.*t2639*t2651;
  t3145 = t3078 + t3103;
  t2840 = t257*t2639;
  t2885 = -1.*t240*t777*t2651;
  t2886 = t2840 + t2885;
  t272 = -1.*t257;
  t283 = 1. + t272;
  t291 = 0.183*t283;
  t296 = 0. + t291;
  t961 = -1.*t882;
  t993 = 1. + t961;
  t1068 = -0.047*t993;
  t1102 = 0. + t1068;
  t2169 = 0.047*t2165;
  t2180 = 0. + t2169;
  t3509 = -1.*t1335*t777;
  t3546 = t1186*t1448*t1480;
  t3557 = t3509 + t3546;
  t3626 = t1186*t1335*t1448;
  t3627 = t777*t1480;
  t3634 = t3626 + t3627;
  t2762 = 0.183*t2651;
  t2774 = 0. + t2762;
  t4066 = t882*t3634;
  t4069 = -1.*t3557*t2165;
  t4070 = t4066 + t4069;
  t2964 = -0.25*t2937;
  t2983 = 0.183*t2972;
  t2994 = 0. + t2964 + t2983;
  t3158 = 0.183*t2937;
  t3161 = 0.25*t2972;
  t3227 = 0. + t3158 + t3161;
  t4112 = t1186*t240*t257;
  t4141 = -1.*t4070*t2651;
  t4185 = t4112 + t4141;
  t4087 = t257*t4070;
  t4098 = t1186*t240*t2651;
  t4099 = t4087 + t4098;
  t5034 = t1186*t240*t1335*t882;
  t5035 = -1.*t1186*t240*t1480*t2165;
  t5041 = t5034 + t5035;
  t5321 = -1.*t1186*t257*t1448;
  t5421 = -1.*t5041*t2651;
  t5483 = t5321 + t5421;
  t5222 = t257*t5041;
  t5284 = -1.*t1186*t1448*t2651;
  t5285 = t5222 + t5284;
  t6012 = t240*t1335*t882*t777;
  t6036 = -1.*t240*t777*t1480*t2165;
  t6043 = t6012 + t6036;
  t6178 = -1.*t257*t777*t1448;
  t6248 = -1.*t6043*t2651;
  t6251 = t6178 + t6248;
  t6103 = t257*t6043;
  t6150 = -1.*t777*t1448*t2651;
  t6161 = t6103 + t6150;
  t7113 = -1.*t1335*t882*t1448;
  t7136 = t1448*t1480*t2165;
  t7176 = t7113 + t7136;
  t7400 = -1.*t240*t257;
  t7461 = -1.*t7176*t2651;
  t7721 = t7400 + t7461;
  t7192 = t257*t7176;
  t7219 = -1.*t240*t2651;
  t7339 = t7192 + t7219;
  t8383 = t1335*t777;
  t8406 = -1.*t1186*t1448*t1480;
  t8466 = t8383 + t8406;
  t8862 = t882*t8466;
  t8906 = -1.*t3634*t2165;
  t9070 = t8862 + t8906;
  t9574 = t1335*t777*t1448;
  t9575 = -1.*t1186*t1480;
  t9579 = t9574 + t9575;
  t2271 = t882*t1618;
  t9636 = -1.*t9579*t2165;
  t9638 = t2271 + t9636;
  t9686 = -1.*t240*t882*t1480;
  t9694 = -1.*t240*t1335*t2165;
  t9701 = t9686 + t9694;
  t9726 = -1.*t882*t3557;
  t9729 = t9726 + t8906;
  t9604 = t882*t9579;
  t9762 = t1186*t1335;
  t9764 = t777*t1448*t1480;
  t9766 = t9762 + t9764;
  t9772 = -1.*t882*t9766;
  t9776 = t9772 + t9636;
  t9673 = t240*t1335*t882;
  t9676 = -1.*t240*t1480*t2165;
  t9679 = t9673 + t9676;
  t9683 = -0.13205*t9679;
  t9703 = t9701*t2774;
  t9704 = t257*t9701*t2994;
  t9705 = -1.*t9701*t2651*t3227;
  t9706 = -1.*t2915*t9701*t2651;
  t9709 = -1.*t257*t9701*t2972;
  t9710 = t9706 + t9709;
  t9711 = 0.183*t9710;
  t9712 = t257*t2915*t9701;
  t9714 = -1.*t9701*t2651*t2972;
  t9715 = t9712 + t9714;
  t9718 = -0.25*t9715;
  t4198 = t2915*t4185;
  t9801 = -1.*t257*t4070;
  t9802 = -1.*t1186*t240*t2651;
  t9803 = t9801 + t9802;
  t9769 = -1.*t9766*t2165;
  t9770 = t9604 + t9769;
  t9815 = t240*t257*t777;
  t9830 = -1.*t9770*t2651;
  t9832 = t9815 + t9830;
  t9836 = -1.*t257*t9770;
  t9837 = t9836 + t2885;
  t9857 = -1.*t257*t1448;
  t9858 = -1.*t9679*t2651;
  t9859 = t9857 + t9858;
  t9861 = -1.*t257*t9679;
  t9863 = t1448*t2651;
  t9866 = t9861 + t9863;
  t4201 = -1.*t4099*t2972;
  t4208 = t4198 + t4201;
  t9809 = -1.*t4185*t2972;
  t9882 = 0.183*t2915;
  t9883 = -0.25*t2972;
  t9884 = t9882 + t9883;
  t9886 = 0.25*t2915;
  t9887 = t9886 + t2983;
  t9839 = t2915*t9832;
  t9896 = t257*t9770;
  t9897 = t240*t777*t2651;
  t9899 = t9896 + t9897;
  t9849 = -1.*t9832*t2972;
  t9872 = t2915*t9859;
  t9914 = t257*t9679;
  t9915 = -1.*t1448*t2651;
  t9916 = t9914 + t9915;
  t9877 = -1.*t9859*t2972;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1102*t1618 + t2095*t2180 - 0.13205*(t2095*t2165 + t2271) + t2639*t2774 + t2886*t2994 + 0.183*(-1.*t2886*t2972 + t2915*t3145) - 0.25*(t2886*t2915 + t2972*t3145) + t3145*t3227 - 1.*t240*t296*t777;
  p_output1(10)=t1186*t240*t296 + t1102*t3557 + t2180*t3634 + t2774*t4070 + t2994*t4099 + t3227*t4185 - 0.25*(t2915*t4099 + t2972*t4185) + 0.183*t4208 - 0.13205*(t2165*t3634 + t3557*t882);
  p_output1(11)=0;
  p_output1(12)=t1102*t1186*t1480*t240 + t1186*t1335*t2180*t240 - 1.*t1186*t1448*t296 + t2774*t5041 + t2994*t5285 + t3227*t5483 + 0.183*(-1.*t2972*t5285 + t2915*t5483) - 0.25*(t2915*t5285 + t2972*t5483) - 0.13205*(t1186*t1335*t2165*t240 + t1186*t1480*t240*t882);
  p_output1(13)=t2774*t6043 + t2994*t6161 + t3227*t6251 + 0.183*(-1.*t2972*t6161 + t2915*t6251) - 0.25*(t2915*t6161 + t2972*t6251) + t1102*t1480*t240*t777 + t1335*t2180*t240*t777 - 1.*t1448*t296*t777 - 0.13205*(t1335*t2165*t240*t777 + t1480*t240*t777*t882);
  p_output1(14)=-1.*t1102*t1448*t1480 - 1.*t1335*t1448*t2180 - 1.*t240*t296 + t2774*t7176 + t2994*t7339 + t3227*t7721 + 0.183*(-1.*t2972*t7339 + t2915*t7721) - 0.25*(t2915*t7339 + t2972*t7721) - 0.13205*(-1.*t1335*t1448*t2165 - 1.*t1448*t1480*t882);
  p_output1(15)=t1102*t3634 + t2180*t8466 - 0.13205*(t4066 + t2165*t8466) + t2774*t9070 + t257*t2994*t9070 - 1.*t2651*t3227*t9070 + 0.183*(-1.*t2651*t2915*t9070 - 1.*t257*t2972*t9070) - 0.25*(t257*t2915*t9070 - 1.*t2651*t2972*t9070);
  p_output1(16)=t1618*t2180 + t1102*t9579 - 0.13205*(t1618*t2165 + t9604) + t2774*t9638 + t257*t2994*t9638 - 1.*t2651*t3227*t9638 + 0.183*(-1.*t2651*t2915*t9638 - 1.*t257*t2972*t9638) - 0.25*(t257*t2915*t9638 - 1.*t2651*t2972*t9638);
  p_output1(17)=t1102*t1335*t240 - 1.*t1480*t2180*t240 + t9683 + t9703 + t9704 + t9705 + t9711 + t9718;
  p_output1(18)=-0.047*t2165*t3557 - 0.13205*t4070 + 0.047*t3634*t882 + t2774*t9729 + t257*t2994*t9729 - 1.*t2651*t3227*t9729 + 0.183*(-1.*t2651*t2915*t9729 - 1.*t257*t2972*t9729) - 0.25*(t257*t2915*t9729 - 1.*t2651*t2972*t9729);
  p_output1(19)=0.047*t882*t9579 - 0.047*t2165*t9766 - 0.13205*t9770 + t2774*t9776 + t257*t2994*t9776 - 1.*t2651*t3227*t9776 + 0.183*(-1.*t2651*t2915*t9776 - 1.*t257*t2972*t9776) - 0.25*(t257*t2915*t9776 - 1.*t2651*t2972*t9776);
  p_output1(20)=-0.047*t1480*t2165*t240 + 0.047*t1335*t240*t882 + t9683 + t9703 + t9704 + t9705 + t9711 + t9718;
  p_output1(21)=0.183*t1186*t240*t2651 + 0.183*t257*t4070 + t2994*t4185 + t3227*t9803 - 0.25*(t4198 + t2972*t9803) + 0.183*(t2915*t9803 + t9809);
  p_output1(22)=0.183*t240*t2651*t777 + 0.183*t257*t9770 + t2994*t9832 + t3227*t9837 - 0.25*(t2972*t9837 + t9839) + 0.183*(t2915*t9837 + t9849);
  p_output1(23)=-0.183*t1448*t2651 + 0.183*t257*t9679 + t2994*t9859 + t3227*t9866 - 0.25*(t2972*t9866 + t9872) + 0.183*(t2915*t9866 + t9877);
  p_output1(24)=-0.25*t4208 + 0.183*(-1.*t2915*t4099 + t9809) + t4099*t9884 + t4185*t9887;
  p_output1(25)=t9832*t9887 + t9884*t9899 + 0.183*(t9849 - 1.*t2915*t9899) - 0.25*(t9839 - 1.*t2972*t9899);
  p_output1(26)=t9859*t9887 + t9884*t9916 + 0.183*(t9877 - 1.*t2915*t9916) - 0.25*(t9872 - 1.*t2972*t9916);
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



