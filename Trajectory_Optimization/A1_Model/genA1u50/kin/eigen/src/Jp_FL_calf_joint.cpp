/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint.h"

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
  double t776;
  double t871;
  double t826;
  double t855;
  double t894;
  double t796;
  double t858;
  double t1029;
  double t1347;
  double t1427;
  double t1700;
  double t1846;
  double t1942;
  double t565;
  double t2136;
  double t315;
  double t2401;
  double t2405;
  double t2491;
  double t2583;
  double t2644;
  double t2650;
  double t2818;
  double t3364;
  double t3366;
  double t3506;
  double t3644;
  double t3989;
  double t4146;
  double t316;
  double t317;
  double t536;
  double t537;
  double t810;
  double t814;
  double t1493;
  double t1554;
  double t1686;
  double t1690;
  double t4632;
  double t4634;
  double t4639;
  double t4641;
  double t4642;
  double t4643;
  double t2147;
  double t2154;
  double t2694;
  double t2854;
  double t3247;
  double t5126;
  double t5136;
  double t5144;
  double t3518;
  double t3565;
  double t3572;
  double t5506;
  double t5532;
  double t5536;
  double t5632;
  double t5678;
  double t5726;
  double t8725;
  double t8730;
  double t8733;
  double t8735;
  double t8737;
  double t8741;
  double t8743;
  double t8744;
  double t8746;
  double t8785;
  double t8786;
  double t8789;
  double t8793;
  double t8797;
  double t8798;
  double t8800;
  double t8801;
  double t8802;
  double t8827;
  double t8828;
  double t8829;
  double t8831;
  double t8832;
  double t8833;
  double t8835;
  double t8838;
  double t8840;
  double t8856;
  double t8857;
  double t8858;
  double t8860;
  double t8861;
  double t8862;
  double t8885;
  double t8887;
  double t8888;
  double t1967;
  double t8893;
  double t8894;
  double t8917;
  double t8918;
  double t8919;
  double t8952;
  double t8955;
  double t8970;
  double t8972;
  double t8975;
  double t8977;
  double t8980;
  double t8898;
  double t8920;
  double t8921;
  double t8922;
  double t8923;
  double t8924;
  double t8925;
  double t8926;
  double t8927;
  double t8928;
  double t8929;
  double t8930;
  double t8931;
  double t8938;
  double t8944;
  double t8946;
  double t9003;
  double t9005;
  double t9006;
  double t8643;
  double t8984;
  double t8985;
  double t9024;
  double t9025;
  double t9027;
  double t9028;
  double t9030;
  double t9048;
  double t9049;
  double t9050;
  double t9052;
  double t9053;
  double t9054;
  double t6926;
  double t8646;
  double t9016;
  double t9066;
  double t9067;
  double t9068;
  double t9072;
  double t9073;
  double t9080;
  double t9081;
  double t9082;
  double t9036;
  double t9042;
  double t9092;
  double t9093;
  double t9094;
  double t9057;
  double t9062;
  t776 = Sin(var1[3]);
  t871 = Cos(var1[3]);
  t826 = Cos(var1[5]);
  t855 = Sin(var1[4]);
  t894 = Sin(var1[5]);
  t796 = Sin(var1[9]);
  t858 = -1.*t826*t776*t855;
  t1029 = t871*t894;
  t1347 = t858 + t1029;
  t1427 = Cos(var1[9]);
  t1700 = -1.*t871*t826;
  t1846 = -1.*t776*t855*t894;
  t1942 = t1700 + t1846;
  t565 = Cos(var1[4]);
  t2136 = Sin(var1[10]);
  t315 = Cos(var1[10]);
  t2401 = t1427*t1347;
  t2405 = -1.*t796*t1942;
  t2491 = t2401 + t2405;
  t2583 = Cos(var1[11]);
  t2644 = -1.*t2583;
  t2650 = 1. + t2644;
  t2818 = Sin(var1[11]);
  t3364 = -1.*t565*t2136*t776;
  t3366 = t315*t2491;
  t3506 = t3364 + t3366;
  t3644 = -1.*t315*t565*t776;
  t3989 = -1.*t2136*t2491;
  t4146 = t3644 + t3989;
  t316 = -1.*t315;
  t317 = 1. + t316;
  t536 = 0.183*t317;
  t537 = 0. + t536;
  t810 = -0.047*t796;
  t814 = 0. + t810;
  t1493 = -1.*t1427;
  t1554 = 1. + t1493;
  t1686 = 0.047*t1554;
  t1690 = 0. + t1686;
  t4632 = t871*t826*t855;
  t4634 = t776*t894;
  t4639 = t4632 + t4634;
  t4641 = -1.*t826*t776;
  t4642 = t871*t855*t894;
  t4643 = t4641 + t4642;
  t2147 = 0.183*t2136;
  t2154 = 0. + t2147;
  t2694 = -0.1*t2650;
  t2854 = 0.183*t2818;
  t3247 = 0. + t2694 + t2854;
  t5126 = t1427*t4639;
  t5136 = -1.*t796*t4643;
  t5144 = t5126 + t5136;
  t3518 = 0.183*t2650;
  t3565 = 0.1*t2818;
  t3572 = 0. + t3518 + t3565;
  t5506 = t871*t565*t2136;
  t5532 = t315*t5144;
  t5536 = t5506 + t5532;
  t5632 = t315*t871*t565;
  t5678 = -1.*t2136*t5144;
  t5726 = t5632 + t5678;
  t8725 = t1427*t871*t565*t826;
  t8730 = -1.*t871*t565*t796*t894;
  t8733 = t8725 + t8730;
  t8735 = -1.*t871*t2136*t855;
  t8737 = t315*t8733;
  t8741 = t8735 + t8737;
  t8743 = -1.*t315*t871*t855;
  t8744 = -1.*t2136*t8733;
  t8746 = t8743 + t8744;
  t8785 = t1427*t565*t826*t776;
  t8786 = -1.*t565*t796*t776*t894;
  t8789 = t8785 + t8786;
  t8793 = -1.*t2136*t776*t855;
  t8797 = t315*t8789;
  t8798 = t8793 + t8797;
  t8800 = -1.*t315*t776*t855;
  t8801 = -1.*t2136*t8789;
  t8802 = t8800 + t8801;
  t8827 = -1.*t1427*t826*t855;
  t8828 = t796*t855*t894;
  t8829 = t8827 + t8828;
  t8831 = -1.*t565*t2136;
  t8832 = t315*t8829;
  t8833 = t8831 + t8832;
  t8835 = -1.*t315*t565;
  t8838 = -1.*t2136*t8829;
  t8840 = t8835 + t8838;
  t8856 = t826*t776;
  t8857 = -1.*t871*t855*t894;
  t8858 = t8856 + t8857;
  t8860 = -1.*t796*t4639;
  t8861 = t1427*t8858;
  t8862 = t8860 + t8861;
  t8885 = t826*t776*t855;
  t8887 = -1.*t871*t894;
  t8888 = t8885 + t8887;
  t1967 = t1427*t1942;
  t8893 = -1.*t796*t8888;
  t8894 = t8893 + t1967;
  t8917 = -1.*t565*t826*t796;
  t8918 = -1.*t1427*t565*t894;
  t8919 = t8917 + t8918;
  t8952 = -1.*t1427*t4643;
  t8955 = t8860 + t8952;
  t8970 = t871*t826;
  t8972 = t776*t855*t894;
  t8975 = t8970 + t8972;
  t8977 = -1.*t1427*t8975;
  t8980 = t8893 + t8977;
  t8898 = t1427*t8888;
  t8920 = t2154*t8919;
  t8921 = -1.*t2136*t3572*t8919;
  t8922 = t315*t3247*t8919;
  t8923 = t1427*t565*t826;
  t8924 = -1.*t565*t796*t894;
  t8925 = t8923 + t8924;
  t8926 = 0.08953*t8925;
  t8927 = -1.*t2583*t2136*t8919;
  t8928 = -1.*t315*t2818*t8919;
  t8929 = t8927 + t8928;
  t8930 = 0.183*t8929;
  t8931 = t315*t2583*t8919;
  t8938 = -1.*t2136*t2818*t8919;
  t8944 = t8931 + t8938;
  t8946 = -0.1*t8944;
  t9003 = -1.*t871*t565*t2136;
  t9005 = -1.*t315*t5144;
  t9006 = t9003 + t9005;
  t8643 = t2583*t5726;
  t8984 = -1.*t796*t8975;
  t8985 = t8898 + t8984;
  t9024 = -1.*t315*t8985;
  t9025 = t3364 + t9024;
  t9027 = t315*t565*t776;
  t9028 = -1.*t2136*t8985;
  t9030 = t9027 + t9028;
  t9048 = t2136*t855;
  t9049 = -1.*t315*t8925;
  t9050 = t9048 + t9049;
  t9052 = -1.*t315*t855;
  t9053 = -1.*t2136*t8925;
  t9054 = t9052 + t9053;
  t6926 = -1.*t2818*t5536;
  t8646 = t6926 + t8643;
  t9016 = -1.*t2818*t5726;
  t9066 = 0.183*t2583;
  t9067 = -0.1*t2818;
  t9068 = t9066 + t9067;
  t9072 = 0.1*t2583;
  t9073 = t9072 + t2854;
  t9080 = t565*t2136*t776;
  t9081 = t315*t8985;
  t9082 = t9080 + t9081;
  t9036 = t2583*t9030;
  t9042 = -1.*t2818*t9030;
  t9092 = -1.*t2136*t855;
  t9093 = t315*t8925;
  t9094 = t9092 + t9093;
  t9057 = t2583*t9054;
  t9062 = -1.*t2818*t9054;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1690*t1942 + t2154*t2491 + t3247*t3506 + t3572*t4146 + 0.183*(-1.*t2818*t3506 + t2583*t4146) - 0.1*(t2583*t3506 + t2818*t4146) - 1.*t537*t565*t776 + 0.08953*(t1967 + t1347*t796) + t1347*t814;
  p_output1(10)=t1690*t4643 + t2154*t5144 + t3247*t5536 + t3572*t5726 - 0.1*(t2583*t5536 + t2818*t5726) + 0.08953*(t1427*t4643 + t4639*t796) + t4639*t814 + 0.183*t8646 + t537*t565*t871;
  p_output1(11)=0;
  p_output1(12)=t565*t814*t826*t871 - 1.*t537*t855*t871 + t2154*t8733 + t3247*t8741 + t3572*t8746 + 0.183*(-1.*t2818*t8741 + t2583*t8746) - 0.1*(t2583*t8741 + t2818*t8746) + t1690*t565*t871*t894 + 0.08953*(t565*t796*t826*t871 + t1427*t565*t871*t894);
  p_output1(13)=t565*t776*t814*t826 - 1.*t537*t776*t855 + t2154*t8789 + t3247*t8798 + t3572*t8802 + 0.183*(-1.*t2818*t8798 + t2583*t8802) - 0.1*(t2583*t8798 + t2818*t8802) + t1690*t565*t776*t894 + 0.08953*(t565*t776*t796*t826 + t1427*t565*t776*t894);
  p_output1(14)=-1.*t537*t565 - 1.*t814*t826*t855 + t2154*t8829 + t3247*t8833 + t3572*t8840 + 0.183*(-1.*t2818*t8833 + t2583*t8840) - 0.1*(t2583*t8833 + t2818*t8840) - 1.*t1690*t855*t894 + 0.08953*(-1.*t796*t826*t855 - 1.*t1427*t855*t894);
  p_output1(15)=t1690*t4639 + t814*t8858 + 0.08953*(t5126 + t796*t8858) + t2154*t8862 + t315*t3247*t8862 - 1.*t2136*t3572*t8862 - 0.1*(-1.*t2136*t2818*t8862 + t2583*t315*t8862) + 0.183*(-1.*t2136*t2583*t8862 - 1.*t2818*t315*t8862);
  p_output1(16)=t1942*t814 + t1690*t8888 + t2154*t8894 + t315*t3247*t8894 - 1.*t2136*t3572*t8894 - 0.1*(-1.*t2136*t2818*t8894 + t2583*t315*t8894) + 0.183*(-1.*t2136*t2583*t8894 - 1.*t2818*t315*t8894) + 0.08953*(t1942*t796 + t8898);
  p_output1(17)=t1690*t565*t826 + t8920 + t8921 + t8922 + t8926 + t8930 - 1.*t565*t814*t894 + t8946;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1427*t4639 + 0.08953*t5144 + 0.047*t4643*t796 + t2154*t8955 + t315*t3247*t8955 - 1.*t2136*t3572*t8955 - 0.1*(-1.*t2136*t2818*t8955 + t2583*t315*t8955) + 0.183*(-1.*t2136*t2583*t8955 - 1.*t2818*t315*t8955);
  p_output1(28)=-0.047*t1427*t8888 + 0.047*t796*t8975 + t2154*t8980 + t315*t3247*t8980 - 1.*t2136*t3572*t8980 - 0.1*(-1.*t2136*t2818*t8980 + t2583*t315*t8980) + 0.183*(-1.*t2136*t2583*t8980 - 1.*t2818*t315*t8980) + 0.08953*t8985;
  p_output1(29)=-0.047*t1427*t565*t826 + t8920 + t8921 + t8922 + t8926 + t8930 + 0.047*t565*t796*t894 + t8946;
  p_output1(30)=0.183*t315*t5144 + t3247*t5726 + 0.183*t2136*t565*t871 + t3572*t9006 - 0.1*(t8643 + t2818*t9006) + 0.183*(t2583*t9006 + t9016);
  p_output1(31)=0.183*t2136*t565*t776 + 0.183*t315*t8985 + t3572*t9025 + t3247*t9030 - 0.1*(t2818*t9025 + t9036) + 0.183*(t2583*t9025 + t9042);
  p_output1(32)=-0.183*t2136*t855 + 0.183*t315*t8925 + t3572*t9050 + t3247*t9054 - 0.1*(t2818*t9050 + t9057) + 0.183*(t2583*t9050 + t9062);
  p_output1(33)=-0.1*t8646 + 0.183*(-1.*t2583*t5536 + t9016) + t5536*t9068 + t5726*t9073;
  p_output1(34)=t9030*t9073 + t9068*t9082 + 0.183*(t9042 - 1.*t2583*t9082) - 0.1*(t9036 - 1.*t2818*t9082);
  p_output1(35)=t9054*t9073 + t9068*t9094 + 0.183*(t9062 - 1.*t2583*t9094) - 0.1*(t9057 - 1.*t2818*t9094);
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


       
Eigen::Matrix<double,3,18> Jp_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



