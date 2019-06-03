#include "mode.h"
#include "Plane.h"

bool ModeAWE8S::_enter()
{
    plane.auto_throttle_mode = true;
    plane.do_awe_eight_sphere();
    return true;
}

void ModeAWE8S::update()
{
}