#include "ffc/types.h"

extern uint8_t *func_020235fc(void);

typedef struct {
    uint32_t pad0[3];
    uint32_t c;
    uint32_t pad1[2];
    uint32_t flags;
} Ctx;

void func_02024c20(uint8_t *self, int idx, int flag)
{
    Ctx *p = *(Ctx **)(self + 0xe8);
    uint8_t *entry;
    int i;
    int n;
    uint8_t val;

    if (p->c == 0 || !(p->flags & 8)) {
        return;
    }
    entry = func_020235fc() + 4 + idx * 0x60;
    n = entry[0x40];
    i = 0;
    if (n > 0) {
        val = 1;
        if (flag) {
            val = i;
        }
        do {
            self[0x1d3 + entry[0x41 + i]] = val;
            i++;
        } while (i < n);
    }
}
