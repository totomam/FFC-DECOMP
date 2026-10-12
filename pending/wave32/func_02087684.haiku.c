#include "ffc/types.h"

extern uint32_t *func_02086bf8(void *p);
extern void func_02087058(void);

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t lo : 24;
    uint32_t hi : 8;
} Obj;

void func_02087684(void *a0) {
    uint8_t *p = (uint8_t *)a0;
    if (*(uint32_t *)(p + 0x88) == 0) {
        return;
    }
    do {
        Obj *o = (Obj *)func_02086bf8(p + 0x88);
        o->w2 = 0;
        o->lo = 0;
        func_02087058();
    } while (*(uint32_t *)(p + 0x88) != 0);
}
