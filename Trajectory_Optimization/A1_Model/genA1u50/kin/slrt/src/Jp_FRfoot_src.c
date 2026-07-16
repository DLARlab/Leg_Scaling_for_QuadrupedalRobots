/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:06 GMT-05:00
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
  double t1836;
  double t5495;
  double t5502;
  double t5488;
  double t5505;
  double t5444;
  double t5496;
  double t5506;
  double t5507;
  double t5513;
  double t5514;
  double t5522;
  double t5525;
  double t493;
  double t748;
  double t5547;
  double t5549;
  double t5550;
  double t5551;
  double t5560;
  double t5561;
  double t5562;
  double t5565;
  double t5555;
  double t5556;
  double t5558;
  double t5574;
  double t5579;
  double t5580;
  double t1459;
  double t1644;
  double t1654;
  double t1735;
  double t5457;
  double t5475;
  double t5477;
  double t5485;
  double t5529;
  double t5533;
  double t5599;
  double t5600;
  double t5601;
  double t5603;
  double t5604;
  double t5607;
  double t5552;
  double t5553;
  double t5618;
  double t5619;
  double t5620;
  double t5564;
  double t5566;
  double t5569;
  double t5583;
  double t5584;
  double t5585;
  double t5622;
  double t5623;
  double t5624;
  double t5626;
  double t5627;
  double t5628;
  double t5653;
  double t5654;
  double t5655;
  double t5657;
  double t5658;
  double t5659;
  double t5663;
  double t5667;
  double t5668;
  double t5689;
  double t5692;
  double t5693;
  double t5695;
  double t5696;
  double t5697;
  double t5699;
  double t5700;
  double t5701;
  double t5723;
  double t5724;
  double t5725;
  double t5727;
  double t5728;
  double t5729;
  double t5743;
  double t5745;
  double t5747;
  double t5761;
  double t5762;
  double t5763;
  double t5769;
  double t5772;
  double t5775;
  double t5788;
  double t5789;
  double t5790;
  double t5541;
  double t5799;
  double t5800;
  double t5826;
  double t5827;
  double t5828;
  double t5849;
  double t5850;
  double t5795;
  double t5865;
  double t5866;
  double t5869;
  double t5874;
  double t5875;
  double t5821;
  double t5822;
  double t5823;
  double t5824;
  double t5832;
  double t5834;
  double t5835;
  double t5836;
  double t5837;
  double t5839;
  double t5840;
  double t5841;
  double t5842;
  double t5843;
  double t5844;
  double t5630;
  double t5893;
  double t5894;
  double t5895;
  double t5871;
  double t5872;
  double t5911;
  double t5912;
  double t5913;
  double t5908;
  double t5909;
  double t5930;
  double t5931;
  double t5932;
  double t5926;
  double t5927;
  double t5928;
  double t5631;
  double t5632;
  double t5902;
  double t5943;
  double t5944;
  double t5945;
  double t5947;
  double t5948;
  double t5915;
  double t5955;
  double t5956;
  double t5957;
  double t5920;
  double t5934;
  double t5967;
  double t5968;
  double t5969;
  double t5939;
  t1836 = Sin(var1[3]);
  t5495 = Cos(var1[5]);
  t5502 = Sin(var1[4]);
  t5488 = Cos(var1[3]);
  t5505 = Sin(var1[5]);
  t5444 = Cos(var1[6]);
  t5496 = -1.*t5488*t5495;
  t5506 = -1.*t1836*t5502*t5505;
  t5507 = t5496 + t5506;
  t5513 = -1.*t5495*t1836*t5502;
  t5514 = t5488*t5505;
  t5522 = t5513 + t5514;
  t5525 = Sin(var1[6]);
  t493 = Cos(var1[4]);
  t748 = Cos(var1[7]);
  t5547 = t5444*t5522;
  t5549 = -1.*t5507*t5525;
  t5550 = t5547 + t5549;
  t5551 = Sin(var1[7]);
  t5560 = Cos(var1[8]);
  t5561 = -1.*t5560;
  t5562 = 1. + t5561;
  t5565 = Sin(var1[8]);
  t5555 = -1.*t493*t748*t1836;
  t5556 = -1.*t5550*t5551;
  t5558 = t5555 + t5556;
  t5574 = t748*t5550;
  t5579 = -1.*t493*t1836*t5551;
  t5580 = t5574 + t5579;
  t1459 = -1.*t748;
  t1644 = 1. + t1459;
  t1654 = 0.183*t1644;
  t1735 = 0. + t1654;
  t5457 = -1.*t5444;
  t5475 = 1. + t5457;
  t5477 = -0.047*t5475;
  t5485 = 0. + t5477;
  t5529 = 0.047*t5525;
  t5533 = 0. + t5529;
  t5599 = -1.*t5495*t1836;
  t5600 = t5488*t5502*t5505;
  t5601 = t5599 + t5600;
  t5603 = t5488*t5495*t5502;
  t5604 = t1836*t5505;
  t5607 = t5603 + t5604;
  t5552 = 0.183*t5551;
  t5553 = 0. + t5552;
  t5618 = t5444*t5607;
  t5619 = -1.*t5601*t5525;
  t5620 = t5618 + t5619;
  t5564 = 0.183*t5562;
  t5566 = 0.1*t5565;
  t5569 = 0. + t5564 + t5566;
  t5583 = -0.1*t5562;
  t5584 = 0.183*t5565;
  t5585 = 0. + t5583 + t5584;
  t5622 = t5488*t493*t748;
  t5623 = -1.*t5620*t5551;
  t5624 = t5622 + t5623;
  t5626 = t748*t5620;
  t5627 = t5488*t493*t5551;
  t5628 = t5626 + t5627;
  t5653 = t5488*t493*t5495*t5444;
  t5654 = -1.*t5488*t493*t5505*t5525;
  t5655 = t5653 + t5654;
  t5657 = -1.*t5488*t748*t5502;
  t5658 = -1.*t5655*t5551;
  t5659 = t5657 + t5658;
  t5663 = t748*t5655;
  t5667 = -1.*t5488*t5502*t5551;
  t5668 = t5663 + t5667;
  t5689 = t493*t5495*t5444*t1836;
  t5692 = -1.*t493*t1836*t5505*t5525;
  t5693 = t5689 + t5692;
  t5695 = -1.*t748*t1836*t5502;
  t5696 = -1.*t5693*t5551;
  t5697 = t5695 + t5696;
  t5699 = t748*t5693;
  t5700 = -1.*t1836*t5502*t5551;
  t5701 = t5699 + t5700;
  t5723 = -1.*t5495*t5444*t5502;
  t5724 = t5502*t5505*t5525;
  t5725 = t5723 + t5724;
  t5727 = -1.*t493*t748;
  t5728 = -1.*t5725*t5551;
  t5729 = t5727 + t5728;
  t5743 = t748*t5725;
  t5745 = -1.*t493*t5551;
  t5747 = t5743 + t5745;
  t5761 = t5495*t1836;
  t5762 = -1.*t5488*t5502*t5505;
  t5763 = t5761 + t5762;
  t5769 = t5444*t5763;
  t5772 = -1.*t5607*t5525;
  t5775 = t5769 + t5772;
  t5788 = t5495*t1836*t5502;
  t5789 = -1.*t5488*t5505;
  t5790 = t5788 + t5789;
  t5541 = t5444*t5507;
  t5799 = -1.*t5790*t5525;
  t5800 = t5541 + t5799;
  t5826 = -1.*t493*t5444*t5505;
  t5827 = -1.*t493*t5495*t5525;
  t5828 = t5826 + t5827;
  t5849 = -1.*t5444*t5601;
  t5850 = t5849 + t5772;
  t5795 = t5444*t5790;
  t5865 = t5488*t5495;
  t5866 = t1836*t5502*t5505;
  t5869 = t5865 + t5866;
  t5874 = -1.*t5444*t5869;
  t5875 = t5874 + t5799;
  t5821 = t493*t5495*t5444;
  t5822 = -1.*t493*t5505*t5525;
  t5823 = t5821 + t5822;
  t5824 = -0.08953*t5823;
  t5832 = t5828*t5553;
  t5834 = -1.*t5828*t5551*t5569;
  t5835 = t748*t5828*t5585;
  t5836 = -1.*t5560*t5828*t5551;
  t5837 = -1.*t748*t5828*t5565;
  t5839 = t5836 + t5837;
  t5840 = 0.183*t5839;
  t5841 = t748*t5560*t5828;
  t5842 = -1.*t5828*t5551*t5565;
  t5843 = t5841 + t5842;
  t5844 = -0.2*t5843;
  t5630 = t5560*t5624;
  t5893 = -1.*t748*t5620;
  t5894 = -1.*t5488*t493*t5551;
  t5895 = t5893 + t5894;
  t5871 = -1.*t5869*t5525;
  t5872 = t5795 + t5871;
  t5911 = t493*t748*t1836;
  t5912 = -1.*t5872*t5551;
  t5913 = t5911 + t5912;
  t5908 = -1.*t748*t5872;
  t5909 = t5908 + t5579;
  t5930 = -1.*t748*t5502;
  t5931 = -1.*t5823*t5551;
  t5932 = t5930 + t5931;
  t5926 = -1.*t748*t5823;
  t5927 = t5502*t5551;
  t5928 = t5926 + t5927;
  t5631 = -1.*t5628*t5565;
  t5632 = t5630 + t5631;
  t5902 = -1.*t5624*t5565;
  t5943 = 0.183*t5560;
  t5944 = -0.1*t5565;
  t5945 = t5943 + t5944;
  t5947 = 0.1*t5560;
  t5948 = t5947 + t5584;
  t5915 = t5560*t5913;
  t5955 = t748*t5872;
  t5956 = t493*t1836*t5551;
  t5957 = t5955 + t5956;
  t5920 = -1.*t5913*t5565;
  t5934 = t5560*t5932;
  t5967 = t748*t5823;
  t5968 = -1.*t5502*t5551;
  t5969 = t5967 + t5968;
  t5939 = -1.*t5932*t5565;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1735*t1836*t493 + t5485*t5507 + t5522*t5533 - 0.08953*(t5522*t5525 + t5541) + t5550*t5553 + t5558*t5569 - 0.2*(t5558*t5565 + t5560*t5580) + 0.183*(t5558*t5560 - 1.*t5565*t5580) + t5580*t5585;
  p_output1[10]=t1735*t493*t5488 + t5485*t5601 + t5533*t5607 - 0.08953*(t5444*t5601 + t5525*t5607) + t5553*t5620 + t5569*t5624 + t5585*t5628 - 0.2*(t5565*t5624 + t5560*t5628) + 0.183*t5632;
  p_output1[11]=0;
  p_output1[12]=-1.*t1735*t5488*t5502 + t493*t5485*t5488*t5505 - 0.08953*(t493*t5444*t5488*t5505 + t493*t5488*t5495*t5525) + t493*t5488*t5495*t5533 + t5553*t5655 + t5569*t5659 + t5585*t5668 - 0.2*(t5565*t5659 + t5560*t5668) + 0.183*(t5560*t5659 - 1.*t5565*t5668);
  p_output1[13]=-1.*t1735*t1836*t5502 + t1836*t493*t5485*t5505 - 0.08953*(t1836*t493*t5444*t5505 + t1836*t493*t5495*t5525) + t1836*t493*t5495*t5533 + t5553*t5693 + t5569*t5697 + t5585*t5701 - 0.2*(t5565*t5697 + t5560*t5701) + 0.183*(t5560*t5697 - 1.*t5565*t5701);
  p_output1[14]=-1.*t1735*t493 - 1.*t5485*t5502*t5505 - 0.08953*(-1.*t5444*t5502*t5505 - 1.*t5495*t5502*t5525) - 1.*t5495*t5502*t5533 + t5553*t5725 + t5569*t5729 + t5585*t5747 - 0.2*(t5565*t5729 + t5560*t5747) + 0.183*(t5560*t5729 - 1.*t5565*t5747);
  p_output1[15]=t5485*t5607 + t5533*t5763 - 0.08953*(t5618 + t5525*t5763) + t5553*t5775 - 1.*t5551*t5569*t5775 + t5585*t5775*t748 - 0.2*(-1.*t5551*t5565*t5775 + t5560*t5775*t748) + 0.183*(-1.*t5551*t5560*t5775 - 1.*t5565*t5775*t748);
  p_output1[16]=t5507*t5533 + t5485*t5790 - 0.08953*(t5507*t5525 + t5795) + t5553*t5800 - 1.*t5551*t5569*t5800 + t5585*t5800*t748 - 0.2*(-1.*t5551*t5565*t5800 + t5560*t5800*t748) + 0.183*(-1.*t5551*t5560*t5800 - 1.*t5565*t5800*t748);
  p_output1[17]=t493*t5485*t5495 - 1.*t493*t5505*t5533 + t5824 + t5832 + t5834 + t5835 + t5840 + t5844;
  p_output1[18]=-0.047*t5525*t5601 + 0.047*t5444*t5607 - 0.08953*t5620 + t5553*t5850 - 1.*t5551*t5569*t5850 + t5585*t5850*t748 - 0.2*(-1.*t5551*t5565*t5850 + t5560*t5850*t748) + 0.183*(-1.*t5551*t5560*t5850 - 1.*t5565*t5850*t748);
  p_output1[19]=0.047*t5444*t5790 - 0.047*t5525*t5869 - 0.08953*t5872 + t5553*t5875 - 1.*t5551*t5569*t5875 + t5585*t5875*t748 - 0.2*(-1.*t5551*t5565*t5875 + t5560*t5875*t748) + 0.183*(-1.*t5551*t5560*t5875 - 1.*t5565*t5875*t748);
  p_output1[20]=0.047*t493*t5444*t5495 - 0.047*t493*t5505*t5525 + t5824 + t5832 + t5834 + t5835 + t5840 + t5844;
  p_output1[21]=0.183*t493*t5488*t5551 + t5585*t5624 + t5569*t5895 - 0.2*(t5630 + t5565*t5895) + 0.183*(t5560*t5895 + t5902) + 0.183*t5620*t748;
  p_output1[22]=0.183*t1836*t493*t5551 + t5569*t5909 + t5585*t5913 - 0.2*(t5565*t5909 + t5915) + 0.183*(t5560*t5909 + t5920) + 0.183*t5872*t748;
  p_output1[23]=-0.183*t5502*t5551 + t5569*t5928 + t5585*t5932 - 0.2*(t5565*t5928 + t5934) + 0.183*(t5560*t5928 + t5939) + 0.183*t5823*t748;
  p_output1[24]=-0.2*t5632 + 0.183*(-1.*t5560*t5628 + t5902) + t5628*t5945 + t5624*t5948;
  p_output1[25]=t5913*t5948 + t5945*t5957 + 0.183*(t5920 - 1.*t5560*t5957) - 0.2*(t5915 - 1.*t5565*t5957);
  p_output1[26]=t5932*t5948 + t5945*t5969 + 0.183*(t5939 - 1.*t5560*t5969) - 0.2*(t5934 - 1.*t5565*t5969);
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
