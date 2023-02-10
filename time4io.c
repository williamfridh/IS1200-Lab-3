#include <stdint.h>
#include <pic32mx.h>
#include "mipslab.h"


int getsw( void ){
    return (PORTD & 0x780) >> 7;
}

int getbtns(void){

    return (PORTD & 0xe0) >> 5;
}