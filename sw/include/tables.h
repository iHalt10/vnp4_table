#ifndef TABLE_H
#define TABLE_H

#include "driver/include/vitisnetp4_table.h"

#include <stdint.h>

#define TABLE_NAME "mac_addrs"
#define ACTION_NAME "replace_src"

typedef struct MacAddrsTable {
    XilVitisNetP4TableCtx* tableCtx;
    uint32_t replaceSrcActionId;
} MacAddrsTable;

#define SAMPLE_KEY   {0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA}
#define SAMPLE_MASK  {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
#define SAMPLE_VALUE {0x00, 0x01, 0x02, 0x03, 0x04, 0x05}

#endif // TABLE_H
