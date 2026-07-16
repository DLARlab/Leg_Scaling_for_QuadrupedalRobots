/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint_src.h"

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
  double t1656;
  double t1693;
  double t1696;
  double t1694;
  double t1698;
  double t1681;
  double t1695;
  double t1700;
  double t1702;
  double t1711;
  double t1717;
  double t1718;
  double t1719;
  double t1587;
  double t1657;
  double t1735;
  double t1747;
  double t1748;
  double t1759;
  double t1639;
  double t1644;
  double t1647;
  double t1653;
  double t1683;
  double t1689;
  double t1712;
  double t1713;
  double t1714;
  double t1715;
  double t1774;
  double t1776;
  double t1777;
  double t1780;
  double t1781;
  double t1794;
  double t1743;
  double t1746;
  double t1820;
  double t1823;
  double t1827;
  double t1935;
  double t1937;
  double t1940;
  t1656 = Cos(var1[3]);
  t1693 = Cos(var1[5]);
  t1696 = Sin(var1[3]);
  t1694 = Sin(var1[4]);
  t1698 = Sin(var1[5]);
  t1681 = Sin(var1[12]);
  t1695 = t1656*t1693*t1694;
  t1700 = t1696*t1698;
  t1702 = t1695 + t1700;
  t1711 = Cos(var1[12]);
  t1717 = -1.*t1693*t1696;
  t1718 = t1656*t1694*t1698;
  t1719 = t1717 + t1718;
  t1587 = Cos(var1[13]);
  t1657 = Cos(var1[4]);
  t1735 = Sin(var1[13]);
  t1747 = t1711*t1702;
  t1748 = -1.*t1681*t1719;
  t1759 = t1747 + t1748;
  t1639 = -1.*t1587;
  t1644 = 1. + t1639;
  t1647 = -0.183*t1644;
  t1653 = 0. + t1647;
  t1683 = 0.047*t1681;
  t1689 = 0. + t1683;
  t1712 = -1.*t1711;
  t1713 = 1. + t1712;
  t1714 = -0.047*t1713;
  t1715 = 0. + t1714;
  t1774 = t1693*t1696*t1694;
  t1776 = -1.*t1656*t1698;
  t1777 = t1774 + t1776;
  t1780 = t1656*t1693;
  t1781 = t1696*t1694*t1698;
  t1794 = t1780 + t1781;
  t1743 = -0.183*t1735;
  t1746 = 0. + t1743;
  t1820 = t1711*t1777;
  t1823 = -1.*t1681*t1794;
  t1827 = t1820 + t1823;
  t1935 = t1711*t1657*t1693;
  t1937 = -1.*t1657*t1681*t1698;
  t1940 = t1935 + t1937;
  p_output1[0]=0. + t1653*t1656*t1657 + t1689*t1702 + t1715*t1719 - 0.13205*(t1681*t1702 + t1711*t1719) + t1746*t1759 - 0.183*(t1587*t1656*t1657 - 1.*t1735*t1759) + var1[0];
  p_output1[1]=0. + t1653*t1657*t1696 + t1689*t1777 + t1715*t1794 - 0.13205*(t1681*t1777 + t1711*t1794) + t1746*t1827 - 0.183*(t1587*t1657*t1696 - 1.*t1735*t1827) + var1[1];
  p_output1[2]=0. + t1657*t1689*t1693 - 1.*t1653*t1694 - 0.13205*(t1657*t1681*t1693 + t1657*t1698*t1711) + t1657*t1698*t1715 + t1746*t1940 - 0.183*(-1.*t1587*t1694 - 1.*t1735*t1940) + var1[2];
}



void p_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
