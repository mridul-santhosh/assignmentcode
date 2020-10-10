#include <cpp_api/navigation_bridge.h>
#include <iostream>

Navigation nav;
int main(int argc, char *argv[])
{
    nav.take_off(5.0); //drone taking off
    nav.position_set(6.5,0,-5);//drone moving to waypoint 1  
    nav.position_set(6.5,6.5,-5);//drone moving to waypoint 2
    nav.position_set(0,6.5,-5);//drone moving to waypoint 3
    nav.position_set(0,0,-5);//drone retuning to the origin
    nav.land(false); //drone landing
}
