/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint16_t vcount_pad;
    uint16_t vcount;
    uint8_t pad1[0x200];
    uint32_t ime;
} Regs;

void func_02087904(void) {
    Regs *r = (Regs *)0x4000000;
    uint32_t saved = r->ime;
    r->ime = (uint32_t)r;
    do {
    } while (r->vcount != 0);
    r->ime = saved;
}
