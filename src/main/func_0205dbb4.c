#include "ffc/types.h"

typedef struct FfcMarDecoded FfcMarDecoded;

extern void *func_02052d90(const FfcMarDecoded *mar, uint32_t index);

typedef struct {
    uint32_t pad0;
    FfcMarDecoded *mar;
    uint32_t index;
} Arg;

typedef struct {
    uint8_t pad[0x14];
    int32_t v;
} Ret;

int32_t func_0205dbb4(Arg *a)
{
    Ret *r = (Ret *)func_02052d90(a->mar, a->index);
    return r->v >> 3;
}
