#include "ffc/types.h"

extern void func_ov006_021a3258(void *dst, const void *src, uint32_t n);
extern void func_ov006_021a29b8(void *ctx, const void *block);

typedef struct {
    uint32_t state[4];
    uint32_t count[2];
    uint8_t buffer[64];
} Ctx;

void func_ov006_021a28ec(void *ctx_, const uint8_t *input, uint32_t len)
{
    Ctx *context = (Ctx *)ctx_;
    uint32_t index;
    uint32_t partLen;
    uint32_t i;

    index = (uint32_t)((context->count[0] >> 3) & 0x3F);

    if ((context->count[0] += ((uint32_t)len << 3)) < ((uint32_t)len << 3)) {
        context->count[1]++;
    }
    context->count[1] += ((uint32_t)len >> 29);

    partLen = 64 - index;

    if (len >= partLen) {
        func_ov006_021a3258(&context->buffer[index], input, partLen);
        func_ov006_021a29b8(context, context->buffer);
        for (i = partLen; i + 63 < len; i += 64) {
            func_ov006_021a29b8(context, &input[i]);
        }
        index = 0;
    } else {
        i = 0;
    }
    func_ov006_021a3258(&context->buffer[index], &input[i], len - i);
}
