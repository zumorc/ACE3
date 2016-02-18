#include "script_component.hpp"

GVAR(ZOOM) = 0;
GVAR(NV) = 0;
GVAR(IRON) = false;
GVAR(TI) = 0;
GVAR(cur_cam) = 0;
GVAR(ROTATE) = 0;
GVAR(ELEVAT) = 0.01;

// Register fire event handler
// Don't run for non players, as they are too dumb to launch huntirs anyway
["firedPlayer", DFUNC(handleFired)] call EFUNC(common,addEventHandler);
["firedPlayerNonLocal", DFUNC(handleFired)] call EFUNC(common,addEventHandler);
