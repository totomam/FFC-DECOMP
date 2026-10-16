/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } T3;
typedef struct { uint32_t a, b, c; uint8_t d; } T4;
extern void func_020694ac(void *, int, int);
extern void func_02053234(void *);
extern char data_ov008_021a8b60[];
void *func_ov008_021a2998(uint8_t *self, uint32_t arg) {
    uint16_t i = 0;
    func_020694ac(self, 0, 0);
    *(void **)self = data_ov008_021a8b60;
    T4 *p = (T4 *)(self + 0xb8);
    func_02053234(p);
    T3 *q = (T3 *)(self + 0xd8);
    q->b = 0;
    q->c = 0;
    *(uint32_t *)(self + 0xd8) = 0;
    p->b = 0;
    p->d = 0;
    T3 *r = (T3 *)(self + 0x108);
    r->a = 0;
    r->b = 0;
    r->c = 0;
    *(uint32_t *)(self + 0x114) = 0;
    *(uint32_t *)(self + 0x118) = 0;
    *(uint32_t *)(self + 0x120) = 0;
    *(uint8_t *)(self + 0x124) = 0;
    *(uint8_t *)(self + 0x125) = 0xff;
    *(uint8_t *)(self + 0x126) = 0;
    *(uint32_t *)(self + 0x12c) = arg;
    for (i = 0; i < 8; i++) self[0x100 + i] = 0;
    return self;
}
