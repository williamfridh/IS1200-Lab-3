#include <stdint.h>
#include <pic32mx.h>
#include "mipslab.h"


int getsw( void ){

    return (LATD & 0x780) >> 7;
    }