#include "ffc/types.h"

extern void func_ov010_021cefb4(uint32_t arg);
extern uint32_t func_0203b708(uint32_t arg);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0209de38;

typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    uint32_t pad2;
    uint32_t f0c;
    uint32_t pad10;
    uint8_t  f14[0x6c];
    uint32_t *f80;
    uint32_t f84;
} Obj;

void func_ov010_021caeac(Obj *s) {
    uint32_t v = s->f84;
    if (v <= 0x13) {
        func_ov010_021cefb4((uint32_t)s->f80);
        if (s->f84 < s->f80[0x62] - 1) {
            uint32_t node = func_0203b708(data_0209de38);
            func_02056bc0(s->f14, (void *)node);
        }
    } else {
        s->f0c = (s->f0c & ~0xffu) | 2;
    }
    s->f84 = s->f84 + 1;
}
