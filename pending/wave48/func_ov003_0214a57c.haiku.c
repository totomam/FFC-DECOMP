#include "ffc/types.h"

extern uint32_t func_0203b6fc(void);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0204f7d4(const void *object);
extern uint32_t func_0203b688(void);
extern void func_ov003_0214a05c(uint8_t *a, uint32_t d, uint32_t x, uint32_t f);
extern uint32_t func_020607b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(uint32_t object, uint32_t node);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_ov003_0214a70c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov003_02149da4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203b720(void);
extern void func_ov003_0214a180(uint8_t *a, uint32_t d, uint32_t x, uint32_t f);
extern uint32_t func_ov003_0214a6c4(uint8_t *a, uint32_t b, uint32_t c, void **slot);

extern void *data_0213df18;
extern uint32_t data_ov003_02179884[2];
extern uint32_t data_ov003_0217988c[2];
extern uint32_t data_ov003_02179894[2];

void func_ov003_0214a57c(uint8_t *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t b2;
    int i;
    uint32_t t;
    uint32_t k;

    b2 = 0;
    t = func_0203b6fc();
    i = 0;
    b2 = b * 2;
    k = (0x6f << 2) - 4;
    for (; i < 2; i++) {
        uint32_t f = (i == 1);
        uint32_t obj;
        uint32_t off;
        void **slot;
        uint32_t x;
        uint32_t s24;

        if (d != 0 && d != (uint32_t)(i + 1)) {
            continue;
        }
        if (f) {
            obj = func_0204f7ec(data_0213df18);
        } else {
            obj = func_0204f7d4(data_0213df18);
        }
        off = f ? k : (0x6f << 2);
        slot = (void **)(a + off);
        if (*slot == 0) {
            continue;
        }
        x = func_0203b688();
        func_ov003_0214a05c(a, d, x, f);
        if (b != 0) {
            uint32_t r;
            uint32_t o20 = *(uint32_t *)(obj + 0x20);
            void **vt = *(void ***)*slot;
            r = ((uint32_t (*)(void *))vt[13])(*slot);
            r = func_020607b0(o20, r, b2, c, 0);
            func_02056bc0(x, r);
        }
        func_02056bc0(x, func_02056aec(*slot));
        if (b != 0) {
            func_02056bc0(x, func_ov003_0214a70c(*(uint32_t *)(obj + 0x20),
                                                 data_ov003_02179884[0],
                                                 data_ov003_02179884[1]));
        }
        s24 = func_ov003_02149da4(*(uint32_t *)(obj + 0x14),
                                  data_ov003_0217988c[0],
                                  data_ov003_0217988c[1], 0);
        func_02056bc0(x, func_0203b720());
        func_02056bc0(x, s24);
        func_ov003_0214a180(a, d, x, f);
        func_02056bc0(x, func_ov003_0214a6c4(a, data_ov003_02179894[0],
                                             data_ov003_02179894[1], slot));
        func_02056bc0(t, x);
    }
    func_02056bc0(*(uint32_t *)(a + (0x6d << 2)), t);
}
