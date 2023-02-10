/* mipslabwork.c

   This file written 2015 by F Lundevall
   Updated 2017-04-21 by F Lundevall

   This file should be changed by YOU! So you must
   add comment(s) here with your name(s) and date(s):

   This file modified 2017-04-31 by Ture Teknolog 

   For copyright and licensing, see file COPYING */

#include <stdint.h>   /* Declarations of uint_32 and the like */
#include <pic32mx.h>  /* Declarations of system-specific addresses etc */
#include "mipslab.h"  /* Declatations for these labs */

int mytime = 0x0000;

char textstring[] = "text, more text, and even more text!";

/* Interrupt Service Routine */
void user_isr( void )
{
  return;
}

/* Lab-specific initialization goes here */
void labinit( void )
{
  volatile int * trise = (volatile int *) 0xbf886100;                 // Defined pointer to TRISE
  *trise = *trise & 0xfffffff0;                                       // Set ports 0-7 as outputs

  PORTD = PORTD & 0xfe0;                                              // Set ports 11 through 5 as inputs

  return;
}

/* This function is called repetitively from the main program */
volatile int * porte = (volatile int *) 0xbf886110;                   // Supposed to be inside labwork(), but unnecesarry
void labwork( void )
{
  *porte = mytime;                                                    // Set let value to mytime.
  int btn = getbtns();
  if(btn & 0x8){                                                      //Check if button is pressed, if yes get switch
      mytime = mytime | (getsw() << 12);                                   
  }
 


  delay( 1000 );
  time2string( textstring, mytime );
  display_string( 3, textstring );
  display_update();
  tick( &mytime );
  display_image(96, icon);
}
