#include <stdint.h>
#include <pic32mx.h>
#include "mipslab.h"


int getsw( void ){
    return (LATD & 0x780) >> 8;
}

int getbtns(void){

    return (LATD & 0xe0) >> 5;
}