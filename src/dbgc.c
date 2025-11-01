//
// Debug library module
//

#include <stdint.h>
#include <stdio.h>

#include "dbgc/dbgc.h"

//
// Raw prints the provided data to stdout
//
void dbgPrintHex(void* data, size_t len) {
    uint8_t* offset = (uint8_t *)data;
    // print each byte
    for (size_t i = 0; i < len; ++i) {
        printf("%02x ", *(offset + i));
        if (i == 0)
            continue;
        if ((i + 1) % 8 == 0) {
            printf("\n");
            continue;
        }
        if ((i + 1) % 4 == 0)
            printf("  ");
    }
    printf("\n");
}

