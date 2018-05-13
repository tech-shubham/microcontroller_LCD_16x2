#define ATMEGA2560

#define F_CPU 16000000UL			/* Define CPU Frequency 8MHz */
#include <avr/io.h>			/* Include AVR std. library file */
#include <util/delay.h>			/* Include Delay header file */
#include <stdio.h>			/* Include Std. i/p o/p file */
#include <string.h>			/* Include String header file */
#include <avr/interrupt.h>
#include<inttypes.h>
#include <stdlib.h>
#include <util/twi.h>

#ifdef ATMEGA2560

#define P0 "PH_0"
#define P1 "PH_1"
#define P2 "PD_6"
#define P3 "PD_2"
#define P4 "PG_4"
#define P5 "PG_3"
#define P6 "PH_3"
#define P7 "PH_4"
#define P8 "PH_5"
#define P9 "PL_3"

#define P10 "PJ_2"
#define P11 "PB_2"
#define P12 "PB_3"
#define P13 "PB_1"
#define P14 "PD_1"
#define P15 "PD_0"
#define P16 "PC_0"
#define P17 "PC_1"
#define P18 "PC_2"
#define P19 "PC_3"

#define P24 "PC_4"
#define P25 "PC_5"
#define P26 "PC_6"
#define P27 "PC_7"
#define P48 "PD_4"
#define P49 "PD_5"

#define P50 "PG_0"
#define A0	"PF_2"
#define A1	"PF_3"
#define A2	"PF_5"
#define A3	"PF_6"

/////////////////////////////////New Macros Numbers ///////////////////////////////

#define P51 "PE_1"
#define P52 "PJ_2"
#define P53 "PG_0"
#define P54 "PH_6"
#define P55 "PB_6"
#define P56 "PG_2"
#define P57 "PJ_5"
#define P58 "PE_7"
#define P59 "PE_5"
#define P60 "PA_3"
#define P61 "PA_4"
#define P62 "PD_7"
#define P63 "PE_7"
#define P64 "PL_2"
#define P65 "PE_6"
#define P66 "PB_4"
#define P67 "PB_0"
#define P68	"PJ_6"
#define P69 "PE_2"

#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0



#endif


void set_value(char *str, unsigned int p_value);
void set_direction(char *str, unsigned int p_direction);
int digital_Read(unsigned char *str);


