#include "ffc/types.h"

extern void func_02033e04(uint32_t *s);
extern uint32_t func_0203608c(uint8_t *p);
extern void func_02033e28(uint32_t *s, int i, uint8_t *p);
extern void func_02033e40(uint32_t *s, uint8_t *p);
extern void func_02033f28(uint32_t *o);
extern void func_020340b8(uint32_t *o, uint32_t v);
extern void func_02034030(uint32_t *o, uint32_t *s, uint32_t a, uint32_t b);
extern uint32_t *func_020340c0(uint32_t *o);
extern void func_02034014(uint32_t *o);
extern void func_02033e24(uint32_t *s);

typedef struct {
    uint32_t pad;
    uint32_t s[13];
    uint32_t o[28];
} Frame;

uint32_t func_02036174(uint8_t *p) {
    Frame f;
    int i;
    uint32_t r;

    func_02033e04(f.s);
    f.s[0] = *(uint32_t *)(p + 0x58) & 0xff;
    f.s[1] = func_0203608c(p);
    f.s[10] = (*(uint32_t *)(p + 0x58) << 13) >> 21;
    for (i = 0; i < 4; i++) {
        func_02033e28(f.s, i, p + 4 + i * 8);
    }
    func_02033e40(f.s, p + 0x24);
    func_02033f28(f.o);
    func_020340b8(f.o, 1);
    func_02034030(f.o, f.s, 0, 0);
    r = *func_020340c0(f.o);
    func_02034014(f.o);
    func_02033e24(f.s);
    return r;
}
