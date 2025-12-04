//
// Debug library module
//

#include <stdint.h>
#include <stdio.h>
#include <ctype.h>

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

//
// Print the data in hexdump format
// **ai
//
void dbgHexDump(const void *buffer, size_t length) {
    size_t i, j;
    const unsigned char *data = (const unsigned char *)buffer;

    for (i = 0; i < length; i += 16) {
        // Print the offset
        printf("%08x ", (unsigned int)i);
        // Print hex values
        for (j = 0; j < 16; j++) {
            if (i + j < length)
                printf("%02x ", data[i + j]);
            else
                printf("   ");
        }
        // Print ASCII characters
        printf(" |");
        for (j = 0; j < 16; j++) {
            if (i + j < length)
                printf("%c", isprint(data[i + j]) ? data[i + j] : '.');
            else
                printf(" ");
        }
        printf("|\n");
    }
}

