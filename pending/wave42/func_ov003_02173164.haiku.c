#include "ffc/types.h"

extern void func_0203919c(void *dst, uint32_t src);
extern void func_0200b65c(void *obj, void *buf);
extern void *func_020059cc(void *object);
extern uint32_t func_02005f1c(void *object, uint32_t third);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void func_02037500(void *obj, int32_t v);
extern uint32_t func_0201a3a0(void *object, const void *third);
extern void func_02009678(void *obj, void *buf);
extern uint8_t data_ov003_0217b7e8[];
extern uint8_t data_ov003_0217b7ec[];

void func_ov003_02173164(uint32_t *obj, uint8_t *x, uint32_t y, uint32_t flag)
{
    uint32_t i;
    uint32_t buf0[3];
    uint32_t buf1[3];
    uint32_t yy = y;

    i = 0;
    while (i < 3) {
        obj[i] = i++;
    }
    if (flag == 0) {
        func_0203919c(buf0, yy);
        func_0200b65c(obj, buf0);
        func_020059cc(buf0);
    } else {
        uint8_t *p;
        uint8_t *q;

        func_02005f1c(obj, (uint32_t)(uintptr_t)data_ov003_0217b7e8);
        p = (uint8_t *)func_02052d90(*(void **)(x + 0xb0), *(void **)(x + 0xb4));
        func_02037500(obj, (int32_t)(int8_t)(p[4] + 0x30));
        q = (uint8_t *)func_02052d90(*(void **)(x + 0xb0), *(void **)(x + 0xb4));
        func_0201a3a0(obj, q + *(uint32_t *)(q + 0x14));
        func_0203919c(buf1, yy);
        func_02009678(obj, buf1);
        func_020059cc(buf1);
        func_0201a3a0(obj, data_ov003_0217b7ec);
    }
}
