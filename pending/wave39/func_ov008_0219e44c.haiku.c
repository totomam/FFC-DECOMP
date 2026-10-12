#include "ffc/types.h"

extern uint32_t func_020696e8(const void *object);
extern void func_020697ac(void *obj, void *arg);
extern int func_ov008_0219d9f8(void *obj);
extern void func_ov008_0219da00(void *obj, uint8_t idx, int flag);
extern void func_ov008_0219da58(void *obj);
extern int func_020692e8(void *p);
extern void func_02069300(void *p);

void func_ov008_0219e44c(void *p)
{
    uint32_t *s;
    uint32_t a;
    uint32_t b;

    s = (uint32_t *)func_020696e8(p);
    a = s[1];
    b = s[2];
    if (8 & (a & (a ^ b))) {
        func_020697ac(p, *(void **)((char *)p + 0xc0));
    }

    s = (uint32_t *)func_020696e8(p);
    a = s[1];
    b = s[2];
    if (2 & (a & (a ^ b))) {
        uint8_t idx = *((uint8_t *)p + 0x10d);
        if (idx != 0xff && func_ov008_0219d9f8(p)) {
            func_ov008_0219da00(p, *((uint8_t *)p + 0x10d), 0);
            {
                int k = *((uint8_t *)p + 0x10d);
                void **arr = *(void ***)((char *)p + 0xc8);
                void *obj = *(void **)((char *)arr[k % 8] + 0xa4);
                void (**vt)(void) = *(void (***)(void))obj;
                ((void (*)(void *))vt[0x2c / 4])(obj);
            }
            func_ov008_0219da58(p);
        } else {
            if (func_020692e8(*(void **)((char *)p + 0xbc))) {
                func_02069300(*(void **)((char *)p + 0xbc));
            } else {
                func_020697ac(p, *(void **)((char *)p + 0xbc));
            }
        }
    }
}
