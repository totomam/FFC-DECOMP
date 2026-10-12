#include "ffc/types.h"

extern int func_020891f4(int a, int b);
extern void func_020889f4(int a);
extern int func_0207ced8(void *a, uint32_t b, int c);
extern void func_020878ac(void *p, int v);
extern void func_020878d0(void);
extern int func_02089218(int a, uint32_t b, int c);
extern uint32_t func_02088978(void);
extern void func_02087024(int a);
extern void func_0208898c(uint32_t a);
extern void func_02087874(void *p, int v);
extern uint32_t data_02141510[];

typedef struct Obj {
    uint32_t *ptr;
    uint32_t flags;
    uint32_t pad[(0x51c - 8) / 4];
    uint32_t f51c;
} Obj;

int func_0207ced8(void *self, uint32_t b, int c) {
    Obj *a = (Obj *)self;
    int dev = 0xb;
    uint32_t mask;
    uint32_t *p;
    uint32_t sp4;

    uint32_t m2 = 2;
    if (!(*(volatile uint32_t *)&a->flags & m2)) {
        a->flags |= m2;
        if (func_020891f4(dev, 1) == 0) {
            do {
                func_020889f4(0x32);
            } while (func_020891f4(dev, 1) == 0);
        }
        func_0207ced8(a, 0, 1);
    }

    func_020878ac(a->ptr, 0x60);
    func_020878d0();
    a->f51c = data_02141510[1];

    do {
        a->flags |= 0x20;
        do {
        } while (func_02089218(dev, b, 1) < 0);
        if (b == 0) {
            p = a->ptr;
            do {
            } while (func_02089218(dev, (uint32_t)p, 1) < 0);
        }
        sp4 = func_02088978();
        mask = 0x20;
        if (a->flags & mask) {
            do {
                func_02087024(0);
            } while (a->flags & mask);
        }
        func_0208898c(sp4);
        func_02087874(a->ptr, 0x60);
        if (a->ptr[0] != 4) {
            break;
        }
        c--;
    } while (c > 0);

    return a->ptr[0] == 0;
}
