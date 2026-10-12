#include "ffc/types.h"

extern int32_t func_ov001_02187cd0(uint8_t *obj, uint8_t *p, int32_t n);
extern int32_t func_ov001_02187fdc(uint8_t *obj, uint8_t *p, int32_t n);
extern int32_t func_ov000_0216551c(int32_t x);
extern int32_t func_ov001_02187f88(uint8_t *obj, uint8_t *p, int32_t n);
extern int32_t func_ov001_02187e90(uint8_t *obj, uint8_t *p, int32_t n);
extern int32_t func_ov001_02187d58(uint8_t *obj, uint8_t *p, int32_t n);
extern void func_02090398(uint8_t *p);
extern void func_ov001_02186f1c(uint8_t *obj);

#define OBJ_STATE(o) (*(int32_t *)((o) + 0x80))
#define OBJ_PTR(o) (*(uint8_t **)((o) + 0x7c))
#define OBJ_6B4(o) (*(int32_t *)((o) + 0x6b4))

int32_t func_ov001_02188078(uint8_t *obj) {
    int32_t r5 = 0;
    uint16_t hdr;
    uint8_t *hb = (uint8_t *)&hdr;
    uint8_t *p;

    while (OBJ_STATE(obj) >= 3) {
        p = OBJ_PTR(obj);
        hb[0] = p[0];
        hb[1] = p[1];
        hdr = (uint16_t)((((int32_t)hdr >> 8) & 0xff) | ((hdr << 8) & 0xff00));
        if (hdr > 0x1000) {
            r5 = 4;
            break;
        }
        if (OBJ_STATE(obj) < hdr) {
            return 0;
        }
        switch ((int8_t)p[2]) {
        case 1:
            r5 = func_ov001_02187cd0(obj, p + 3, hdr - 3);
            break;
        case 2:
            r5 = func_ov001_02187fdc(obj, p + 3, hdr - 3);
            break;
        case 3:
            if (func_ov000_0216551c(OBJ_6B4(obj)) > 0) {
                break;
            }
            return 3;
        case 4:
            r5 = func_ov001_02187f88(obj, p + 3, hdr - 3);
            break;
        case 5:
            r5 = func_ov001_02187e90(obj, p + 3, hdr - 3);
            break;
        case 6:
            r5 = func_ov001_02187d58(obj, p + 3, hdr - 3);
            break;
        default:
            break;
        }
        OBJ_STATE(obj) -= hdr;
        if (OBJ_STATE(obj) != 0) {
            if (OBJ_PTR(obj) != 0) {
                func_02090398(OBJ_PTR(obj) + hdr);
            }
        }
        if (r5 != 0) {
            break;
        }
    }
    if (r5 != 0) {
        func_ov001_02186f1c(obj);
    }
    return r5;
}
