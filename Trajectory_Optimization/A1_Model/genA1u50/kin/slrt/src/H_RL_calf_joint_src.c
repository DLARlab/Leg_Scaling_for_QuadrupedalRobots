/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint_src.h"

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
  double t4826;
  double t4924;
  double t4947;
  double t4944;
  double t4948;
  double t4898;
  double t4892;
  double t4895;
  double t4903;
  double t4946;
  double t4949;
  double t4950;
  double t4952;
  double t4953;
  double t4954;
  double t4955;
  double t4976;
  double t4979;
  double t4981;
  double t2411;
  double t5001;
  double t5019;
  double t5020;
  double t5021;
  double t5022;
  double t5023;
  double t5027;
  double t5044;
  double t5053;
  double t5057;
  double t5078;
  double t5079;
  double t5082;
  double t4896;
  double t4986;
  double t4988;
  double t5013;
  double t5014;
  double t5015;
  double t5018;
  double t5058;
  double t5059;
  double t5061;
  double t5062;
  double t5063;
  double t5077;
  double t5085;
  double t5087;
  double t5097;
  double t5101;
  double t5102;
  double t5108;
  double t5109;
  double t5112;
  double t5187;
  double t5188;
  double t4991;
  double t5016;
  double t5017;
  double t5121;
  double t5123;
  double t5142;
  double t5160;
  double t5161;
  double t5162;
  double t5163;
  double t5166;
  double t5168;
  double t5171;
  double t5173;
  double t5177;
  double t5181;
  double t5113;
  double t5115;
  double t5116;
  double t5184;
  double t5185;
  double t5189;
  double t5190;
  double t5191;
  double t5193;
  double t5194;
  double t5195;
  double t5060;
  double t5068;
  double t5076;
  double t5146;
  double t5149;
  double t5156;
  double t5117;
  double t5119;
  double t5120;
  double t5089;
  double t5105;
  double t5107;
  double t5157;
  double t5158;
  double t5159;
  t4826 = Cos(var1[3]);
  t4924 = Cos(var1[5]);
  t4947 = Sin(var1[3]);
  t4944 = Sin(var1[4]);
  t4948 = Sin(var1[5]);
  t4898 = Cos(var1[16]);
  t4892 = Cos(var1[4]);
  t4895 = Sin(var1[16]);
  t4903 = Cos(var1[15]);
  t4946 = t4826*t4924*t4944;
  t4949 = t4947*t4948;
  t4950 = t4946 + t4949;
  t4952 = t4903*t4950;
  t4953 = Sin(var1[15]);
  t4954 = -1.*t4924*t4947;
  t4955 = t4826*t4944*t4948;
  t4976 = t4954 + t4955;
  t4979 = -1.*t4953*t4976;
  t4981 = t4952 + t4979;
  t2411 = Sin(var1[17]);
  t5001 = Cos(var1[17]);
  t5019 = t4924*t4947*t4944;
  t5020 = -1.*t4826*t4948;
  t5021 = t5019 + t5020;
  t5022 = t4903*t5021;
  t5023 = t4826*t4924;
  t5027 = t4947*t4944*t4948;
  t5044 = t5023 + t5027;
  t5053 = -1.*t4953*t5044;
  t5057 = t5022 + t5053;
  t5078 = t4903*t4892*t4924;
  t5079 = -1.*t4892*t4953*t4948;
  t5082 = t5078 + t5079;
  t4896 = t4826*t4892*t4895;
  t4986 = t4898*t4981;
  t4988 = t4896 + t4986;
  t5013 = t4898*t4826*t4892;
  t5014 = -1.*t4895*t4981;
  t5015 = t5013 + t5014;
  t5018 = t4892*t4895*t4947;
  t5058 = t4898*t5057;
  t5059 = t5018 + t5058;
  t5061 = t4898*t4892*t4947;
  t5062 = -1.*t4895*t5057;
  t5063 = t5061 + t5062;
  t5077 = -1.*t4895*t4944;
  t5085 = t4898*t5082;
  t5087 = t5077 + t5085;
  t5097 = -1.*t4898*t4944;
  t5101 = -1.*t4895*t5082;
  t5102 = t5097 + t5101;
  t5108 = t4953*t4950;
  t5109 = t4903*t4976;
  t5112 = t5108 + t5109;
  t5187 = -1.*t5001;
  t5188 = 1. + t5187;
  t4991 = -1.*t2411*t4988;
  t5016 = t5001*t5015;
  t5017 = t4991 + t5016;
  t5121 = t5001*t4988;
  t5123 = t2411*t5015;
  t5142 = t5121 + t5123;
  t5160 = -1.*t4898;
  t5161 = 1. + t5160;
  t5162 = -0.183*t5161;
  t5163 = 0. + t5162;
  t5166 = -0.047*t4953;
  t5168 = 0. + t5166;
  t5171 = -1.*t4903;
  t5173 = 1. + t5171;
  t5177 = 0.047*t5173;
  t5181 = 0. + t5177;
  t5113 = t4953*t5021;
  t5115 = t4903*t5044;
  t5116 = t5113 + t5115;
  t5184 = -0.183*t4895;
  t5185 = 0. + t5184;
  t5189 = -0.1*t5188;
  t5190 = -0.183*t2411;
  t5191 = 0. + t5189 + t5190;
  t5193 = -0.183*t5188;
  t5194 = 0.1*t2411;
  t5195 = 0. + t5193 + t5194;
  t5060 = -1.*t2411*t5059;
  t5068 = t5001*t5063;
  t5076 = t5060 + t5068;
  t5146 = t5001*t5059;
  t5149 = t2411*t5063;
  t5156 = t5146 + t5149;
  t5117 = t4892*t4924*t4953;
  t5119 = t4903*t4892*t4948;
  t5120 = t5117 + t5119;
  t5089 = -1.*t2411*t5087;
  t5105 = t5001*t5102;
  t5107 = t5089 + t5105;
  t5157 = t5001*t5087;
  t5158 = t2411*t5102;
  t5159 = t5157 + t5158;
  p_output1[0]=t5017;
  p_output1[1]=t5076;
  p_output1[2]=t5107;
  p_output1[3]=0.;
  p_output1[4]=t5112;
  p_output1[5]=t5116;
  p_output1[6]=t5120;
  p_output1[7]=0.;
  p_output1[8]=t5142;
  p_output1[9]=t5156;
  p_output1[10]=t5159;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t5017 + 0.08953*t5112 - 0.1*t5142 + t4826*t4892*t5163 + t4950*t5168 + t4976*t5181 + t4981*t5185 + t4988*t5191 + t5015*t5195 + var1[0];
  p_output1[13]=0. - 0.183*t5076 + 0.08953*t5116 - 0.1*t5156 + t4892*t4947*t5163 + t5021*t5168 + t5044*t5181 + t5057*t5185 + t5059*t5191 + t5063*t5195 + var1[1];
  p_output1[14]=0. - 0.183*t5107 + 0.08953*t5120 - 0.1*t5159 - 1.*t4944*t5163 + t4892*t4924*t5168 + t4892*t4948*t5181 + t5082*t5185 + t5087*t5191 + t5102*t5195 + var1[2];
  p_output1[15]=1.;
}



void H_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
