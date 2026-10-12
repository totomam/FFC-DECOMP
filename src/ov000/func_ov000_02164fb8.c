#include "ffc/types.h"

extern uint32_t func_ov000_02164ed0(uint32_t *a);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov000_021651d4(uint32_t *a);
extern void func_ov000_02164fa0(uint32_t *a, uint32_t x);
extern void func_ov000_02165834(uint32_t *p);
extern int func_ov000_02168768(uint32_t *l);
extern uint32_t *func_ov000_0216876c(uint32_t *l, int i);
extern void func_ov000_02168814(uint32_t *l, int i);
extern void func_ov000_021653f4(uint32_t *a);
extern void func_ov000_0216583c(uint32_t *p);

int func_ov000_02164fb8(uint32_t *a) {
    uint32_t *p = (uint32_t *)func_ov000_02164ed0(a);
    uint32_t r1 = 0;
    uint32_t r4;
    int i;
    int count;

    if (a == 0) {
        return 4;
    }
    if (a[5] != 0 && a[13] != 0) {
        r1 = ((uint32_t (*)(uint32_t))a[13])(a[8]);
    }
    if (a[6] != 0 || r1 != 1) {
        goto else_part;
    }
    if (a[1] == 0) {
        goto ret1;
    }
    if (func_ov000_0216591c() - a[2] <= a[1]) {
        goto ret1;
    }
    func_ov000_021651d4(a);
    func_ov000_02164fa0(a, 3);
    goto ret1;

else_part:
    if (r1 == 1) {
        goto ret1;
    }
    r4 = 1;
    if (a[5] != 0) {
        func_ov000_02164fa0(a, r1);
        a[5] = 0;
    }
    if (a[12] != 0) {
        r4 = ((uint32_t (*)(uint32_t))a[12])(a[8]);
    }
    if (r4 == 0) {
        goto ret1;
    }
    func_ov000_02165834(p + 4);
    count = func_ov000_02168768((uint32_t *)p[10]);
    for (i = 0; i < count; i++) {
        uint32_t *e = func_ov000_0216876c((uint32_t *)p[10], i);
        if (*e == (uint32_t)a) {
            func_ov000_02168814((uint32_t *)p[10], i);
            func_ov000_021653f4(a);
            break;
        }
    }
    func_ov000_0216583c(p + 4);
    return 4;

ret1:
    return 1;
}
