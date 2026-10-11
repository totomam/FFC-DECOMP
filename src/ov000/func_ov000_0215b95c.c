#include "ffc/types.h"

typedef struct Ctx {
    uint8_t pad0[0x64];
    uint32_t f64;
    uint8_t pad1[0x70 - 0x68];
    void (*f70)(uint32_t, uint32_t, void *);
    void *f74;
} Ctx;

typedef struct G {
    uint32_t pad;
    Ctx *ctx;
} G;

extern G data_ov000_02170064;
extern void func_ov000_0215b7a4(uint32_t x);
extern void func_ov000_02159a10(void);

void func_ov000_0215b95c(uint32_t a, uint32_t b)
{
    if (a == 0) {
        data_ov000_02170064.ctx->f64 = b;
        func_ov000_0215b7a4(3);
        func_ov000_02159a10();
    } else {
        func_ov000_0215b7a4(0);
    }
    {
        Ctx *c = data_ov000_02170064.ctx;
        if (c->f70 != 0) {
            c->f70(a, b, c->f74);
        }
    }
}
