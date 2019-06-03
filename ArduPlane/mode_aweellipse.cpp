#include "mode.h"
#include "Plane.h"

bool ModeAWEEllipse::_enter()
{
    plane.auto_throttle_mode = true;
    plane.do_awe_loiter_ellipse();
    return true;
}

void ModeAWEEllipse::update()
{
}