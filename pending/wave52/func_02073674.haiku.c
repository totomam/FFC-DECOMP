#include "ffc/types.h"

extern void func_02092924(void *object, void *arg);
extern uint32_t func_0207309c(uint32_t item);
extern uint32_t func_020730a0(uint32_t item);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint8_t data_020b2580;
extern uint8_t data_020b2584[];
extern uint8_t data_020b258c[];

typedef struct Obj {
    uint8_t hdr[0x26];
    uint8_t f26;
    uint8_t mid[0x81];
    int32_t count;
    uint32_t items[1];
} Obj;

void func_02073674(Obj *self, uint32_t flag) {
    uint8_t buf[0x80];
    uint8_t *p;
    int32_t i;
    int32_t n;
    uint32_t v;
    uint32_t w;

    self->f26 = data_020b2580;
    p = &self->f26;
    n = self->count;
    for (i = 0; i < n; i++) {
        if (i > 0) {
            func_02092924(p, data_020b2584);
        }
        v = func_0207309c(self->items[i]);
        w = func_020730a0(self->items[i]);
        func_02091b10(buf, (uint32_t)data_020b258c, v, w);
        func_02092924(p, buf);
        n = self->count;
    }
    if (flag != 0) {
        if (n > 0) {
            func_02092924(&self->f26, data_020b2584);
        }
        func_02092924(&self->f26, (void *)flag);
    }
}
