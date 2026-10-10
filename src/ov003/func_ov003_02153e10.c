#include "ffc/types.h"

typedef struct FfcMarDecoded FfcMarDecoded;

extern void *func_02052d90(const FfcMarDecoded *mar, uint32_t index);

typedef struct {
    uint8_t pad[0xe4];
    FfcMarDecoded *mar;
    uint32_t index;
} FfcOv003Ctx;

void func_ov003_02153e10(uint32_t *out, FfcOv003Ctx *ctx)
{
    *out = *(uint32_t *)((uint8_t *)func_02052d90(ctx->mar, ctx->index) + 0x20);
}
