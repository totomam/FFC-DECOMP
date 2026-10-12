#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void);
extern void func_ov000_021652a8(int a, int b, int c, const void *d);
extern void func_ov001_02185228(void *p, int m);
extern void func_ov001_021851ac(void *p);
extern const char data_ov001_02193640[];
extern const char data_ov001_02193654[];
extern const char data_ov001_02193694[];

typedef struct {
    int32_t state;
    uint8_t pad0[0x9c - 4];
    void (*fn)(int, const void *, uint32_t);
    uint8_t pad1[0xb4 - 0xa0];
    uint32_t t0;
    uint32_t t1;
    int32_t bc;
    int32_t cnt;
    uint8_t pad2[0x114 - 0xc4];
    uint32_t arg;
} Obj;

void func_ov001_02183f48(Obj *p)
{
    uint32_t now = func_ov000_0216591c();
    int32_t cnt;
    uint32_t t;
    int32_t zero;

    if (p->state == -1) {
        func_ov000_021652a8(3, 0, 2, data_ov001_02193640);
        return;
    }

    cnt = p->cnt;
    if (cnt > 0 && now - p->t0 > 10000) {
        if (cnt >= 4) {
            zero = 0;
            func_ov000_021652a8(3, 0, 1, data_ov001_02193654);
            p->cnt = zero;
            p->fn(5, data_ov001_02193694, p->arg);
            return;
        }
        func_ov001_02185228(p, 3);
        p->cnt++;
    } else {
        t = p->t0;
        if (p->bc != 0 && now - t > 10000) {
            func_ov001_02185228(p, 1);
        } else if (!(now - t <= 60000 && t != 0 && now >= t)) {
            func_ov001_02185228(p, 0);
        }
    }

    now = func_ov000_0216591c();
    if (now - p->t1 > 20000) {
        func_ov001_021851ac(p);
    }
}
