#pragma once

typedef struct videoram_chip {
    int bytes;
    int id;
} videoram_chip;

class VideoRam {
    public:
    void initialize(void);
    videoram_chip* detect();
};