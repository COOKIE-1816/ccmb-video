/*
========================================================================= [FILE INFORMATION] =========================================================================
                     .^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~:            File                        |   /usart.h
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J            Last update                 |   24-03-2023
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J            Programming language        |   AVR C++
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J            Credits                     |   COOKIE
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@J                                        |   
                     ^&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@?                                        |   
             ?PPPPPPPG@@@@@@@@5!!!!!!!!!!!!!!!!Y@@@@@@@BPPPPPPPPJ.                              |   
             P@@@@@@@@@@@@@@@@?                !@@@@@@@@@@@@@@@@B.  Description                 |   Headers for USART communication protocol driver.
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

#pragma once
#include <stdint.h>

class Usart {
    public:
    void init(uint16_t ubrr_value);

};