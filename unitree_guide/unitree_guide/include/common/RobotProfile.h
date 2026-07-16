#pragma once

#include <string>
#include "common/mathTypes.h"

struct RobotProfile {
    std::string name;

    // Geometry / FK IK
    double thighOffset;
    double thighLength;
    double calfLength;

    // Robot dynamics
    double mass;

    // Motor torque
    double torqueLimit;

    // GaitGenerator
    bool useFootDistance;

    // LowlevelCmd swing gain
    double swingHipKp;
    double swingHipKd;
    double swingThighKp;
    double swingThighKd;
    double swingCalfKp;
    double swingCalfKd;

    // LowlevelCmd small gain
    double smallHipKp;
    double smallHipKd;
    double smallThighKp;
    double smallThighKd;
    double smallCalfKp;
    double smallCalfKd;

    // State_Galloping_G2 basic parameters
    double gaitHeight;
    double period;
    double stancePhaseRatio;
    Vec4 bias;

    // State_Galloping_G2 torso / swing gains
    Vec3 Kpp;
    Vec3 Kdp;
    Vec3 Kpw;
    Vec3 Kdw;
    Vec3 KpSwing;
    Vec3 KdSwing;

    // State_Galloping_G2 command profile
    double targetSpeed;
    double rampUpTime;
    double holdTime;
    double rampDownTime;
    double stopTime;

    // State_Galloping_G2 height / acceleration limits
    double desiredHipHeight;
    double hipCenterY;
    double frontCenterXLimit;
    double frontCenterXVelNegScale;
    double frontCenterXVelPosScale;
    double frontCenterYLimit;
    double rearCenterXLimit;
    double rearCenterXVelNegScale;
    double rearCenterXVelPosScale;
    double rearCenterYLimit;
    double pcdYLimit;
    double rollCmd;
    double vxAccLimit;
    double vyAccLimit;
    Vec3 ddPcdLimit;
    Vec3 dWbdLimit;

    // State_Galloping_G2 calcTau branch gains
    double frontForceAddGain;
    double rearForceAddGain;
    Vec3 frontHighKpw;
    Vec3 frontHighKdw;
    Vec3 frontLowKpw;
    Vec3 frontLowKdw;
    Vec3 rearHighKpw;
    Vec3 rearHighKdw;
    Vec3 rearLowKpw;
    Vec3 rearLowKdw;
};

RobotProfile getRobotProfile(const std::string& name);
