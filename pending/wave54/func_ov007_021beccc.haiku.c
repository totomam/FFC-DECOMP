#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov005_02196728(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_020695ec(void *obj);
extern void func_0200d5d4(void *object, uint32_t value);
extern void func_ov005_021978ec(void *a, void *b, uint32_t c);
extern uint32_t data_ov007_021c835c[];

uint32_t func_ov007_021beccc(uint8_t *p)
{
    uint32_t *cnt = (uint32_t *)(p + 0xcc);
    uint32_t old = *(volatile uint32_t *)(p + 0xcc);
    uint32_t nw = *cnt;
    int i;

    *cnt = nw - old;

    for (i = 0; i < 8; i++) {
        if (*(uint32_t *)(p + 0x104) > (*(uint32_t *)(p + 0x110) << 3) + (uint32_t)i) {
            void *m = func_0205681c(0xc4);
            uint32_t res = 0;
            if (m != 0) {
                int a = i / 4;
                int b = i % 4;
                uint32_t X = data_ov007_021c835c[10] + data_ov007_021c835c[16] * b + data_ov007_021c835c[18] * a;
                uint32_t Y = data_ov007_021c835c[11] + data_ov007_021c835c[17] * b + data_ov007_021c835c[19] * a;
                uint32_t *base = *(uint32_t **)(p + 0x100);
                uint32_t elem = base[*(uint32_t *)(p + 0x110) * 8 + i];
                res = func_ov005_02196728(m, *(uint32_t *)(p + 0xb8), X, Y, elem, 0, 2);
            }
            func_020695ec(p);
            if (*cnt < *(uint32_t *)(p + 0xd0)) {
                uint32_t idx = *cnt;
                uint32_t *arr = *(uint32_t **)(p + 0xc8);
                *cnt = idx + 1;
                arr[idx] = res;
            } else {
                func_0200d5d4(p + 0xc8, res);
            }
        }
    }

    func_ov005_021978ec(p, p + 0xc8, *(uint32_t *)(p + 0xbc));
    return 0;
}
