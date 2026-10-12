#include "ffc/types.h"

extern void func_02042c64(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_020424e0(uint32_t a);
extern uint32_t func_ov003_0214d454(void);
extern void func_02056bc0(uint32_t object, uint32_t node);
extern uint32_t func_ov003_02149768(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_02056aec(uint32_t object);
extern uint32_t func_ov003_02149850(uint32_t a);

void func_02041ae0(uint32_t p) {
    uint32_t mode;
    uint32_t r;
    uint32_t n;
    uint32_t q;

    mode = *(uint32_t *)(p + 0x84);
    *(uint32_t *)(p + 0x84) = *(uint32_t *)(p + 0x84) + 1;

    switch (mode) {
    case 0:
        func_02042c64(*(uint32_t *)(p + 0x80), 0, 0);
        func_020424e0(*(uint32_t *)(p + 0x80));
        r = func_ov003_0214d454();
        q = p + 0x14;
        func_02056bc0(q, r);
        break;
    case 1:
        r = func_020424e0(*(uint32_t *)(p + 0x80));
        func_ov003_02149768(r, 0, 0, 0x1e, 0);
        n = func_02056aec(p);
        r = func_020424e0(*(uint32_t *)(p + 0x80));
        r = func_ov003_02149850(r);
        q = p + 0x14;
        func_02056bc0(q, r);
        func_02056bc0(q, n);
        break;
    }
}
