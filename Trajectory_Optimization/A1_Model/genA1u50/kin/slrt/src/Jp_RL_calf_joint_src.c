/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint_src.h"

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
  double t4769;
  double t4808;
  double t4799;
  double t4803;
  double t4809;
  double t4781;
  double t4806;
  double t4810;
  double t4811;
  double t4818;
  double t4834;
  double t4835;
  double t4843;
  double t4768;
  double t4851;
  double t252;
  double t4854;
  double t4855;
  double t4856;
  double t4859;
  double t4861;
  double t4863;
  double t4868;
  double t4875;
  double t4878;
  double t4879;
  double t4888;
  double t4889;
  double t4890;
  double t2350;
  double t4724;
  double t4737;
  double t4749;
  double t4792;
  double t4798;
  double t4820;
  double t4821;
  double t4826;
  double t4830;
  double t4902;
  double t4903;
  double t4906;
  double t4910;
  double t4914;
  double t4915;
  double t4852;
  double t4853;
  double t4866;
  double t4870;
  double t4874;
  double t4921;
  double t4922;
  double t4923;
  double t4882;
  double t4883;
  double t4886;
  double t4925;
  double t4926;
  double t4927;
  double t4929;
  double t4930;
  double t4931;
  double t4956;
  double t4957;
  double t4958;
  double t4962;
  double t4964;
  double t4966;
  double t4971;
  double t4972;
  double t4973;
  double t4994;
  double t4995;
  double t4996;
  double t4998;
  double t4999;
  double t5000;
  double t5002;
  double t5003;
  double t5006;
  double t5026;
  double t5027;
  double t5034;
  double t5042;
  double t5044;
  double t5046;
  double t5048;
  double t5051;
  double t5052;
  double t5064;
  double t5065;
  double t5066;
  double t5071;
  double t5072;
  double t5073;
  double t5093;
  double t5094;
  double t5095;
  double t4848;
  double t5098;
  double t5099;
  double t5124;
  double t5126;
  double t5127;
  double t5151;
  double t5152;
  double t5170;
  double t5171;
  double t5172;
  double t5174;
  double t5175;
  double t5104;
  double t5131;
  double t5132;
  double t5134;
  double t5135;
  double t5136;
  double t5138;
  double t5139;
  double t5140;
  double t5141;
  double t5142;
  double t5143;
  double t5144;
  double t5145;
  double t5146;
  double t5147;
  double t5196;
  double t5197;
  double t5198;
  double t4938;
  double t5179;
  double t5180;
  double t5211;
  double t5212;
  double t5214;
  double t5215;
  double t5216;
  double t5229;
  double t5230;
  double t5231;
  double t5233;
  double t5234;
  double t5235;
  double t4936;
  double t4942;
  double t5205;
  double t5246;
  double t5247;
  double t5248;
  double t5250;
  double t5251;
  double t5258;
  double t5259;
  double t5260;
  double t5219;
  double t5223;
  double t5270;
  double t5271;
  double t5272;
  double t5238;
  double t5242;
  t4769 = Sin(var1[3]);
  t4808 = Cos(var1[3]);
  t4799 = Cos(var1[5]);
  t4803 = Sin(var1[4]);
  t4809 = Sin(var1[5]);
  t4781 = Sin(var1[15]);
  t4806 = -1.*t4799*t4769*t4803;
  t4810 = t4808*t4809;
  t4811 = t4806 + t4810;
  t4818 = Cos(var1[15]);
  t4834 = -1.*t4808*t4799;
  t4835 = -1.*t4769*t4803*t4809;
  t4843 = t4834 + t4835;
  t4768 = Cos(var1[4]);
  t4851 = Sin(var1[16]);
  t252 = Cos(var1[16]);
  t4854 = t4818*t4811;
  t4855 = -1.*t4781*t4843;
  t4856 = t4854 + t4855;
  t4859 = Cos(var1[17]);
  t4861 = -1.*t4859;
  t4863 = 1. + t4861;
  t4868 = Sin(var1[17]);
  t4875 = -1.*t4768*t4851*t4769;
  t4878 = t252*t4856;
  t4879 = t4875 + t4878;
  t4888 = -1.*t252*t4768*t4769;
  t4889 = -1.*t4851*t4856;
  t4890 = t4888 + t4889;
  t2350 = -1.*t252;
  t4724 = 1. + t2350;
  t4737 = -0.183*t4724;
  t4749 = 0. + t4737;
  t4792 = -0.047*t4781;
  t4798 = 0. + t4792;
  t4820 = -1.*t4818;
  t4821 = 1. + t4820;
  t4826 = 0.047*t4821;
  t4830 = 0. + t4826;
  t4902 = t4808*t4799*t4803;
  t4903 = t4769*t4809;
  t4906 = t4902 + t4903;
  t4910 = -1.*t4799*t4769;
  t4914 = t4808*t4803*t4809;
  t4915 = t4910 + t4914;
  t4852 = -0.183*t4851;
  t4853 = 0. + t4852;
  t4866 = -0.1*t4863;
  t4870 = -0.183*t4868;
  t4874 = 0. + t4866 + t4870;
  t4921 = t4818*t4906;
  t4922 = -1.*t4781*t4915;
  t4923 = t4921 + t4922;
  t4882 = -0.183*t4863;
  t4883 = 0.1*t4868;
  t4886 = 0. + t4882 + t4883;
  t4925 = t4808*t4768*t4851;
  t4926 = t252*t4923;
  t4927 = t4925 + t4926;
  t4929 = t252*t4808*t4768;
  t4930 = -1.*t4851*t4923;
  t4931 = t4929 + t4930;
  t4956 = t4818*t4808*t4768*t4799;
  t4957 = -1.*t4808*t4768*t4781*t4809;
  t4958 = t4956 + t4957;
  t4962 = -1.*t4808*t4851*t4803;
  t4964 = t252*t4958;
  t4966 = t4962 + t4964;
  t4971 = -1.*t252*t4808*t4803;
  t4972 = -1.*t4851*t4958;
  t4973 = t4971 + t4972;
  t4994 = t4818*t4768*t4799*t4769;
  t4995 = -1.*t4768*t4781*t4769*t4809;
  t4996 = t4994 + t4995;
  t4998 = -1.*t4851*t4769*t4803;
  t4999 = t252*t4996;
  t5000 = t4998 + t4999;
  t5002 = -1.*t252*t4769*t4803;
  t5003 = -1.*t4851*t4996;
  t5006 = t5002 + t5003;
  t5026 = -1.*t4818*t4799*t4803;
  t5027 = t4781*t4803*t4809;
  t5034 = t5026 + t5027;
  t5042 = -1.*t4768*t4851;
  t5044 = t252*t5034;
  t5046 = t5042 + t5044;
  t5048 = -1.*t252*t4768;
  t5051 = -1.*t4851*t5034;
  t5052 = t5048 + t5051;
  t5064 = t4799*t4769;
  t5065 = -1.*t4808*t4803*t4809;
  t5066 = t5064 + t5065;
  t5071 = -1.*t4781*t4906;
  t5072 = t4818*t5066;
  t5073 = t5071 + t5072;
  t5093 = t4799*t4769*t4803;
  t5094 = -1.*t4808*t4809;
  t5095 = t5093 + t5094;
  t4848 = t4818*t4843;
  t5098 = -1.*t4781*t5095;
  t5099 = t5098 + t4848;
  t5124 = -1.*t4768*t4799*t4781;
  t5126 = -1.*t4818*t4768*t4809;
  t5127 = t5124 + t5126;
  t5151 = -1.*t4818*t4915;
  t5152 = t5071 + t5151;
  t5170 = t4808*t4799;
  t5171 = t4769*t4803*t4809;
  t5172 = t5170 + t5171;
  t5174 = -1.*t4818*t5172;
  t5175 = t5098 + t5174;
  t5104 = t4818*t5095;
  t5131 = t4853*t5127;
  t5132 = t252*t4874*t5127;
  t5134 = -1.*t4851*t4886*t5127;
  t5135 = t4818*t4768*t4799;
  t5136 = -1.*t4768*t4781*t4809;
  t5138 = t5135 + t5136;
  t5139 = 0.08953*t5138;
  t5140 = -1.*t4859*t4851*t5127;
  t5141 = -1.*t252*t4868*t5127;
  t5142 = t5140 + t5141;
  t5143 = -0.183*t5142;
  t5144 = t252*t4859*t5127;
  t5145 = -1.*t4851*t4868*t5127;
  t5146 = t5144 + t5145;
  t5147 = -0.1*t5146;
  t5196 = -1.*t4808*t4768*t4851;
  t5197 = -1.*t252*t4923;
  t5198 = t5196 + t5197;
  t4938 = t4859*t4931;
  t5179 = -1.*t4781*t5172;
  t5180 = t5104 + t5179;
  t5211 = -1.*t252*t5180;
  t5212 = t4875 + t5211;
  t5214 = t252*t4768*t4769;
  t5215 = -1.*t4851*t5180;
  t5216 = t5214 + t5215;
  t5229 = t4851*t4803;
  t5230 = -1.*t252*t5138;
  t5231 = t5229 + t5230;
  t5233 = -1.*t252*t4803;
  t5234 = -1.*t4851*t5138;
  t5235 = t5233 + t5234;
  t4936 = -1.*t4868*t4927;
  t4942 = t4936 + t4938;
  t5205 = -1.*t4868*t4931;
  t5246 = -0.183*t4859;
  t5247 = -0.1*t4868;
  t5248 = t5246 + t5247;
  t5250 = 0.1*t4859;
  t5251 = t5250 + t4870;
  t5258 = t4768*t4851*t4769;
  t5259 = t252*t5180;
  t5260 = t5258 + t5259;
  t5219 = t4859*t5216;
  t5223 = -1.*t4868*t5216;
  t5270 = -1.*t4851*t4803;
  t5271 = t252*t5138;
  t5272 = t5270 + t5271;
  t5238 = t4859*t5235;
  t5242 = -1.*t4868*t5235;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t4749*t4768*t4769 + t4798*t4811 + t4830*t4843 + 0.08953*(t4781*t4811 + t4848) + t4853*t4856 + t4874*t4879 + t4886*t4890 - 0.183*(-1.*t4868*t4879 + t4859*t4890) - 0.1*(t4859*t4879 + t4868*t4890);
  p_output1[10]=t4749*t4768*t4808 + t4798*t4906 + t4830*t4915 + 0.08953*(t4781*t4906 + t4818*t4915) + t4853*t4923 + t4874*t4927 + t4886*t4931 - 0.1*(t4859*t4927 + t4868*t4931) - 0.183*t4942;
  p_output1[11]=0;
  p_output1[12]=t4768*t4798*t4799*t4808 - 1.*t4749*t4803*t4808 + 0.08953*(t4768*t4781*t4799*t4808 + t4768*t4808*t4809*t4818) + t4768*t4808*t4809*t4830 + t4853*t4958 + t4874*t4966 + t4886*t4973 - 0.183*(-1.*t4868*t4966 + t4859*t4973) - 0.1*(t4859*t4966 + t4868*t4973);
  p_output1[13]=t4768*t4769*t4798*t4799 - 1.*t4749*t4769*t4803 + 0.08953*(t4768*t4769*t4781*t4799 + t4768*t4769*t4809*t4818) + t4768*t4769*t4809*t4830 + t4853*t4996 + t4874*t5000 + t4886*t5006 - 0.183*(-1.*t4868*t5000 + t4859*t5006) - 0.1*(t4859*t5000 + t4868*t5006);
  p_output1[14]=-1.*t4749*t4768 - 1.*t4798*t4799*t4803 + 0.08953*(-1.*t4781*t4799*t4803 - 1.*t4803*t4809*t4818) - 1.*t4803*t4809*t4830 + t4853*t5034 + t4874*t5046 + t4886*t5052 - 0.183*(-1.*t4868*t5046 + t4859*t5052) - 0.1*(t4859*t5046 + t4868*t5052);
  p_output1[15]=t4830*t4906 + t4798*t5066 + 0.08953*(t4921 + t4781*t5066) + t4853*t5073 + t252*t4874*t5073 - 1.*t4851*t4886*t5073 - 0.183*(-1.*t4851*t4859*t5073 - 1.*t252*t4868*t5073) - 0.1*(t252*t4859*t5073 - 1.*t4851*t4868*t5073);
  p_output1[16]=t4798*t4843 + t4830*t5095 + t4853*t5099 + t252*t4874*t5099 - 1.*t4851*t4886*t5099 - 0.183*(-1.*t4851*t4859*t5099 - 1.*t252*t4868*t5099) - 0.1*(t252*t4859*t5099 - 1.*t4851*t4868*t5099) + 0.08953*(t4781*t4843 + t5104);
  p_output1[17]=-1.*t4768*t4798*t4809 + t4768*t4799*t4830 + t5131 + t5132 + t5134 + t5139 + t5143 + t5147;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.047*t4818*t4906 + 0.047*t4781*t4915 + 0.08953*t4923 + t4853*t5152 + t252*t4874*t5152 - 1.*t4851*t4886*t5152 - 0.183*(-1.*t4851*t4859*t5152 - 1.*t252*t4868*t5152) - 0.1*(t252*t4859*t5152 - 1.*t4851*t4868*t5152);
  p_output1[46]=-0.047*t4818*t5095 + 0.047*t4781*t5172 + t4853*t5175 + t252*t4874*t5175 - 1.*t4851*t4886*t5175 - 0.183*(-1.*t4851*t4859*t5175 - 1.*t252*t4868*t5175) - 0.1*(t252*t4859*t5175 - 1.*t4851*t4868*t5175) + 0.08953*t5180;
  p_output1[47]=0.047*t4768*t4781*t4809 - 0.047*t4768*t4799*t4818 + t5131 + t5132 + t5134 + t5139 + t5143 + t5147;
  p_output1[48]=-0.183*t4768*t4808*t4851 - 0.183*t252*t4923 + t4874*t4931 + t4886*t5198 - 0.1*(t4938 + t4868*t5198) - 0.183*(t4859*t5198 + t5205);
  p_output1[49]=-0.183*t4768*t4769*t4851 - 0.183*t252*t5180 + t4886*t5212 + t4874*t5216 - 0.1*(t4868*t5212 + t5219) - 0.183*(t4859*t5212 + t5223);
  p_output1[50]=0.183*t4803*t4851 - 0.183*t252*t5138 + t4886*t5231 + t4874*t5235 - 0.1*(t4868*t5231 + t5238) - 0.183*(t4859*t5231 + t5242);
  p_output1[51]=-0.1*t4942 - 0.183*(-1.*t4859*t4927 + t5205) + t4927*t5248 + t4931*t5251;
  p_output1[52]=t5216*t5251 + t5248*t5260 - 0.183*(t5223 - 1.*t4859*t5260) - 0.1*(t5219 - 1.*t4868*t5260);
  p_output1[53]=t5235*t5251 + t5248*t5272 - 0.183*(t5242 - 1.*t4859*t5272) - 0.1*(t5238 - 1.*t4868*t5272);
}



void Jp_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
