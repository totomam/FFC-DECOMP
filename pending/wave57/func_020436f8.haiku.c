#include "ffc/types.h"

extern void *func_ov003_0214649c(void *p);
extern uint32_t *func_ov003_02153470(void *p);
extern void func_ov003_02154f5c(void *p);
extern uint8_t *func_02052d90(void *mar, uint32_t index);
extern void func_ov003_02154ef8(void *a, uint16_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0202a9ac(void *cursor);

void func_020436f8(uint8_t *self)
{
    uint8_t *end;
    uint32_t val;
    uint32_t i;
    uint8_t *it;
    uint8_t *d;
    uint8_t *e;
    uint8_t *f;
    uint32_t j;
    uint32_t prev;
    uint32_t cur;

    prev = *(uint32_t *)(self + 0x12c);
    cur = *func_ov003_02153470(func_ov003_0214649c(*(void **)(self + 0x8c)));
    *(uint32_t *)(self + 0x12c) = cur;
    if (self[0x134] == 0 && prev == cur) {
        return;
    }
    self[0x134] = 0;
    func_ov003_02154f5c(func_ov003_0214649c(*(void **)(self + 0x8c)));
    end = self + 0x94;
    it = *(uint8_t **)(self + 0x9c);
    while (it != end) {
        for (i = 0; i < *(uint32_t *)(func_02052d90(*(void **)(it + 0x14), *(uint32_t *)(it + 0x18)) + 4); i++) {
            d = func_02052d90(*(void **)(it + 0x14), *(uint32_t *)(it + 0x18));
            e = d + *(uint32_t *)(d + *(uint32_t *)(d + 8) + i * 4);
            for (j = 0; j < *(uint32_t *)(e + 4); j++) {
                f = e + *(uint32_t *)(e + *(uint32_t *)(e + 8) + j * 4);
                if (*(uint16_t *)f == 5 && *(uint32_t *)(f + 4) > 1) {
                    val = *(uint32_t *)(f + *(uint32_t *)(f + 8));
                    if (val == *func_ov003_02153470(func_ov003_0214649c(*(void **)(self + 0x8c)))) {
                        f = f + *(uint32_t *)(f + 8);
                        func_ov003_02154ef8(func_ov003_0214649c(*(void **)(self + 0x8c)),
                                            *(uint16_t *)(e + 2),
                                            *(uint32_t *)(f + 4),
                                            *(uint32_t *)(f + 8),
                                            *(uint32_t *)(f + 0xc),
                                            *(uint32_t *)(f + 0x10));
                    }
                }
            }
        }
        func_0202a9ac(&it);
    }
}
