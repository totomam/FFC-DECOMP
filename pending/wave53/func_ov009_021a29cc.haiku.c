#include "ffc/types.h"

extern int32_t func_ov009_0219e428(int32_t x);
extern float func_0209a484(int32_t x);
extern float func_0209af28(float a, float b);
extern float func_0209b5bc(float a, float b);
extern int32_t func_0209ab5c(float x);
extern void func_0202b704(uint8_t *a, uint16_t b, int32_t c, uint8_t *d);
extern void func_ov009_021a1e0c(uint8_t *p, int32_t a, int32_t b, int32_t c, int32_t d);
extern uint32_t func_020363bc(const void *object);
extern void func_02021338(uint16_t v);
extern uint32_t data_020a7d0a;
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov009_021b06fc;

#define FLD32(p, off) (*(int32_t *)((uint8_t *)(p) + (off)))
#define FLDPTR(p, off) (*(uint8_t **)((uint8_t *)(p) + (off)))

void func_ov009_021a29cc(uint8_t *p)
{
    int32_t t;
    int32_t r2;

    FLD32(p, 0x1f4) = FLD32(p, 0x1f4) + 1;
    if (FLD32(p, 0x1f4) >= func_ov009_0219e428(0x91)) {
        *(uint8_t *)(FLDPTR(p, 0x1c0) + 0x41) = 0;
        *(uint8_t *)(FLDPTR(p, 0x1f4 - 0x30) + 0x41) = 1;
    }

    t = func_ov009_0219e428(0x82);
    if (FLD32(p, 0x1f4) < t) {
        goto L009a;
    }
    if (FLD32(p, 0x1f4) >= func_ov009_0219e428(0x91)) {
        goto L009a;
    }
    if (FLD32(p, 0x1f4) <= func_ov009_0219e428(0x8c)) {
        float f;
        t = func_ov009_0219e428(0x82);
        f = func_0209a484(FLD32(p, 0x1f4) - t);
        f = func_0209af28(4096.0f, f);
        f = func_0209b5bc(f, 10.0f);
        r2 = func_0209ab5c(f);
    } else {
        r2 = 4096;
    }
    func_0202b704(FLDPTR(p, 0x1c0), (uint16_t)data_020a7d0a, r2, FLDPTR(p, 0x1c8));

L009a:
    func_ov009_021a1e0c(p, 1, 0x8c, 0x96, 0x19);

    if (FLD32(p, 0x1f4) == func_ov009_0219e428(0xc8)) {
        uint8_t *obj = (uint8_t *)func_020363bc(p + 0x148);
        func_02021338(*(uint16_t *)(obj + 0x58));
    }

    if (FLD32(p, 0x1f4) >= func_ov009_0219e428(0xdc)) {
        *(Pair *)(p + 0x80) = data_ov009_021b06fc;
    }
}
