#include "ffc/types.h"

extern int func_ov000_0215b5f8(int a);
extern uint8_t *func_ov000_02163350(void);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern uint32_t func_ov000_0215b534(void);
extern int func_ov000_02163408(void);
typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t pad;
    uint16_t c;
} Elem;

extern Elem *func_ov000_02163634(int i);
extern Elem *func_ov000_02163608(void);
extern void func_ov000_0215eb30(int id, uint32_t a, uint32_t b, uint16_t c, uint32_t *arr, int n);
extern int func_ov000_0215fed0(void);

int func_ov000_02162d20(int a)
{
    uint32_t arr[3];
    uint64_t t, d, r;
    uint8_t *b;
    Elem *p, *q;
    int i;

    if (func_ov000_0215b5f8(a) == 0) {
        return 1;
    }
    if (*(int32_t *)(func_ov000_02163350() + 0x61c) == 0x13 ||
        *(int32_t *)(func_ov000_02163350() + 0x61c) == 0x14) {
        return 1;
    }
    if (a == 0) {
        t = func_020882cc();
        b = func_ov000_02163350();
        d = t - *(uint64_t *)(b + 0x7a0);
        r = func_0209a6d4(d << 6, 0x82ea);
        if (r <= 0x3a98) {
            goto done;
        }
    }
    b = func_ov000_02163350();
    arr[0] = *(uint32_t *)(b + 0x678);
    arr[1] = func_ov000_0215b534();
    b = func_ov000_02163350();
    arr[2] = *(uint32_t *)(b + 0x7c8);
    for (i = 0; i < func_ov000_02163408(); i++) {
        p = func_ov000_02163634(i);
        q = func_ov000_02163608();
        if (p != q) {
            func_ov000_0215eb30(0x83, p->a, p->b, p->c, arr, 3);
            if (func_ov000_0215fed0() != 0) {
                return -1;
            }
        }
    }
    t = func_020882cc();
    b = func_ov000_02163350();
    *(uint64_t *)(b + 0x7a0) = t;
done:
    return 1;
}
