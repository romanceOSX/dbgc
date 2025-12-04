//
// dbgc
// General purpose C debugging utilities library
//

#ifndef DBGC_DBGC_H
#define DBGC_DBGC_H

#include <stddef.h>

void dbgPrintHex(void* data, size_t len);
void dbgHexDump(const void *buffer, size_t length);

#endif // DBGC_DBGC_H

