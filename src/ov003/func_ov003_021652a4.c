#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t);
extern void *func_0205681c(uint32_t);
extern void *func_ov003_02165078(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                 uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *);

void func_ov003_021652a4(uint8_t *p)
{
    void *r;
    *(uint16_t *)(p + 0x84) = func_ov003_021481c0(*(uint16_t *)(p + 0x84));
    if (*(uint16_t *)(p + 0x84) != 0) {
        void *n = func_0205681c(0x3c);
        r = n;
        if (n != 0) {
            r = func_ov003_02165078(n, *(uint32_t *)(p + 0x80), *(uint16_t *)(p + 0x84), 0, 0, 0,
                                    *(uint32_t *)(p + 0x8c), *(uint32_t *)(p + 0x90),
                                    *(uint32_t *)(p + 0x94), *(uint16_t *)(p + 0x86),
                                    *(uint32_t *)(p + 0x88), 1, 1);
        }
        func_02056bc0(p + 0x14, r);
    }
    r = func_02056aec(p);
    func_02056bc0(p + 0x14, r);
}
