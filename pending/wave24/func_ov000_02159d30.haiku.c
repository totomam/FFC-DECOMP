#include "ffc/types.h"

typedef void (*Cb)(uint32_t a, uint32_t b, void *ctx);

typedef struct Ctx {
    uint8_t pad[0x3c];
    Cb fn;
    void *ctx;
} Ctx;

typedef struct Glob {
    uint8_t pad[0xc];
    Ctx *obj;
} Glob;

extern Glob data_ov000_0217004c;
extern void func_02084b2c(void *p, uint32_t v);

void func_ov000_02159d30(uint8_t *base, uint32_t idx, uint32_t arg)
{
    uint8_t *p = base + idx * 12;
    if (data_ov000_0217004c.obj != 0) {
        func_02084b2c(p, 0);
        Ctx *obj = data_ov000_0217004c.obj;
        if (obj->fn != 0) {
            obj->fn(idx, arg, obj->ctx);
        }
    }
}
