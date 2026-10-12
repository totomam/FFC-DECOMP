#include "ffc/types.h"

extern void func_ov000_021566ac(uint8_t *p);
extern uint32_t func_ov000_021566f8(uint8_t *p);
extern void func_ov000_02147810(void);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov000_02156c94(void);
extern void func_ov000_02149840(const void *data);
extern void func_ov000_0214b95c(int x);
extern void func_ov000_021477d0(int a, uint32_t b, uint32_t c);
extern int func_ov000_021478f0(void);
extern void func_ov000_02147844(void);
extern void func_ov000_021477a4(void);
extern uint32_t func_02092864(const void *text);
extern int func_ov000_02147e28(void *obj, uint32_t x);
extern void func_ov000_02147ed0(void);
extern int func_ov000_02156658(uint8_t *p);
extern uint64_t func_020882cc(void);
extern int func_ov000_02147e80(void);
extern uint8_t *func_ov000_02147a70(int *n);
extern void func_02084ca4(const void *src, void *dst, uint32_t n);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern int func_ov000_02156708(uint8_t *p);
extern void func_ov000_02147b7c(int n);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern void func_ov000_0214795c(void);
extern void func_ov000_02147984(void);
extern uint8_t data_ov000_02169d9c[];
extern int data_ov000_0216bcb0;

void func_ov000_021567b4(uint8_t *p)
{
    int32_t flag = 0;
    uint8_t *q = p + 0x1138;
    uint8_t *h = p + 0x1a44;
    uint8_t *obj = p + 0x11d8;
    int32_t timeout = *(int32_t *)(p + 0x101c);
    int32_t n;
    uint32_t v;
    uint32_t off_v = 0x112c;
    uint32_t off_s = 0x1a34;
    uint64_t t0;
    int32_t state;

    if (timeout <= 0) {
        timeout = 60000;
    }
    func_ov000_021566ac(p);
    v = func_ov000_021566f8(p);
    if (v == 0) {
        *(int32_t *)(p + 0x1020) = 2;
        return;
    }
    *(uint32_t *)(p + off_v) = v;
    func_ov000_02147810();
    if (*(int32_t *)(p + 0x1130) == 1) {
        func_02084b2c(obj, 0, 0x830);
        *(void **)(obj + 0x810) = (void *)func_ov000_02156c94;
        *(int32_t *)(obj + 0x800) = *(int32_t *)(p + 0x1124);
        *(void **)(q + 0xc) = obj;
        func_ov000_02149840(data_ov000_02169d9c);
        func_ov000_0214b95c(1);
    }
    func_ov000_021477d0(0, *(uint16_t *)(p + 0x1134), v);
    if (func_ov000_021478f0() != 0) {
        *(int32_t *)(p + 0x1020) = 3;
        func_ov000_02147844();
        func_ov000_021477a4();
        return;
    }

    {
        void *tp = *(void **)(p + off_s);
        uint32_t tt = func_02092864(tp);
        n = func_ov000_02147e28(tp, tt);
    }
    if (n <= 0) {
        state = 5;
        goto set_state;
    }
    func_ov000_02147ed0();
    if (!func_ov000_02156658(p)) {
        state = 7;
        goto set_state;
    }

loop_top:
    h[4] = h[4];
    *(uint32_t *)(h + 4) = *(uint32_t *)h;
    *(uint32_t *)(h + 8) = *(uint32_t *)h + *(uint32_t *)(h + 0xc);
    t0 = func_020882cc();

loop_body:
    if (data_ov000_0216bcb0 == 0) {
        state = 5;
        goto set_state;
    }
    n = func_ov000_02147e80();
    if (n < 0) {
        goto fail;
    }
    if (n == 0) {
        goto check_time;
    }
    t0 = func_020882cc();
    {
        uint8_t *src = func_ov000_02147a70(&n);
        int32_t avail;
        int32_t k;
        if (src == 0) {
            goto fail;
        }
        avail = (int32_t)(*(uint32_t *)(h + 8)) - 1 - (int32_t)(*(uint32_t *)(h + 4));
        k = n;
        if (k >= avail) {
            k = avail;
        }
        func_02084ca4(src, *(void **)(h + 4), (uint32_t)k);
        {
            uint8_t *old = *(uint8_t **)(h + 4);
            *(uint8_t **)(h + 4) = old + k;
            old[k] = 0;
        }
        if (flag == 1) {
            func_0208763c(p + 0x1a54);
            *(int32_t *)(p + 0x1a70) += k;
            func_02087678(p + 0x1a54);
        } else {
            flag = func_ov000_02156708(p);
        }
        if (n <= k) {
            func_ov000_02147b7c(k);
        } else {
            func_ov000_02147b7c(n);
            goto fail;
        }
    }

check_time:
    if (*(int32_t *)(p + 0x1a6c) >= 0) {
        if (*(int32_t *)(p + 0x1a70) >= *(int32_t *)(p + 0x1a6c)) {
            goto fail;
        }
    }
    {
        uint64_t t1 = func_020882cc();
        uint64_t el = func_0209a6d4((t1 - t0) << 6, 0x82ea);
        uint64_t tm = (uint64_t)(int64_t)timeout;
        if (tm < el) {
            state = 6;
            goto set_state;
        }
    }
    if (func_ov000_02156658(p) != 0) {
        goto loop_body;
    }
    state = 7;
    goto set_state;

fail:
    func_ov000_0214795c();
    func_ov000_02147984();
    func_ov000_02147844();
    func_ov000_021477a4();
    *(int32_t *)(p + 0x1020) = 8;
    return;

set_state:
    *(int32_t *)(p + 0x1020) = state;
    func_ov000_0214795c();
    func_ov000_02147984();
    func_ov000_02147844();
    func_ov000_021477a4();
}
