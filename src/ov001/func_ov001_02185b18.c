#include "ffc/types.h"

extern int32_t func_02092b00(uint32_t a, void *b);
extern void func_ov001_02185fec(void *a, uint32_t b);
extern int32_t func_ov000_0216591c(void);
extern void func_ov001_0218570c(void *a, void *b);
extern uint8_t data_ov001_021941ec[];

typedef void (*cb_t)(void *, int32_t, void *, void *);

void func_ov001_02185b18(void *self, void *obj, uint32_t arg)
{
    uint8_t *o = (uint8_t *)obj;
    uint8_t *s = (uint8_t *)self;
    int32_t ok;
    int32_t r = func_02092b00(arg, data_ov001_021941ec);

    ok = 1;
    if (r == 0) {
        ok = 0;
    }
    func_ov001_02185fec(obj, arg);
    if (ok) {
        uint8_t f = o[0x14];
        uint8_t t;
        if (f & 4) {
            t = 0x41;
        } else {
            t = 0x42;
        }
        o[0x14] = t | f;
        o[0x14] = o[0x14] & 0xf3;
        {
            int32_t d = func_ov000_0216591c();
            int32_t *p = (int32_t *)(o + 0x1c);
            *p = d - *p;
        }
        func_ov001_0218570c(s + 8, obj);
        {
            cb_t cb = *(cb_t *)(s + 0x58);
            cb(self, 0, obj, *(void **)(s + 0x5c));
        }
    }
}
