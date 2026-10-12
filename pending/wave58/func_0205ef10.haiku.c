#include "ffc/types.h"

typedef struct { int32_t w0, w1, w2, w3; } V4;

extern void func_02053ba0(void *o, V4 v);
extern int func_02053c80(void *o);
extern void func_02053770(void *o, V4 v);
extern void func_020538f8(void *o, V4 v);
extern void func_02053868(void *o, void *o2);
extern void func_02053644(void *o, void *o2);
extern uint32_t func_02053754(void *o);
extern void func_02053758(V4 *out, void *o, uint32_t i);
extern void func_02053b64(void *o, void *o2);
extern void func_02053c90(void *o);

#define FLD(T, b, off) (*(T *)((uint8_t *)(b) + (off)))

void func_0205ef10(void *p0) {
    uint8_t *p = (uint8_t *)p0;
    int32_t v1 = FLD(int32_t, p, 0x1c);
    int32_t v2 = FLD(int32_t, p, 0x20);
    uint8_t *o18 = FLD(uint8_t *, p, 0x18);
    FLD(int32_t, o18, 0x1c) = v1;
    FLD(int32_t, o18, 0x20) = v2;
    FLD(int32_t, p, 0x24) = FLD(int32_t, p, 0x34);
    FLD(int32_t, p, 0x28) = FLD(int32_t, p, 0x38);
    FLD(int32_t, p, 0x2c) = FLD(int32_t, p, 0x3c);
    FLD(int32_t, p, 0x30) = FLD(int32_t, p, 0x40);
    FLD(int32_t, p, 0x34) = v1 >> 3;
    FLD(int32_t, p, 0x38) = v2 >> 3;
    FLD(int32_t, p, 0x3c) = (v1 + 0x107) >> 3;
    FLD(int32_t, p, 0x40) = (v2 + 0xc7) >> 3;

    V4 s0 = *(V4 *)(p + 0x34);
    func_02053ba0(p + 0x68, s0);
    if (FLD(int32_t, p, 0x34) == FLD(int32_t, p, 0x24) &&
        FLD(int32_t, p, 0x38) == FLD(int32_t, p, 0x28) &&
        FLD(int32_t, p, 0x3c) == FLD(int32_t, p, 0x2c) &&
        FLD(int32_t, p, 0x40) == FLD(int32_t, p, 0x30)) {
        if (func_02053c80(p + 0x68)) {
            return;
        }
    }

    V4 s1 = *(V4 *)(p + 0x34);
    func_02053770(p + 0x50, s1);
    V4 s2 = *(V4 *)(p + 0x24);
    func_020538f8(p + 0x50, s2);
    func_02053868(p + 0x50, p + 0x68);

    uint8_t *base = FLD(uint8_t *, p, 0x44);
    uint8_t *end = base + (FLD(uint32_t, p, 0x48) << 2);
    if (end != base) {
        for (;;) {
            func_02053644(p + 0x68, p + 0x50);
            uint8_t *obj = *(uint8_t **)(end - 4);
            V4 s3 = *(V4 *)(obj + 4);
            func_02053ba0(p + 0x68, s3);
            if (!func_02053c80(p + 0x68)) {
                uint32_t i;
                for (i = 0; i < func_02053754(p + 0x68); i++) {
                    V4 t;
                    func_02053758(&t, p + 0x68, i);
                    void *o2 = *(void **)(end - 4);
                    void **vt = *(void ***)o2;
                    ((void (*)(void *, void *, V4))vt[2])(o2, FLD(void *, p, 0x18), t);
                }
                func_02053b64(p + 0x50, p + 0x68);
                if (func_02053c80(p + 0x50)) {
                    break;
                }
            }
            end -= 4;
            if (end == base) {
                break;
            }
        }
    }
    func_02053c90(p + 0x68);
}
