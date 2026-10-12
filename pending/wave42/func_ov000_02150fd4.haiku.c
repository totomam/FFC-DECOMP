#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void *p);
extern void func_ov000_0214fbe4(int x);
extern void func_ov000_02150958(void);
extern void func_ov000_0214fb84(int a, uint8_t *b, int c, int d);
extern void func_ov000_02150534(int x);
extern void func_02087874(void *p, int x);
extern void func_ov000_02150218(uint8_t *a, uint8_t *b, uint8_t *c, int d);

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint16_t d;
    void *e;
} S;

void func_ov000_02150fd4(void *p0)
{
    S *p = (S *)p0;
    uint8_t *base = func_ov000_0214fa54(p0);
    uint8_t *ptr;

    switch (p->b) {
    case 0:
        switch (p->c) {
        case 0xe:
            if (base[0x12de] == 0xc) {
                func_ov000_0214fbe4(8);
                func_ov000_02150958();
                return;
            }
            func_ov000_0214fbe4(9);
            func_ov000_0214fb84(0, base + 0x12e0, 0, 0x12de >> 2);
            return;
        case 0xf:
            ptr = (uint8_t *)p->e;
            func_ov000_02150534((uint8_t)(*(uint16_t *)(ptr + 0xe) >> 8));
            func_02087874(p->e, 0x620);
            ptr = (uint8_t *)p->e;
            func_ov000_02150218(ptr + 0x1e, ptr + 0x18, ptr + 0x2c, *(uint16_t *)(ptr + 6));
            return;
        default:
            func_ov000_0214fbe4(0xb);
            func_ov000_0214fb84(7, base + 0x12e0, p->c, 0x4c6);
            return;
        }
    case 4:
    default:
        func_ov000_0214fbe4(0xb);
        func_ov000_0214fb84(7, base + 0x12e0, 0, 0x4d1);
        return;
    }
}
