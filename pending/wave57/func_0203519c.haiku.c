#include "ffc/types.h"

extern int func_02068b30(void *p);
extern int func_02068680(void *p);
extern void func_0200a5dc(void *dst, void *src);
extern void func_020685a0(void *dst, void *src);
extern int func_02034bbc(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_0200a678(void *object);
extern void func_0200cdd8(void *arr, uint16_t c);

typedef struct {
    uint8_t pad[8];
    void *obj;
    void *f_c;
} Ctx;

int func_0203519c(Ctx *ctx, void *p)
{
    uint32_t arr[3];
    uint32_t b24[2];
    uint32_t b1c[2];
    uint32_t out[2];
    int c, c2, c3, digit, ret, i;
    void **vt;

    if (func_02068b30(p) != 0x73) {
        return 1;
    }
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    digit = func_02068b30(p);
    digit -= 0x30;

    for (;;) {
        if (func_02068680(p) != 0) {
            goto fail;
        }
        c = func_02068b30(p);
        if (c == 0x24) {
            c2 = func_02068b30(p);
            c3 = func_02068b30(p);
            if (c2 == 0x72 && c3 == 0x65) {
                break;
            }
        }
        func_0200cdd8(arr, (uint16_t)c);
    }

    if (ctx->f_c == 0) {
        goto fail;
    }

    func_0200a5dc(b24, arr);
    func_020685a0(b1c, p);

    vt = *(void ***)ctx->obj;
    ((void (*)(void *, void *))vt[1])(out, ctx->obj);

    ret = func_02034bbc(ctx->f_c, b1c[0], b1c[1], b24, digit, out[0], out[1]);

    func_0200a678(b24);
    if (ret != 0) {
        goto fail;
    }
    func_0200a678(arr);
    return 0;

fail:
    func_0200a678(arr);
    return 1;
}
