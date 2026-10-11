#include "ffc/types.h"

typedef struct FfcMarDecoded FfcMarDecoded;

extern void *func_02052d90(const FfcMarDecoded *mar, uint32_t index);

typedef struct {
    uint32_t pad;
    const FfcMarDecoded *mar;
    uint32_t index;
} FuncIn;

typedef struct {
    uint32_t a;
    uint32_t b;
} FuncOut;

void func_0205db3c(FuncOut *out, const FuncIn *in)
{
    uint32_t b = *(uint32_t *)((uint8_t *)func_02052d90(in->mar, in->index) + 0x14);
    uint32_t a = *(uint32_t *)((uint8_t *)func_02052d90(in->mar, in->index) + 0x10);
    out->a = a;
    out->b = b;
}
