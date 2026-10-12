#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_02160f20(void);
extern void func_ov000_02159014(void *a, void *b);
extern void func_ov000_0215e0d8(int x);
extern uint32_t func_ov000_021599d0(uint32_t x);
extern void func_ov000_0215e500(void);

typedef void (*fn_t)(void *, int, int, int, uint32_t, uint32_t);

void func_ov000_0215dbd8(void *a, void *b)
{
    int flag;
    int r7;
    uint8_t *s;
    uint8_t *t;
    uint8_t *u;
    uint8_t *v;
    uint32_t r5;
    uint32_t w;

    if (func_ov000_02163350() == 0) {
        return;
    }
    if (a == 0) {
        return;
    }
    func_ov000_02160f20();
    func_ov000_02159014(a, b);
    flag = 1;
    func_ov000_0215e0d8(1);
    if (*(uint32_t *)(func_ov000_02163350() + 0x680) != 0) {
        flag = 0;
    }
    s = func_ov000_02163350();
    t = func_ov000_02163350();
    r7 = 1;
    if (t[0x14] != 2) {
        r7 = 0;
    }
    u = func_ov000_02163350();
    r5 = func_ov000_021599d0(*(uint32_t *)(u + 0x680));
    v = func_ov000_02163350();
    w = *(uint32_t *)(v + 0x774);
    ((fn_t)(*(uint32_t *)(s + 0x770)))(a, 0, flag, r7, r5, w);
    func_ov000_0215e500();
}
