/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot.h"

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
  double t167;
  double t343;
  double t395;
  double t337;
  double t403;
  double t209;
  double t367;
  double t416;
  double t561;
  double t761;
  double t875;
  double t888;
  double t971;
  double t17;
  double t18;
  double t1401;
  double t1523;
  double t1535;
  double t1561;
  double t1590;
  double t1592;
  double t1593;
  double t1595;
  double t1584;
  double t1585;
  double t1589;
  double t1602;
  double t1603;
  double t1604;
  double t124;
  double t145;
  double t161;
  double t162;
  double t245;
  double t289;
  double t308;
  double t309;
  double t973;
  double t1139;
  double t3368;
  double t3371;
  double t3381;
  double t3982;
  double t3997;
  double t4037;
  double t1572;
  double t1582;
  double t4476;
  double t4679;
  double t4681;
  double t1594;
  double t1598;
  double t1599;
  double t1681;
  double t1762;
  double t1881;
  double t4711;
  double t4782;
  double t4796;
  double t4923;
  double t4971;
  double t4990;
  double t5635;
  double t5670;
  double t5882;
  double t6111;
  double t6246;
  double t6383;
  double t6471;
  double t6568;
  double t6595;
  double t7165;
  double t7360;
  double t7366;
  double t7410;
  double t7544;
  double t7885;
  double t7897;
  double t7987;
  double t8055;
  double t9215;
  double t9229;
  double t9250;
  double t9258;
  double t9261;
  double t9262;
  double t9264;
  double t9265;
  double t9266;
  double t9344;
  double t9345;
  double t9346;
  double t9352;
  double t9353;
  double t9356;
  double t9388;
  double t9391;
  double t9392;
  double t1191;
  double t9414;
  double t9423;
  double t9460;
  double t9465;
  double t9466;
  double t9491;
  double t9493;
  double t9395;
  double t9516;
  double t9517;
  double t9530;
  double t9540;
  double t9541;
  double t9455;
  double t9457;
  double t9458;
  double t9459;
  double t9467;
  double t9468;
  double t9469;
  double t9470;
  double t9471;
  double t9473;
  double t9474;
  double t9475;
  double t9476;
  double t9479;
  double t9480;
  double t5066;
  double t9566;
  double t9567;
  double t9568;
  double t9534;
  double t9536;
  double t9586;
  double t9587;
  double t9588;
  double t9581;
  double t9582;
  double t9611;
  double t9612;
  double t9613;
  double t9606;
  double t9607;
  double t9608;
  double t5135;
  double t5153;
  double t9575;
  double t9630;
  double t9631;
  double t9632;
  double t9634;
  double t9635;
  double t9590;
  double t9642;
  double t9643;
  double t9644;
  double t9596;
  double t9615;
  double t9655;
  double t9656;
  double t9657;
  double t9625;
  t167 = Sin(var1[3]);
  t343 = Cos(var1[5]);
  t395 = Sin(var1[4]);
  t337 = Cos(var1[3]);
  t403 = Sin(var1[5]);
  t209 = Cos(var1[6]);
  t367 = -1.*t337*t343;
  t416 = -1.*t167*t395*t403;
  t561 = t367 + t416;
  t761 = -1.*t343*t167*t395;
  t875 = t337*t403;
  t888 = t761 + t875;
  t971 = Sin(var1[6]);
  t17 = Cos(var1[4]);
  t18 = Cos(var1[7]);
  t1401 = t209*t888;
  t1523 = -1.*t561*t971;
  t1535 = t1401 + t1523;
  t1561 = Sin(var1[7]);
  t1590 = Cos(var1[8]);
  t1592 = -1.*t1590;
  t1593 = 1. + t1592;
  t1595 = Sin(var1[8]);
  t1584 = -1.*t17*t18*t167;
  t1585 = -1.*t1535*t1561;
  t1589 = t1584 + t1585;
  t1602 = t18*t1535;
  t1603 = -1.*t17*t167*t1561;
  t1604 = t1602 + t1603;
  t124 = -1.*t18;
  t145 = 1. + t124;
  t161 = 0.183*t145;
  t162 = 0. + t161;
  t245 = -1.*t209;
  t289 = 1. + t245;
  t308 = -0.047*t289;
  t309 = 0. + t308;
  t973 = 0.047*t971;
  t1139 = 0. + t973;
  t3368 = -1.*t343*t167;
  t3371 = t337*t395*t403;
  t3381 = t3368 + t3371;
  t3982 = t337*t343*t395;
  t3997 = t167*t403;
  t4037 = t3982 + t3997;
  t1572 = 0.183*t1561;
  t1582 = 0. + t1572;
  t4476 = t209*t4037;
  t4679 = -1.*t3381*t971;
  t4681 = t4476 + t4679;
  t1594 = 0.183*t1593;
  t1598 = 0.1*t1595;
  t1599 = 0. + t1594 + t1598;
  t1681 = -0.1*t1593;
  t1762 = 0.183*t1595;
  t1881 = 0. + t1681 + t1762;
  t4711 = t337*t17*t18;
  t4782 = -1.*t4681*t1561;
  t4796 = t4711 + t4782;
  t4923 = t18*t4681;
  t4971 = t337*t17*t1561;
  t4990 = t4923 + t4971;
  t5635 = t337*t17*t343*t209;
  t5670 = -1.*t337*t17*t403*t971;
  t5882 = t5635 + t5670;
  t6111 = -1.*t337*t18*t395;
  t6246 = -1.*t5882*t1561;
  t6383 = t6111 + t6246;
  t6471 = t18*t5882;
  t6568 = -1.*t337*t395*t1561;
  t6595 = t6471 + t6568;
  t7165 = t17*t343*t209*t167;
  t7360 = -1.*t17*t167*t403*t971;
  t7366 = t7165 + t7360;
  t7410 = -1.*t18*t167*t395;
  t7544 = -1.*t7366*t1561;
  t7885 = t7410 + t7544;
  t7897 = t18*t7366;
  t7987 = -1.*t167*t395*t1561;
  t8055 = t7897 + t7987;
  t9215 = -1.*t343*t209*t395;
  t9229 = t395*t403*t971;
  t9250 = t9215 + t9229;
  t9258 = -1.*t17*t18;
  t9261 = -1.*t9250*t1561;
  t9262 = t9258 + t9261;
  t9264 = t18*t9250;
  t9265 = -1.*t17*t1561;
  t9266 = t9264 + t9265;
  t9344 = t343*t167;
  t9345 = -1.*t337*t395*t403;
  t9346 = t9344 + t9345;
  t9352 = t209*t9346;
  t9353 = -1.*t4037*t971;
  t9356 = t9352 + t9353;
  t9388 = t343*t167*t395;
  t9391 = -1.*t337*t403;
  t9392 = t9388 + t9391;
  t1191 = t209*t561;
  t9414 = -1.*t9392*t971;
  t9423 = t1191 + t9414;
  t9460 = -1.*t17*t209*t403;
  t9465 = -1.*t17*t343*t971;
  t9466 = t9460 + t9465;
  t9491 = -1.*t209*t3381;
  t9493 = t9491 + t9353;
  t9395 = t209*t9392;
  t9516 = t337*t343;
  t9517 = t167*t395*t403;
  t9530 = t9516 + t9517;
  t9540 = -1.*t209*t9530;
  t9541 = t9540 + t9414;
  t9455 = t17*t343*t209;
  t9457 = -1.*t17*t403*t971;
  t9458 = t9455 + t9457;
  t9459 = -0.08953*t9458;
  t9467 = t9466*t1582;
  t9468 = -1.*t9466*t1561*t1599;
  t9469 = t18*t9466*t1881;
  t9470 = -1.*t1590*t9466*t1561;
  t9471 = -1.*t18*t9466*t1595;
  t9473 = t9470 + t9471;
  t9474 = 0.183*t9473;
  t9475 = t18*t1590*t9466;
  t9476 = -1.*t9466*t1561*t1595;
  t9479 = t9475 + t9476;
  t9480 = -0.2*t9479;
  t5066 = t1590*t4796;
  t9566 = -1.*t18*t4681;
  t9567 = -1.*t337*t17*t1561;
  t9568 = t9566 + t9567;
  t9534 = -1.*t9530*t971;
  t9536 = t9395 + t9534;
  t9586 = t17*t18*t167;
  t9587 = -1.*t9536*t1561;
  t9588 = t9586 + t9587;
  t9581 = -1.*t18*t9536;
  t9582 = t9581 + t1603;
  t9611 = -1.*t18*t395;
  t9612 = -1.*t9458*t1561;
  t9613 = t9611 + t9612;
  t9606 = -1.*t18*t9458;
  t9607 = t395*t1561;
  t9608 = t9606 + t9607;
  t5135 = -1.*t4990*t1595;
  t5153 = t5066 + t5135;
  t9575 = -1.*t4796*t1595;
  t9630 = 0.183*t1590;
  t9631 = -0.1*t1595;
  t9632 = t9630 + t9631;
  t9634 = 0.1*t1590;
  t9635 = t9634 + t1762;
  t9590 = t1590*t9588;
  t9642 = t18*t9536;
  t9643 = t17*t167*t1561;
  t9644 = t9642 + t9643;
  t9596 = -1.*t9588*t1595;
  t9615 = t1590*t9613;
  t9655 = t18*t9458;
  t9656 = -1.*t395*t1561;
  t9657 = t9655 + t9656;
  t9625 = -1.*t9613*t1595;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1535*t1582 + t1589*t1599 - 0.2*(t1589*t1595 + t1590*t1604) + 0.183*(t1589*t1590 - 1.*t1595*t1604) - 1.*t162*t167*t17 + t1604*t1881 + t309*t561 + t1139*t888 - 0.08953*(t1191 + t888*t971);
  p_output1(10)=t162*t17*t337 + t309*t3381 + t1139*t4037 + t1582*t4681 + t1599*t4796 + t1881*t4990 - 0.2*(t1595*t4796 + t1590*t4990) + 0.183*t5153 - 0.08953*(t209*t3381 + t4037*t971);
  p_output1(11)=0;
  p_output1(12)=t1139*t17*t337*t343 - 1.*t162*t337*t395 + t17*t309*t337*t403 + t1582*t5882 + t1599*t6383 + t1881*t6595 - 0.2*(t1595*t6383 + t1590*t6595) + 0.183*(t1590*t6383 - 1.*t1595*t6595) - 0.08953*(t17*t209*t337*t403 + t17*t337*t343*t971);
  p_output1(13)=t1139*t167*t17*t343 - 1.*t162*t167*t395 + t167*t17*t309*t403 + t1582*t7366 + t1599*t7885 + t1881*t8055 - 0.2*(t1595*t7885 + t1590*t8055) + 0.183*(t1590*t7885 - 1.*t1595*t8055) - 0.08953*(t167*t17*t209*t403 + t167*t17*t343*t971);
  p_output1(14)=-1.*t162*t17 - 1.*t1139*t343*t395 - 1.*t309*t395*t403 + t1582*t9250 + t1599*t9262 + t1881*t9266 - 0.2*(t1595*t9262 + t1590*t9266) + 0.183*(t1590*t9262 - 1.*t1595*t9266) - 0.08953*(-1.*t209*t395*t403 - 1.*t343*t395*t971);
  p_output1(15)=t309*t4037 + t1139*t9346 + t1582*t9356 - 1.*t1561*t1599*t9356 + t18*t1881*t9356 - 0.2*(-1.*t1561*t1595*t9356 + t1590*t18*t9356) + 0.183*(-1.*t1561*t1590*t9356 - 1.*t1595*t18*t9356) - 0.08953*(t4476 + t9346*t971);
  p_output1(16)=t1139*t561 + t309*t9392 + t1582*t9423 - 1.*t1561*t1599*t9423 + t18*t1881*t9423 - 0.2*(-1.*t1561*t1595*t9423 + t1590*t18*t9423) + 0.183*(-1.*t1561*t1590*t9423 - 1.*t1595*t18*t9423) - 0.08953*(t9395 + t561*t971);
  p_output1(17)=t17*t309*t343 - 1.*t1139*t17*t403 + t9459 + t9467 + t9468 + t9469 + t9474 + t9480;
  p_output1(18)=0.047*t209*t4037 - 0.08953*t4681 + t1582*t9493 - 1.*t1561*t1599*t9493 + t18*t1881*t9493 - 0.2*(-1.*t1561*t1595*t9493 + t1590*t18*t9493) + 0.183*(-1.*t1561*t1590*t9493 - 1.*t1595*t18*t9493) - 0.047*t3381*t971;
  p_output1(19)=0.047*t209*t9392 - 0.08953*t9536 + t1582*t9541 - 1.*t1561*t1599*t9541 + t18*t1881*t9541 - 0.2*(-1.*t1561*t1595*t9541 + t1590*t18*t9541) + 0.183*(-1.*t1561*t1590*t9541 - 1.*t1595*t18*t9541) - 0.047*t9530*t971;
  p_output1(20)=0.047*t17*t209*t343 + t9459 + t9467 + t9468 + t9469 + t9474 + t9480 - 0.047*t17*t403*t971;
  p_output1(21)=0.183*t1561*t17*t337 + 0.183*t18*t4681 + t1881*t4796 + t1599*t9568 - 0.2*(t5066 + t1595*t9568) + 0.183*(t1590*t9568 + t9575);
  p_output1(22)=0.183*t1561*t167*t17 + 0.183*t18*t9536 + t1599*t9582 + t1881*t9588 - 0.2*(t1595*t9582 + t9590) + 0.183*(t1590*t9582 + t9596);
  p_output1(23)=-0.183*t1561*t395 + 0.183*t18*t9458 + t1599*t9608 + t1881*t9613 - 0.2*(t1595*t9608 + t9615) + 0.183*(t1590*t9608 + t9625);
  p_output1(24)=-0.2*t5153 + 0.183*(-1.*t1590*t4990 + t9575) + t4990*t9632 + t4796*t9635;
  p_output1(25)=t9588*t9635 + t9632*t9644 + 0.183*(t9596 - 1.*t1590*t9644) - 0.2*(t9590 - 1.*t1595*t9644);
  p_output1(26)=t9613*t9635 + t9632*t9657 + 0.183*(t9625 - 1.*t1590*t9657) - 0.2*(t9615 - 1.*t1595*t9657);
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


       
Eigen::Matrix<double,3,18> Jp_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



