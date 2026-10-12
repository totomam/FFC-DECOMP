#include "ffc/types.h"

extern uint8_t data_ov002_021d4790[];
extern uint32_t func_02037748(void);
extern void *func_02037700(void);
extern uint32_t func_02038b48(const void *object);
extern void func_0203911c(void);
extern void func_02056c4c(void *p);
extern void func_02051a2c(uint32_t a, uint32_t b);
extern void func_02051980(void);
extern void func_02051ad8(uint32_t a);
extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void *f);
extern void func_02056db0(void *p);
extern void func_02037b90(void);

typedef struct Obj {
    void (**vt)(struct Obj *);
} Obj;

typedef struct Self {
    void *vt;
    uint8_t pad[0x3dc - 4];
    Obj *obj;
} Self;

void *func_ov002_02195e70(void *self) {
    Self *s = (Self *)self;
    uint8_t *p = (uint8_t *)self;

    s->vt = data_ov002_021d4790;
    if (s->obj) {
        s->obj->vt[1](s->obj);
        s->obj = 0;
    }

    if (func_02037748()) {
        uint32_t r = func_02038b48(func_02037700());
        if (r == 1) {
            func_02037700();
            func_0203911c();
        }
    }

    func_02056c4c(p + 0x14);
    func_02056c4c(p + 0x48);
    func_02051a2c(0, 0);
    func_02051980();
    func_02051a2c(0xa, 0x400);
    func_02051ad8(0);
    func_0209d02c(p + 0x94, 2, 0x160, func_02037b90);
    func_02056db0(p);
    return p;
}
