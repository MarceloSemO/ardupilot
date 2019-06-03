#include "mode.h"
#include "Plane.h"

bool ModeAWE3D::_enter()
{
    plane.auto_throttle_mode = true;
    plane.do_awe_loiter_3d();
    return true;
}

void ModeAWE3D::update()
{
}