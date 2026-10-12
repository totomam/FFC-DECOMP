#include "ffc/types.h"

extern uint32_t func_ov011_021c0058(void *p);
extern void *func_0203b6fc(void);
extern void func_ov009_0219a308(void *p);
extern uint32_t func_020369c0(const void *object, uint32_t index);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov009_021ad660(void *out, void *obj, uint16_t v);
extern void *func_ov009_0219a390(void *p, uint32_t x, uint32_t y);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cad30[2];
extern uint32_t data_ov011_021cad60[2];

int func_ov011_021c0574(uint8_t *a, void *b, uint32_t c)
{
    uint32_t tmp[2];
    volatile uint32_t v = func_ov011_021c0058(a);
    void *r6 = func_0203b6fc();
    void *p;
    uint32_t x, y;

    if (v == 0xffff) {
        func_ov009_0219a308(*(void **)(a + c * 4 + 0xd8));
        goto done;
    }

    if (a[0x27b] == 0) {
        if (func_020369c0(b, c)) goto L78;
    }
    if (a[0x27b] == 1) {
        if (!func_020369c0(b, c)) goto L68;
    }

    {
        int32_t r = (int32_t)func_0209a76c(v, 10);
        if (r < a[0x27d]) goto L68;
        if (r > a[0x27d]) goto L78;
    }

    {
        uint64_t q = func_0209a76c(v, 10);
        func_ov009_021ad660(tmp, a, (uint16_t)(q >> 32));
        p = *(void **)(a + c * 4 + 0xd8);
        x = tmp[0];
        y = tmp[1];
    }
    goto tail;

L68:
    p = *(void **)(a + c * 4 + 0xd8);
    x = data_ov011_021cad30[0];
    y = data_ov011_021cad30[1];
    goto tail;

L78:
    p = *(void **)(a + c * 4 + 0xd8);
    x = data_ov011_021cad60[0];
    y = data_ov011_021cad60[1];

tail:
    {
        void *r = func_ov009_0219a390(p, x, y);
        func_02056bc0(r6, r);
    }
done:
    return (int)r6;
}
