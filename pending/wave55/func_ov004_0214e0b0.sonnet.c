#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov004_021530fc(void *obj);
extern uint32_t func_ov004_0215350c(void *obj);
extern void *func_01ff9a60(void *obj, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_01ff9f50(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern void func_01ffa154(void *obj);
extern void *func_01ffa954(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_01ffad50(void *a, void *b);
extern void *func_ov004_0214d6e4(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

extern uint32_t data_ov004_0215a1c4;
extern uint32_t data_ov004_021594c8;
extern uint32_t data_ov004_02159548;
extern uint32_t data_ov004_0215953c;
extern uint32_t data_ov004_021569dc;
extern uint32_t data_ov004_02159448;

uint32_t func_ov004_0214e0b0(uint8_t *p, uint32_t idx, uint32_t a2, uint32_t a3, ...)
{
    uint32_t a5 = *((uint32_t *)&a3 + 1);
    uint32_t r7 = 0;
    void *r4;
    uint32_t i = 3;
    uint32_t flag18;
    uint32_t flag14;
    uint32_t loc0;
    uint32_t t;
    uint32_t v;
    uint32_t f;
    uint32_t tmp38[3];
    uint32_t tmp44[17];
    void *obj2;

    do {
        f = data_ov004_0215a1c4;
        if (!(f & 1)) {
            *(uint32_t *)((uint8_t *)&data_ov004_021594c8 + 0x74) = 1 << 12;
            *(uint32_t *)((uint8_t *)&data_ov004_021594c8 + 0x78) = 1 << 12;
            *(uint32_t *)((uint8_t *)&data_ov004_021594c8 + 0x7c) = 1 << 12;
            *(uint32_t *)((uint8_t *)&data_ov004_02159548 + 0) = 1 << 12;
            *(uint32_t *)((uint8_t *)&data_ov004_02159548 + 4) = 1 << 13;
            *(uint32_t *)((uint8_t *)&data_ov004_02159548 + 8) = 1 << 12;
            data_ov004_0215a1c4 = f | 1;
        }

        flag18 = (i == 1) ? a5 : 0;
        flag14 = (a5 == 1) ? 1 : 0;

        r4 = func_0205681c(0x298);
        if (r4 != 0) {
            v = func_ov004_021530fc(*(void **)(p + 0x88));
            t = func_ov004_0215350c(*(void **)(p + 0x88));
            loc0 = *(uint32_t *)((uint8_t *)&data_ov004_0215953c + flag14 * 12 + i * 4 - 4);
            r4 = func_01ff9a60(r4, v, 0,
                *(uint32_t *)((uint8_t *)&data_ov004_021569dc + i * 4 - 4),
                loc0, t);
        }

        func_02086ad4(tmp44,
            *(uint32_t *)((uint8_t *)&data_ov004_02159448 + 0x18),
            a2, idx, i, flag18 + 0x61);

        if (*(uint32_t *)(p + 0x18c) == 0) {
            func_02005988(tmp38, tmp44);
            func_01ff9f50(r4, tmp38);
            func_020059cc(tmp38);
        } else {
            *(uint32_t *)(p + 0x18c) += 0x1c;
            func_01ffa154(r4);
        }

        if (r7 == 0) {
            r7 = (uint32_t)func_0205681c(0x70);
            if (r7 != 0) {
                r7 = (uint32_t)func_01ffa954((void *)r7,
                    *(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0xfc), *(uint32_t *)(p + 0x100));
            }
            obj2 = func_0205681c(0x298);
            if (obj2 != 0) {
                obj2 = func_01ff9a60(obj2, 0, (*(uint32_t *)(p + 0xfc) != 0), *(uint32_t *)(p + 0x100), 1 << 12, 0);
            }
            func_01ffad50((void *)r7, obj2);
        }
        func_01ffad50((void *)r7, r4);

        i--;
    } while (i != 0);

    r4 = func_0205681c(0xa0);
    if (r4 != 0) {
        v = func_ov004_021530fc(*(void **)(p + 0x88));
        r4 = func_ov004_0214d6e4(r4, *(uint32_t *)(p + 0x88), r7, v,
            *(uint32_t *)(p + 0xfc), *(uint32_t *)(p + 0x100), a3);
    }
    *(void **)(p + 0xa0 + idx * 4) = r4;
    return r7;
}
