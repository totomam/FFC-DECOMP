#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t b13;
    uint32_t w14;
    void *p18;
    uint32_t inner[6];
} Obj;

extern void func_0208657c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_0208658c(uint32_t type, void (*fn)(void));
extern void func_02054184(void);
extern uint8_t data_020b0b68[];
extern uint8_t data_020b0b54[];
extern void *data_0213e01c[];
extern void func_01ff8830(void);
extern void func_01ff8878(void);
extern void func_01ff88c0(void);
extern void func_01ff8908(void);
extern void func_01ff8950(void);

#define CLR8(o, f) { uint32_t t = *(volatile uint8_t *)&(o)->f; t &= ~0xff; (o)->f = (uint8_t)t; }

#define NEW_OBJ(o) \
    o = (Obj *)func_0205681c(0x34); \
    if (o != 0) { \
        o->wc &= ~0xff; \
        o->vt = data_020b0b68; \
        func_02087620(&o->inner); \
        CLR8(o, b10); \
        CLR8(o, b11); \
        CLR8(o, b12); \
        o->w14 = 0; \
        o->p18 = &o->w14; \
        o->vt = data_020b0b54; \
        CLR8(o, b11); \
    }

void func_02053f60(void) {
    Obj *o;
    func_0208657c();
    NEW_OBJ(o);
    data_0213e01c[1] = o;
    func_0208658c(2, func_01ff8830);
    NEW_OBJ(o);
    data_0213e01c[0] = o;
    func_0208658c(1, func_01ff8878);
    NEW_OBJ(o);
    data_0213e01c[2] = o;
    func_0208658c(4, func_01ff88c0);
    NEW_OBJ(o);
    data_0213e01c[12] = o;
    func_0208658c(0x1000, func_01ff8908);
    NEW_OBJ(o);
    data_0213e01c[13] = o;
    func_0208658c(0x2000, func_01ff8950);
    func_02054184();
}
