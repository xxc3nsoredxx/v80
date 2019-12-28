#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "v80.h"

uint8_t ramdisk [65536];

int main () {
    memset(ramdisk, 0, sizeof(ramdisk));

    v80_start();

    return 0;
}
