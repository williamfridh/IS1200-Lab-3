# S1200-Lab-3

# Questions for Assignment 1

## Test pressing BTN3 and BTN2 at the same time. What happens? Why?

### Answer:
 

## Three device-registers for input/output control are TRISE, TRISESET, and TRISECLR.
## Their functions are related. How? What are the differences?

### Answer: 

Their function is to set what is to be an input/output. Using TRISE you set the value of a specific bit to either 1 or 0. 
And with TRISESET you set the bit to be only one, and TRISECLR you set a bit to 0.  

## In the generated assembly code, in which MIPS register will the return values from
## functions getbtns and getsw be placed in. You should be able to answer this question
## without debugging the generated assembly code.

## In this exercise, we explained which bits that should be used in Port D and Port E. How can
## you find this information in the PIC32 and ChipKIT manuals? Be prepared to demonstrate
## how to find this information in the manuals. 

# Questions for Assignment 2

## When the time-out event-flag is a "1", how does your code reset it to "0"?

## What would happen if the time-out event-flag was not reset to "0" by your code? Why?

## Which device-register (or registers) must be written to define the time between time-out
## events? Describe the function of that register (or of those registers).

## If you press BTN3 quickly, does the time update reliably? Why, or why not? If not, would
## that be easy to change? If so, how?

# Questions for Assignment 3

## When the time-out event-flag is a "1", how does your code reset it to "0"?

Answer: 

## What would happen if the time-out event-flag was not reset to "0" by your code? Why?

## From which part of the code is the function user_isr called? Why is it called from there?

## Why are registers saved before the call to user_isr? Why are only some registers saved?

## Which device-register (or registers), and which processor-register (or registers) must be
## written to enable interrupts from the timer? Describe the functions of the relevant registers.
