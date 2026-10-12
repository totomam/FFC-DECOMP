#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} Rec;

extern Rec *func_ov000_02165940(void *ap);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern int func_ov000_02167b80(void *a, void *b, void *c);
extern int func_ov000_02167f34(void *a, void *buf);
extern int func_ov000_02167bcc(void *a, void *b, void *c);
extern const char data_ov000_0216bbbc[];

int func_ov000_02167e88(void *a, void *b, void *c, uint32_t d)
{
    uint8_t buf[0x18];
    uint32_t k = 0x76c;
    Rec *r = func_ov000_02165940(&d);
    func_02091b10(buf, (uint32_t)data_ov000_0216bbbc, r->f14 + k, r->f10 + 1,
                  r->fc, r->f8, r->f4, r->f0);
    if (func_ov000_02167b80(a, b, c) == 0) {
        goto zero;
    }
    if (func_ov000_02167f34(a, buf) == 0) {
        goto zero;
    }
    if (func_ov000_02167bcc(a, b, c) != 0) {
        goto one;
    }
zero:
    return 0;
one:
    return 1;
}
