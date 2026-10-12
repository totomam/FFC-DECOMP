#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015c98(void *unused, uint32_t index);
extern uint8_t func_ov002_021aab40(const void *object);
extern uint32_t func_ov002_021aa780(const void *object);
extern int32_t func_ov002_021abd00(const void *object, uint32_t index);
extern uint32_t func_02081210(uint32_t a, uint32_t b);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_ov002_021ad084(const void *object);
extern void func_ov002_021acf10(int32_t *out, const void *object);
extern void func_ov002_021acb3c(int32_t *out, const void *object, uint32_t arg);
extern void func_ov002_021acd58(int32_t *out, const void *object, uint32_t arg);
extern void func_ov002_021ace28(int32_t *out, const void *object, uint32_t arg);
extern void func_ov002_021acedc(int32_t *out, const void *object);

uint32_t func_ov002_021aca3c(void *obj, int32_t flag, uint32_t r2, uint32_t r3, int32_t a5, int32_t a6)
{
    uint8_t *base;
    uint8_t *q;
    int32_t off;
    uint32_t r5;
    int32_t tmp[0x1f];

    base = (uint8_t *)func_02015c98(data_020b8e44, r3);
    off = *(int32_t *)(base + 0x10);
    if (off == 0) {
        return 0;
    }
    q = base + off;
    if (*(uint16_t *)(q + 2) == 0) {
        return 0;
    }
    r5 = (uint32_t)*(uint16_t *)(q + 2) << 12;

    if (func_ov002_021aab40(obj) != 8) {
        uint32_t t = func_ov002_021aa780(obj);
        if (t == 0 || (t - 3u) <= 1u) {
            int32_t b = func_ov002_021abd00(obj, 0);
            r5 = func_020817c8((int32_t)r5, func_02081210((uint32_t)(b + 0x64) << 12, 0x19u << 14));
        }
    }

    r5 = func_020817c8((int32_t)r5, a5);

    if (r3 == (uint32_t)func_ov002_021ad084(obj)) {
        func_ov002_021acf10(&tmp[4], obj);
        r5 = func_020817c8((int32_t)r5, tmp[4]);
    }

    r5 = func_020817c8((int32_t)r5, a6);

    func_ov002_021acb3c(&tmp[3], obj, r2);
    r5 = func_020817c8((int32_t)r5, tmp[3]);

    func_ov002_021acd58(&tmp[2], obj, r2);
    r5 = func_020817c8((int32_t)r5, tmp[2]);

    func_ov002_021ace28(&tmp[1], obj, r2);
    r5 = func_020817c8((int32_t)r5, tmp[1]);

    if (flag != 0) {
        func_ov002_021acedc(&tmp[0], obj);
        r5 = func_020817c8((int32_t)r5, tmp[0]);
    }

    if ((int32_t)r5 >> 12 > 0) {
        return (uint32_t)((int32_t)r5 >> 12);
    }
    return 1;
}
