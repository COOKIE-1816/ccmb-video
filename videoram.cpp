/**/

#include "videoram.h"

/*void VideoRam::initialize() [

]*/

videoram_chip* VideoRam::detect() {
    videoram_chip* TMP;
    int i;

    TMP[0].bytes = 512*1024;    TMP[1].bytes = 512*1024;
    TMP[0].id = 0x00;           TMP[1].id = 0x01;

    /*for(i = 2; i < 4; i++) {

    }*/

    return TMP;
}