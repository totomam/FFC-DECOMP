#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x2c];
    uint8_t f2c;
    uint8_t pad2d[0x34 - 0x2d];
    uint16_t f34;
    uint8_t pad36[0x38 - 0x36];
    uint16_t f38;
    uint8_t pad3a[0x44 - 0x3a];
} Entry;

extern Entry data_0213e264[16];
extern void func_02079dc0(Entry *e, uint32_t x);

void func_02079908(uint32_t a, uint32_t b) {
    int i;
    for (i = 0; i < 16; i++) {
        Entry *e = &data_0213e264[i];
        if (e->f2c != 0 && e->f34 == 1 && e->f38 == a) {
            func_02079dc0(e, b);
        }
    }
}
