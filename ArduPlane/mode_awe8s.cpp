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
    plane.calc_nav_roll();
    plane.calc_nav_pitch();
    plane.calc_throttle();
}