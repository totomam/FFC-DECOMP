#include "ffc/types.h"

typedef struct {
    uint32_t pre;
    uint32_t w[3];
} Buf;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t d;
} Loc;

extern uint32_t data_0213df18;
extern uint32_t data_0213df20;
extern uint32_t data_020b8e44;
extern uint32_t data_020afe70[2];

extern uint32_t func_0204f7ec(uint32_t object);
extern void func_020173b0(void *out, uint32_t arg);
extern void *func_02052d90(uint32_t mar, uint32_t index);
extern void func_0203919c(void *out, uint32_t value);
extern void func_020424e0(uint32_t value);
extern uint32_t func_ov003_021464ac(void);
extern uint32_t func_0203be48(uint32_t obj, void *buf, uint32_t r2, uint32_t r3);
extern void func_020059cc(void *object);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);

void func_02048db4(uint8_t *self) {
    Loc loc;
    Buf bufs;
    uint32_t old;
    uint8_t *p;
    uint32_t off;
    uint16_t val;
    uint32_t t;
    uint32_t d0;
    uint32_t d1;

    t = func_0204f7ec(data_0213df18);
    old = data_0213df20;
    data_0213df20 = t;
    func_020173b0(&loc, data_020b8e44);
    p = (uint8_t *)func_02052d90(loc.b, loc.c);
    off = *(uint32_t *)(p + 0xc);
    val = *(uint16_t *)(p + off);
    func_0203919c(bufs.w, val);
    func_020424e0(*(uint32_t *)(self + 0x94));
    t = func_0203be48(data_0213df20, bufs.w, func_ov003_021464ac(), 0);
    func_020059cc(bufs.w);
    func_02056bc0(self + 0x14, t);
    d0 = data_020afe70[0];
    d1 = data_020afe70[1];
    *(uint32_t *)(self + 0x84) = d1;
    *(uint32_t *)(self + 0x80) = d0;
    if (loc.b != 0) {
        if (loc.d != 0) {
            func_02052d3c(loc.b, loc.c);
        }
        func_02052c04(loc.b);
    }
    func_02053290(&loc);
    data_0213df20 = old;
}
