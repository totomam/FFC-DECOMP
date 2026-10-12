#include "ffc/types.h"

extern int32_t func_02030f04(void *a, void *b, int32_t c);
extern void func_020095b8(void *ctx, void *p);
extern int32_t func_02009698(void *a, int32_t b, uint32_t c, void *d);
extern void func_0200b65c(void *a, int32_t b);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} Hdr32;

typedef struct {
    uint8_t flag : 1;
    uint8_t len : 7;
} Hdr8;

void func_0203943c(void *ctx, void *a1, void *a2, void *a3)
{
    uint32_t len;
    int32_t idx;
    uint32_t flag;
    int32_t z = 0;

    if (func_02030f04(a3, a2, z) != z - 1) {
        func_020095b8(ctx, a1);
        return;
    }
    z = z - 1;
    for (;;) {
        idx = func_02030f04(a1, a2, 0);
        if (idx == z) {
            func_020095b8(ctx, a1);
            return;
        }
        flag = ((Hdr32 *)a2)->flag;
        if (flag == 0) {
            len = ((Hdr8 *)a2)->len;
        } else {
            len = ((uint32_t *)a2)[1];
        }
        idx = func_02009698(a1, idx, len, a3);
        func_0200b65c(a1, idx);
    }
}
