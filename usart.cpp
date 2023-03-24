/*
========================================================================= [FILE INFORMATION] =========================================================================
                     .^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~:            File                        |   /videoram.h
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J            Last update                 |   24-03-2023
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J            Programming language        |   AVR C++
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J            Credits                     |   COOKIE
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J                                        |   
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@?                                        |   
             ?PPPPPPPG@@@@@@@@5!!!!!!!!!!!!!!!!Y@@@@@@@BPPPPPPPPJ.                              |   
             P@@@@@@@@@@@@@@@@?                !@@@@@@@@@@@@@@@@B.  Description                 |   Sources of USART communication protocol driver.
             P@@@@@@@@@@@@@@@@J                7@@@@@@@@@@@@@@@@G.                              |   
             P@@@@@@@@@@@@@@@@J                7@@@@@@@@@@@@@@@@G.                              |   
             P@@@@@@@@@@@@@@@@J                7@@@@@@@@@@@@@@@@G.                              |   
    ^YYYYYYYY#@@@@@@@#J??????J~                ^J??????G@@@@@@@@G.                              |   
    7@@@@@@@@@@@@@@@@B                                 J@@@@@@@@G.                              |   
    !@@@@@@@@@@@@@@@@B.                                J@@@@@@@@G.                              |   
    !@@@@@@@@@@@@@@@@B.                                J@@@@@@@@G.                              |   
    !@@@@@@@@@@@@@@@@B.                                Y@@@@@@@@B.                              |   
    !@@@@@@@@@@@@@@@@B.                                !55555555?.                              |   
    !@@@@@@@@@@@@@@@@B.                                                                             
    !@@@@@@@@@@@@@@@@B.                                                                             
    !@@@@@@@@@@@@@@@@B.         Copyright (C) 2023 COOKIE
    !@@@@@@@@@@@@@@@@B.                                                                             
    !@@@@@@@@@@@@@@@@B.         This file is licensed as a part of product. This file ("part of product") and product itself,
    !@@@@@@@@@@@@@@@@B.         are licensed with OPENCL license. Its file is located in root directory and is called "license.txt."
    !@@@@@@@@@@@@@@@@B.                                                                             
======================================================================================================================================================================*/

#ifndef F_CPU
    #define F_CPU 16000000UL
#endif
#define FOSC 16000000UL
#define BAUDRATE 9600
#define UBRR (FOSC/(BAUDRATE << 4)) - 1

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

#include "usart.h"