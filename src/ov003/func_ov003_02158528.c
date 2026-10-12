#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint8_t kind;
    uint8_t pad;
} Arg2;

typedef struct {
    uint32_t w[9];
} Arg3;

extern void *data_020b93b8;
extern void func_0201d014(void *h, uint16_t v, void *buf);
extern uint32_t *func_02036c0c(void *buf);

void func_ov003_02158528(uint8_t *self, Arg2 a2, Arg3 a3)
{
    uint8_t buf[16];
    uint8_t kind = a2.kind;

    *(uint16_t *)(self + 0xd0) = a2.a;
    *(uint8_t *)(self + 0xd2) = kind;
    *(Arg3 *)(self + 0xd4) = a3;

    switch (kind) {
    case 0: {
        uint32_t *r;
        func_0201d014(data_020b93b8, *(uint16_t *)(self + 0xac), buf);
        r = func_02036c0c(buf);
        *(uint32_t *)(self + 0xc4) = r[0];
        *(uint32_t *)(self + 0xc8) = r[1];
        break;
    }
    case 2:
    case 3:
        *(uint16_t *)(self + 0xcc) = 1;
        break;
    case 4:
        *(uint16_t *)(self + 0xcc) = 1;
        *(uint16_t *)(self + 0xce) = 0;
        break;
    default:
        break;
    }

    *(uint16_t *)(self + 0xc0) = 0;
}
