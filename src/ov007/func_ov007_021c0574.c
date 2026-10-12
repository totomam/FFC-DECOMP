#include "ffc/types.h"

typedef struct Ctx Ctx;

typedef struct Desc {
    uint32_t d0;
    uint32_t d4;
    uint32_t d8;
    uint32_t dc;
    uint32_t d10;
    uint32_t d14;
    uint32_t d18;
    uint32_t (*d1c)(Ctx *ctx);
    void (*d20)(Ctx *ctx);
} Desc;

struct Ctx {
    uint32_t c0;
    uint32_t c4;
    uint32_t c8;
    uint32_t cc;
    void (*c10)(uint32_t, Ctx *, uint32_t, uint32_t, uint32_t, uint32_t);
    uint32_t c14;
    uint32_t c18;
    void *c1c;
    Desc *desc;
};

extern uint32_t func_ov007_021c03e4(int a0);
extern uint32_t func_ov000_021680b4(void *a);
extern uint32_t func_ov000_021680c4(void *a, uint32_t b);
extern uint32_t func_ov000_021681e4(void *a, uint32_t b, void *c, uint32_t d);
extern uint32_t func_ov007_021c0404(void *a);
extern void *func_ov000_021653d4(uint32_t a);
extern void func_ov000_021653f4(void *a);
extern void func_ov007_021c03dc(Ctx *ctx);

void func_ov007_021c0574(int a0, int a1, void *a2, Ctx *ctx)
{
    uint32_t result = 0;
    uint8_t buf[0x20];
    uint32_t status;

    if (ctx == 0) {
        return;
    }
    if (ctx->c0 == 0) {
        return;
    }
    if (ctx->desc == 0) {
        return;
    }

    status = func_ov007_021c03e4(a0);
    if (status == 0) {
        if (!(func_ov000_021680b4(a2) && func_ov000_021680c4(a2, ctx->desc->dc) &&
            func_ov000_021681e4(a2, ctx->desc->d10, buf, 0x20))) {
            status = 5;
        } else {
            status = func_ov007_021c0404(buf);
            if (status == 0) {
                if (ctx->desc->d0 != 0) {
                    ctx->cc = (uint32_t)func_ov000_021653d4(ctx->desc->d0);
                    if (ctx->cc != 0) {
                        ctx->c1c = a2;
                        status = ctx->desc->d1c(ctx);
                        if (status == 0) {
                            result = ctx->cc;
                        }
                    } else {
                        status = 6;
                    }
                }
            }
        }
    }

    if (ctx->c10 != 0) {
        ctx->c10(ctx->c0, ctx, status, ctx->c8, result, ctx->c14);
    }
    if (ctx->desc->d20 != 0) {
        ctx->desc->d20(ctx);
    }
    func_ov000_021653f4((void *)ctx->cc);
    ctx->cc = 0;
    func_ov007_021c03dc(ctx);
}
