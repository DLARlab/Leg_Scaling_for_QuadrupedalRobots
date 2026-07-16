/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:11 GMT-05:00
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
  double t244;
  double t673;
  double t664;
  double t665;
  double t674;
  double t326;
  double t670;
  double t675;
  double t676;
  double t678;
  double t690;
  double t691;
  double t693;
  double t237;
  double t926;
  double t172;
  double t2115;
  double t2785;
  double t2789;
  double t4033;
  double t4072;
  double t4496;
  double t6703;
  double t6749;
  double t6750;
  double t6752;
  double t6770;
  double t6776;
  double t6778;
  double t188;
  double t212;
  double t216;
  double t222;
  double t401;
  double t422;
  double t680;
  double t686;
  double t688;
  double t689;
  double t6815;
  double t6816;
  double t6819;
  double t6821;
  double t6822;
  double t6823;
  double t1167;
  double t1171;
  double t6696;
  double t6716;
  double t6743;
  double t6839;
  double t6840;
  double t6841;
  double t6758;
  double t6759;
  double t6760;
  double t6848;
  double t6850;
  double t6855;
  double t6859;
  double t6861;
  double t6862;
  double t6887;
  double t6888;
  double t6889;
  double t6891;
  double t6892;
  double t6893;
  double t6895;
  double t6896;
  double t6897;
  double t6922;
  double t6923;
  double t6924;
  double t6926;
  double t6927;
  double t6928;
  double t6930;
  double t6931;
  double t6933;
  double t6959;
  double t6961;
  double t6962;
  double t6964;
  double t6965;
  double t6966;
  double t6968;
  double t6969;
  double t6970;
  double t6986;
  double t6987;
  double t6988;
  double t6990;
  double t6991;
  double t6992;
  double t7024;
  double t7025;
  double t7026;
  double t760;
  double t7029;
  double t7030;
  double t7054;
  double t7055;
  double t7056;
  double t7078;
  double t7080;
  double t7100;
  double t7104;
  double t7105;
  double t7108;
  double t7109;
  double t7034;
  double t7057;
  double t7058;
  double t7059;
  double t7060;
  double t7061;
  double t7062;
  double t7063;
  double t7066;
  double t7067;
  double t7068;
  double t7069;
  double t7070;
  double t7071;
  double t7072;
  double t7074;
  double t7132;
  double t7133;
  double t7134;
  double t6865;
  double t7114;
  double t7115;
  double t7149;
  double t7150;
  double t7152;
  double t7153;
  double t7154;
  double t7167;
  double t7168;
  double t7169;
  double t7171;
  double t7172;
  double t7173;
  double t6864;
  double t6866;
  double t7143;
  double t7184;
  double t7185;
  double t7186;
  double t7188;
  double t7189;
  double t7196;
  double t7197;
  double t7198;
  double t7157;
  double t7161;
  double t7208;
  double t7209;
  double t7210;
  double t7176;
  double t7180;
  t244 = Sin(var1[3]);
  t673 = Cos(var1[3]);
  t664 = Cos(var1[5]);
  t665 = Sin(var1[4]);
  t674 = Sin(var1[5]);
  t326 = Sin(var1[12]);
  t670 = -1.*t664*t244*t665;
  t675 = t673*t674;
  t676 = t670 + t675;
  t678 = Cos(var1[12]);
  t690 = -1.*t673*t664;
  t691 = -1.*t244*t665*t674;
  t693 = t690 + t691;
  t237 = Cos(var1[4]);
  t926 = Sin(var1[13]);
  t172 = Cos(var1[13]);
  t2115 = t678*t676;
  t2785 = -1.*t326*t693;
  t2789 = t2115 + t2785;
  t4033 = Cos(var1[14]);
  t4072 = -1.*t4033;
  t4496 = 1. + t4072;
  t6703 = Sin(var1[14]);
  t6749 = -1.*t237*t926*t244;
  t6750 = t172*t2789;
  t6752 = t6749 + t6750;
  t6770 = -1.*t172*t237*t244;
  t6776 = -1.*t926*t2789;
  t6778 = t6770 + t6776;
  t188 = -1.*t172;
  t212 = 1. + t188;
  t216 = -0.183*t212;
  t222 = 0. + t216;
  t401 = 0.047*t326;
  t422 = 0. + t401;
  t680 = -1.*t678;
  t686 = 1. + t680;
  t688 = -0.047*t686;
  t689 = 0. + t688;
  t6815 = t673*t664*t665;
  t6816 = t244*t674;
  t6819 = t6815 + t6816;
  t6821 = -1.*t664*t244;
  t6822 = t673*t665*t674;
  t6823 = t6821 + t6822;
  t1167 = -0.183*t926;
  t1171 = 0. + t1167;
  t6696 = -0.1*t4496;
  t6716 = -0.183*t6703;
  t6743 = 0. + t6696 + t6716;
  t6839 = t678*t6819;
  t6840 = -1.*t326*t6823;
  t6841 = t6839 + t6840;
  t6758 = -0.183*t4496;
  t6759 = 0.1*t6703;
  t6760 = 0. + t6758 + t6759;
  t6848 = t673*t237*t926;
  t6850 = t172*t6841;
  t6855 = t6848 + t6850;
  t6859 = t172*t673*t237;
  t6861 = -1.*t926*t6841;
  t6862 = t6859 + t6861;
  t6887 = t678*t673*t237*t664;
  t6888 = -1.*t673*t237*t326*t674;
  t6889 = t6887 + t6888;
  t6891 = -1.*t673*t926*t665;
  t6892 = t172*t6889;
  t6893 = t6891 + t6892;
  t6895 = -1.*t172*t673*t665;
  t6896 = -1.*t926*t6889;
  t6897 = t6895 + t6896;
  t6922 = t678*t237*t664*t244;
  t6923 = -1.*t237*t326*t244*t674;
  t6924 = t6922 + t6923;
  t6926 = -1.*t926*t244*t665;
  t6927 = t172*t6924;
  t6928 = t6926 + t6927;
  t6930 = -1.*t172*t244*t665;
  t6931 = -1.*t926*t6924;
  t6933 = t6930 + t6931;
  t6959 = -1.*t678*t664*t665;
  t6961 = t326*t665*t674;
  t6962 = t6959 + t6961;
  t6964 = -1.*t237*t926;
  t6965 = t172*t6962;
  t6966 = t6964 + t6965;
  t6968 = -1.*t172*t237;
  t6969 = -1.*t926*t6962;
  t6970 = t6968 + t6969;
  t6986 = t664*t244;
  t6987 = -1.*t673*t665*t674;
  t6988 = t6986 + t6987;
  t6990 = -1.*t326*t6819;
  t6991 = t678*t6988;
  t6992 = t6990 + t6991;
  t7024 = t664*t244*t665;
  t7025 = -1.*t673*t674;
  t7026 = t7024 + t7025;
  t760 = t678*t693;
  t7029 = -1.*t326*t7026;
  t7030 = t7029 + t760;
  t7054 = -1.*t237*t664*t326;
  t7055 = -1.*t678*t237*t674;
  t7056 = t7054 + t7055;
  t7078 = -1.*t678*t6823;
  t7080 = t6990 + t7078;
  t7100 = t673*t664;
  t7104 = t244*t665*t674;
  t7105 = t7100 + t7104;
  t7108 = -1.*t678*t7105;
  t7109 = t7029 + t7108;
  t7034 = t678*t7026;
  t7057 = t1171*t7056;
  t7058 = t172*t6743*t7056;
  t7059 = -1.*t926*t6760*t7056;
  t7060 = t678*t237*t664;
  t7061 = -1.*t237*t326*t674;
  t7062 = t7060 + t7061;
  t7063 = -0.08953*t7062;
  t7066 = -1.*t4033*t926*t7056;
  t7067 = -1.*t172*t6703*t7056;
  t7068 = t7066 + t7067;
  t7069 = -0.183*t7068;
  t7070 = t172*t4033*t7056;
  t7071 = -1.*t926*t6703*t7056;
  t7072 = t7070 + t7071;
  t7074 = -0.2*t7072;
  t7132 = -1.*t673*t237*t926;
  t7133 = -1.*t172*t6841;
  t7134 = t7132 + t7133;
  t6865 = t4033*t6862;
  t7114 = -1.*t326*t7105;
  t7115 = t7034 + t7114;
  t7149 = -1.*t172*t7115;
  t7150 = t6749 + t7149;
  t7152 = t172*t237*t244;
  t7153 = -1.*t926*t7115;
  t7154 = t7152 + t7153;
  t7167 = t926*t665;
  t7168 = -1.*t172*t7062;
  t7169 = t7167 + t7168;
  t7171 = -1.*t172*t665;
  t7172 = -1.*t926*t7062;
  t7173 = t7171 + t7172;
  t6864 = -1.*t6703*t6855;
  t6866 = t6864 + t6865;
  t7143 = -1.*t6703*t6862;
  t7184 = -0.183*t4033;
  t7185 = -0.1*t6703;
  t7186 = t7184 + t7185;
  t7188 = 0.1*t4033;
  t7189 = t7188 + t6716;
  t7196 = t237*t926*t244;
  t7197 = t172*t7115;
  t7198 = t7196 + t7197;
  t7157 = t4033*t7154;
  t7161 = -1.*t6703*t7154;
  t7208 = -1.*t926*t665;
  t7209 = t172*t7062;
  t7210 = t7208 + t7209;
  t7176 = t4033*t7173;
  t7180 = -1.*t6703*t7173;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t222*t237*t244 + t1171*t2789 + t6743*t6752 + t422*t676 + t6760*t6778 - 0.183*(-1.*t6703*t6752 + t4033*t6778) - 0.2*(t4033*t6752 + t6703*t6778) + t689*t693 - 0.08953*(t326*t676 + t760);
  p_output1[10]=t222*t237*t673 + t422*t6819 - 0.08953*(t326*t6819 + t678*t6823) + t1171*t6841 + t6743*t6855 + t6760*t6862 - 0.2*(t4033*t6855 + t6703*t6862) - 0.183*t6866 + t6823*t689;
  p_output1[11]=0;
  p_output1[12]=t237*t422*t664*t673 - 1.*t222*t665*t673 - 0.08953*(t237*t326*t664*t673 + t237*t673*t674*t678) + t1171*t6889 + t237*t673*t674*t689 + t6743*t6893 + t6760*t6897 - 0.183*(-1.*t6703*t6893 + t4033*t6897) - 0.2*(t4033*t6893 + t6703*t6897);
  p_output1[13]=t237*t244*t422*t664 - 1.*t222*t244*t665 - 0.08953*(t237*t244*t326*t664 + t237*t244*t674*t678) + t237*t244*t674*t689 + t1171*t6924 + t6743*t6928 + t6760*t6933 - 0.183*(-1.*t6703*t6928 + t4033*t6933) - 0.2*(t4033*t6928 + t6703*t6933);
  p_output1[14]=-1.*t222*t237 - 1.*t422*t664*t665 - 0.08953*(-1.*t326*t664*t665 - 1.*t665*t674*t678) - 1.*t665*t674*t689 + t1171*t6962 + t6743*t6966 + t6760*t6970 - 0.183*(-1.*t6703*t6966 + t4033*t6970) - 0.2*(t4033*t6966 + t6703*t6970);
  p_output1[15]=t6819*t689 + t422*t6988 - 0.08953*(t6839 + t326*t6988) + t1171*t6992 + t172*t6743*t6992 - 1.*t6760*t6992*t926 - 0.183*(-1.*t172*t6703*t6992 - 1.*t4033*t6992*t926) - 0.2*(t172*t4033*t6992 - 1.*t6703*t6992*t926);
  p_output1[16]=t422*t693 + t689*t7026 + t1171*t7030 + t172*t6743*t7030 - 0.08953*(t326*t693 + t7034) - 1.*t6760*t7030*t926 - 0.183*(-1.*t172*t6703*t7030 - 1.*t4033*t7030*t926) - 0.2*(t172*t4033*t7030 - 1.*t6703*t7030*t926);
  p_output1[17]=-1.*t237*t422*t674 + t237*t664*t689 + t7057 + t7058 + t7059 + t7063 + t7069 + t7074;
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
  p_output1[36]=0.047*t678*t6819 - 0.047*t326*t6823 - 0.08953*t6841 + t1171*t7080 + t172*t6743*t7080 - 1.*t6760*t7080*t926 - 0.183*(-1.*t172*t6703*t7080 - 1.*t4033*t7080*t926) - 0.2*(t172*t4033*t7080 - 1.*t6703*t7080*t926);
  p_output1[37]=0.047*t678*t7026 - 0.047*t326*t7105 + t1171*t7109 + t172*t6743*t7109 - 0.08953*t7115 - 1.*t6760*t7109*t926 - 0.183*(-1.*t172*t6703*t7109 - 1.*t4033*t7109*t926) - 0.2*(t172*t4033*t7109 - 1.*t6703*t7109*t926);
  p_output1[38]=-0.047*t237*t326*t674 + 0.047*t237*t664*t678 + t7057 + t7058 + t7059 + t7063 + t7069 + t7074;
  p_output1[39]=-0.183*t172*t6841 + t6743*t6862 + t6760*t7134 - 0.2*(t6865 + t6703*t7134) - 0.183*(t4033*t7134 + t7143) - 0.183*t237*t673*t926;
  p_output1[40]=-0.183*t172*t7115 + t6760*t7150 + t6743*t7154 - 0.2*(t6703*t7150 + t7157) - 0.183*(t4033*t7150 + t7161) - 0.183*t237*t244*t926;
  p_output1[41]=-0.183*t172*t7062 + t6760*t7169 + t6743*t7173 - 0.2*(t6703*t7169 + t7176) - 0.183*(t4033*t7169 + t7180) + 0.183*t665*t926;
  p_output1[42]=-0.2*t6866 - 0.183*(-1.*t4033*t6855 + t7143) + t6855*t7186 + t6862*t7189;
  p_output1[43]=t7154*t7189 + t7186*t7198 - 0.183*(t7161 - 1.*t4033*t7198) - 0.2*(t7157 - 1.*t6703*t7198);
  p_output1[44]=t7173*t7189 + t7186*t7210 - 0.183*(t7180 - 1.*t4033*t7210) - 0.2*(t7176 - 1.*t6703*t7210);
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
