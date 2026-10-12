#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;

extern int func_02068b30(void *p);
extern int func_02068680(void *p);
extern void func_0200a5dc(void *dst, void *src);
extern S func_020685a0(void *src);
extern int func_02034bbc(void *a, S b, void *d, uint32_t e, S f);
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
    uint32_t b24[3];
    S b1c;
    S out;
    int c, c2, c3, digit; uint32_t i; uint32_t *ap = arr;
    int ok;

    if (func_02068b30(p) == 0x73) {
        for (i = 0; i < 3; i++) {
            ap[i] = 0;
        }
        digit = func_02068b30(p) - 0x30;

        for (;;) {
            if (func_02068680(p) != 0) {
                break;
            }
            c = func_02068b30(p);
            if (c == 0x24) {
                c2 = func_02068b30(p);
                c3 = func_02068b30(p);
                if (c2 == 0x72 && c3 == 0x65) {
                    if (ctx->f_c != 0) {
                        func_0200a5dc(b24, arr);
                        b1c = func_020685a0(p);
                        out = ((S (*)(void *))(**(void ****)&ctx->obj)[1])(ctx->obj);
                        ok = func_02034bbc(ctx->f_c, b1c, b24, digit, out) == 0;
                        func_0200a678(b24);
                        if (ok) {
                            func_0200a678(arr);
                            return 0;
                        }
                    }
                    break;
                }
            }
            func_0200cdd8(ap, (uint16_t)c);
        }
        func_0200a678(arr);
    }
    return 1;
}
