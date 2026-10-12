#include "ffc/types.h"

typedef struct {
    uint32_t unk0;
    volatile uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint8_t pad10[0x18];
    uint32_t f28;
} Obj;

extern Obj *func_ov000_02164ed0(void);
extern void func_ov000_02165938(uint32_t ticks);
extern int func_ov000_021657fc(Obj *p);
extern void func_ov000_0216582c(void *p);
extern void func_0208f448(void *fn);
extern void func_ov000_02165834(void *p);
extern void func_ov000_0216583c(void *p);
extern uint32_t func_ov000_021686f4(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov001_021732b8(void);
extern void func_ov000_02164ed8(void);

void func_ov000_02164ee8(void)
{
    Obj *p = func_ov000_02164ed0();

    while (p->fc != 0) {
        func_ov000_02165938(100);
    }

    if (func_ov000_021657fc(p) == 1) {
        if (p->f4 == 0) {
            func_ov000_0216582c(&p->pad10);
            func_0208f448(func_ov000_02164ed8);
            p->f4 = 1;
        }
        func_ov000_02165834(&p->pad10);
        func_ov000_0216583c(&p->pad10);
        while (p->fc != 0) {
            func_ov000_02165938(100);
        }
        p->f28 = func_ov000_021686f4(4, 10, 0);
        func_ov001_021732b8();
        p->f8 = 1;
        return;
    }
    while (p->f4 == 0) {
        func_ov000_02165938(100);
    }
    func_ov000_02165834(&p->pad10);
    func_ov000_0216583c(&p->pad10);
    while (p->f8 == 0) {
        func_ov000_02165938(100);
    }
}
