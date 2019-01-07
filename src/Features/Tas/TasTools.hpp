#pragma once
#include "Features/Feature.hpp"

#include "Utils/SDK.hpp"

#include "Command.hpp"

enum class PropType {
    Integer,
    Boolean,
    Float,
    Handle,
    Vector,
    String,
    Char
};

class TasTools : public Feature {
public:
    char className[32];
    char propName[32];
    int propOffset;
    PropType propType;
<<<<<<< HEAD
    int want_to_strafe;
    int strafing_direction;
    int is_vectorial;
    int strafe_type;
=======
    int wantToStrafe;
    int strafingDirection;
    int isVectorial;
    int strafeType;
    int isTurning;
>>>>>>> 5d9d63339fbdea65c646c4df9f0179d20de52bd3

private:
    Vector acceleration;
    Vector prevVelocity;
    int prevTick;

public:
    TasTools();
    void AimAtPoint(float x, float y, float z);
    Vector GetVelocityAngles();
    Vector GetAcceleration();
    void* GetPlayerInfo();
    float GetStrafeAngle(CMoveData* pMove, int direction);
    void Strafe(CMoveData *pMove);
    void VectorialStrafe(CMoveData* pMove);
};

extern TasTools* tasTools;

extern Command sar_tas_aim_at_point;
extern Command sar_tas_set_prop;
extern Command sar_tas_addang;
extern Command sar_tas_setang;
extern Command sar_tas_strafe;
