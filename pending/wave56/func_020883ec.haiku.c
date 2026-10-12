#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern uint64_t func_0209a71c(uint64_t a, uint64_t b);
extern void func_02088350(void *node);
extern uint8_t *data_02141868[];

#define U64AT(p, off) (*(uint64_t *)((uint8_t *)(p) + (off)))
#define PTRAT(p, off) (*(uint8_t **)((uint8_t *)(p) + (off)))

void func_020883ec(uint8_t *p, uint64_t t)
{
    uint64_t T = t;

    if (U64AT(p, 0x1c) != 0) {
        uint64_t now = func_020882cc();
        T = U64AT(p, 0x24);
        if (T < now) {
            uint64_t per = U64AT(p, 0x1c);
            uint64_t q = func_0209a6d4(now - T, per);
            T += func_0209a71c(per, q + 1);
        }
    }

    U64AT(p, 0x0c) = T;

    {
        uint8_t *r5 = data_02141868[1];
        while (r5 != 0) {
            if ((int64_t)T < (int64_t)U64AT(r5, 0x0c)) {
                PTRAT(p, 0x14) = PTRAT(r5, 0x14);
                PTRAT(r5, 0x14) = p;
                PTRAT(p, 0x18) = r5;
                if (PTRAT(p, 0x14) != 0) {
                    PTRAT(PTRAT(p, 0x14), 0x18) = p;
                    return;
                }
                data_02141868[1] = p;
                func_02088350(p);
                return;
            }
            r5 = PTRAT(r5, 0x18);
        }
    }

    PTRAT(p, 0x18) = 0;
    {
        uint8_t *old = data_02141868[2];
        data_02141868[2] = p;
        PTRAT(p, 0x14) = old;
        if (old != 0) {
            PTRAT(old, 0x18) = p;
            return;
        }
        data_02141868[1] = p;
        func_02088350(p);
    }
}
