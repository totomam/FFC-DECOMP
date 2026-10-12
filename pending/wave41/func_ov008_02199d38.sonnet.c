#include "ffc/types.h"

extern uint32_t func_ov008_02199e40(void *p, uint8_t s);
extern void func_ov008_02199e4c(void *p, uint8_t s, uint32_t v);
extern void func_ov005_02196bcc(uint32_t x, uint32_t v);
extern void func_ov008_02199e8c(void *p);

typedef struct {
    uint8_t pad0[0xcc];
    uint32_t *arr;
    uint8_t pad1[0xf4 - 0xd0];
    uint32_t lim;
    uint8_t pad2[0x140 - 0xf8];
    uint8_t idx;
} FfcObj;

void func_ov008_02199d38(FfcObj *p, uint32_t a)
{
    uint8_t idx = p->idx;
    uint32_t r6 = a;
    uint8_t i = 0;
    uint32_t v;

    do {
        uint8_t s = (uint8_t)(i + (idx << 3));
        if (r6 == p->arr[i]) {
            if (s >= p->lim) {
                return;
            }
            v = func_ov008_02199e40(p, s);
            r6 = 1;
            if (v != 0) {
                r6 = 0;
            }
            func_ov008_02199e4c(p, s, r6);
            func_ov005_02196bcc(p->arr[i], r6);
            func_ov008_02199e8c(p);
            return;
        }
        i = (uint8_t)(i + 1);
    } while (i < 8);
}
