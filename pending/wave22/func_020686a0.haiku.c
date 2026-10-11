#include "ffc/types.h"

typedef struct {
    uint32_t pad[19];
    uint32_t flag : 1;
} Obj;

void func_020686a0(Obj *p) {
    uint8_t *b = (uint8_t *)p;
    p->pad[25] = 0;
    if (!p->flag) {
        uint32_t m = 0xfe;
        uint32_t v;
        *(uint16_t *)(b + 0x4e) = 0;
        v = b[0x4c];
        v = v & ~m;
        b[0x4c] = (uint8_t)v;
        return;
    }
    {
        uint16_t *q = *(uint16_t **)(b + 0x54);
        *q = 0;
        *(uint32_t *)(b + 0x50) = 0;
    }
}
