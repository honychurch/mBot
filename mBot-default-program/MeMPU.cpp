#include "MeMPU.h"
/*           MPU 9dof Sensor                 */
// MeMPU::MeMPU(): MePort(1)
// {
// }
MeMPU::MeMPU(MEPORT port): MePort(port)
{
    
}

double MeMPU::heading()
{
    //Returns heading in degrees between 0.0 and 360.0
    return 1.0;
}
