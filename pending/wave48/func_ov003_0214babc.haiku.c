#include "ffc/types.h"

extern uint32_t func_0203b6fc(uint32_t v, uint8_t *arr);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0204f7d4(const void *object);
extern uint32_t func_0203b688(void);
extern uint32_t func_02060570(void);
extern uint32_t func_02060634(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t func_020605c0(uint32_t a, uint32_t b);
extern uint32_t func_02060598(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;

void func_ov003_0214babc(uint8_t *a, uint32_t n, uint8_t x, uint32_t y, uint8_t flag, uint32_t p6, uint32_t p7, uint32_t p8)
{
    uint8_t arr[2];
    uint32_t vals[2];
    uint32_t off, t20, t1c, t18, s, t10, i;
    uint8_t *r6;
    uint8_t *r7;
    uint32_t r5;

    arr[0] = x;
    vals[0] = y;
    arr[1] = flag;
    vals[1] = p6;
    t20 = func_0203b6fc(p6, arr);
    s = p7 << 1;
    off = 0x1b8;
    for (i = 0; i < 2; i++) {
        r5 = (i == 1);
        if (n != 0 && n != i + 1) {
            continue;
        }
        if (r5) {
            r6 = (uint8_t *)func_0204f7ec(data_0213df18);
        } else {
            r6 = (uint8_t *)func_0204f7d4(data_0213df18);
        }
        if (r5) { r7 = a + off; } else { r7 = a + (0x6f << 2); }
        r5 = func_0203b688();
        t10 = *(uint32_t *)(r6 + 0x20);
        t1c = func_02060634(t10, func_02060570(), vals[i], s, p8, 0);
        t18 = *(uint32_t *)(r6 + 0x20);
        r7 = (uint8_t *)func_020605c0(t18, ((uint32_t (*)(void *))((void **)*(void **)*(void ***)r7)[13])(*(void ***)r7));
        func_02056bc0((void *)r5, (void *)func_02060598(*(uint32_t *)(r6 + 0x20), arr[i] ? 3 : 2));
        func_02056bc0((void *)r5, r7);
        func_02056bc0((void *)r5, (void *)t1c);
        func_02056bc0((void *)t20, (void *)r5);
    }
    func_02056bc0(a + 0x48, (void *)t20);
}
