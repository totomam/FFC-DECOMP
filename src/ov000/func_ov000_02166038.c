#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void *func_ov000_02165208(void);
extern void func_ov000_021653f4(void *p);
extern void func_ov000_02165180(void *obj, uint32_t x);
extern void func_ov000_02166180(void);
extern void func_ov000_02166108(void);
extern void func_ov000_021660f0(void);
extern void func_ov000_02166194(void);
extern void func_ov000_02166164(void);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
} S;

typedef struct {
    uint32_t pad[8];
    void *p20;
    void *p24;
    void *p28;
    void *p2c;
    void *p30;
    void *p34;
} Obj;

uint32_t func_ov000_02166038(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)
{
    S *p = (S *)func_ov000_021653d4(0x34);
    Obj *o;

    if (p == 0) {
        return 0;
    }
    p->f0 = a3;
    p->f4 = 0;
    p->f8 = a0;
    p->fc = a1;
    p->f10 = a2;
    p->f1c = 0;
    p->f14 = 0;
    p->f18 = 0;
    p->f20 = a5;
    p->f2c = 0;
    p->f30 = 0;

    o = (Obj *)func_ov000_02165208();
    if (o == 0) {
        func_ov000_021653f4(p);
        return 0;
    }
    o->p28 = (void *)func_ov000_02166180;
    o->p24 = (void *)func_ov000_02166108;
    o->p34 = (void *)func_ov000_021660f0;
    o->p30 = (void *)func_ov000_02166194;
    o->p2c = (void *)func_ov000_02166164;
    o->p20 = p;
    p->f24 = (uint32_t)o;
    func_ov000_02165180(o, a4);
    return (uint32_t)p;
}
