#include "ffc/types.h"

extern void func_0206cb44(uint8_t *ctx);
extern void func_0206cf64(uint8_t *ctx);

typedef struct {
    uint8_t pad0[2];
    uint16_t a2;
    uint8_t pad4[4];
    uint16_t a8;
    uint16_t a10;
} S;

void func_0206d8a4(uint8_t *ctx, S *p)
{
    uint8_t *obj;

    if (p->a2 != 0) {
        func_0206cb44(ctx);
        return;
    }
    switch (p->a8) {
    case 7:
        obj = *(uint8_t **)(ctx + 0x3220);
        obj[4] = 1;
        *(uint16_t *)(ctx + 0xf8e) = p->a10;
        *(uint32_t *)(ctx + 0x30b0) = 6;
        *(ctx + 0x30b4) = 1;
        func_0206cf64(ctx);
        return;
    case 9:
    case 0x1a:
        obj = *(uint8_t **)(ctx + 0x3220);
        obj[5] = 1;
        if (*(ctx + 0xf92)) {
            *(ctx + 0x30b6) = 1;
            func_0206cb44(ctx);
        }
        return;
    }
}
