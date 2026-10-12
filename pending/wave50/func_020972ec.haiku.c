#include "ffc/types.h"

extern uint32_t func_020972cc(void);
extern void func_02097804(void *a, void *b);
extern void func_02097748(void *a, void *b);
extern void func_0209cd04(void *a, void *b, void *c);
extern void func_0209745c(void);
extern void func_02098024(void *a, void *b);
extern void func_02097ef4(void *a, void *b);
extern void func_0209d27d_unk(void);

extern uint8_t data_02144c24[];
extern uint8_t data_02144ca0[];
extern uint8_t data_020b2bb0[];
extern uint8_t data_02144edc[];
extern uint8_t data_020b2bfc[];
extern uint8_t data_02144c88[];
extern uint8_t data_02144f1c[];
extern uint8_t data_020b2c48[];
extern uint8_t data_02144c70[];
extern uint8_t data_02144e5c[];
extern uint8_t data_02144cf4[];
extern uint8_t data_02144d30[];
extern uint8_t data_02144e20[];
extern uint8_t data_02144d24[];

struct Frame {
    uint32_t w0;
    uint8_t b4;
    uint8_t pad5[0x17];
    void *p1c;
    uint8_t pad20[0x14];
    void *p34;
    uint8_t pad38[0x14];
    void *p4c;
    uint8_t pad50[0x14];
    void *p64;
};

void *func_020972ec(void *p) {
    struct Frame f;
    void *ret = p;
    struct Frame *fp = &f;
    fp->w0 = func_020972cc();
    fp->b4 = 1;
    {
        uint32_t *c = (uint32_t *)data_02144c24;
        if (!(c[7] & 1)) {
            func_02097804(data_02144ca0, data_020b2bb0);
            c[7] |= 1;
        }
    }
    {
        uint32_t *c = (uint32_t *)data_02144c24;
        if (!(c[5] & 1)) {
            func_02097748(data_02144edc, data_020b2bfc);
            func_0209cd04(data_02144edc, (void *)func_0209745c, data_02144c88);
            c[5] |= 1;
        }
    }
    {
        uint32_t *c = (uint32_t *)data_02144c24;
        if (!(c[11] & 1)) {
            func_02097748(data_02144f1c, data_020b2c48);
            func_0209cd04(data_02144f1c, (void *)func_0209745c, data_02144c70);
            c[11] |= 1;
        }
    }
    {
        uint32_t *c = (uint32_t *)data_02144c24;
        uint32_t old = c[6];
        c[6] = old + 1;
        if (old == 0) {
            if (data_02144e5c) {
                fp->p64 = fp;
                func_02098024(data_02144e5c, data_02144ca0);
            }
            if (data_02144cf4) {
                fp->p4c = fp;
                func_02097ef4(data_02144cf4, data_02144edc);
            }
            if (data_02144d30) {
                fp->p34 = fp;
                func_02097ef4(data_02144d30, data_02144f1c);
            }
            if (data_02144e20) {
                fp->p1c = fp;
                func_02097ef4(data_02144e20, data_02144f1c);
            }
            {
                uint8_t *obj = data_02144e5c;
                uint8_t *vt = *(uint8_t **)obj;
                int32_t off = *(int32_t *)(vt - 12);
                *(void **)(obj + off + 0x30) = data_02144cf4;
            }
            {
                uint8_t *vb = data_02144d24;
                int32_t o = *(int32_t *)(*(uint8_t **)(vb + 0xc) - 12);
                uint16_t *hp = (uint16_t *)(data_02144d30 + o + 0x2c);
                *hp = (uint16_t)(*hp | (2 << 12));
                int32_t o2 = *(int32_t *)(*(uint8_t **)(vb + 0xc) - 12);
                *(void **)(data_02144d30 + o2 + 0x30) = data_02144cf4;
            }
            ((void (*)(void *, uint32_t, uint32_t))(*(void ***)data_02144ca0)[2])(data_02144ca0, 0, 0);
            ((void (*)(void *, uint32_t, uint32_t))(*(void ***)data_02144edc)[2])(data_02144edc, 0, 0);
            ((void (*)(void *, uint32_t, uint32_t))(*(void ***)data_02144f1c)[2])(data_02144f1c, 0, 0);
        }
    }
    return ret;
}
