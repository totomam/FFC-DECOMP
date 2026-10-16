/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void *func_0205681c(uint32_t n);
extern void *func_02069210(void *object);
extern void func_020695ec(void *a, void *b);
typedef struct { uint8_t *a, *b; } P;
extern struct { uint8_t pad[0x38]; uint8_t *p38; uint8_t *p3c; } data_ov009_021b080c;
extern struct { uint8_t pad[0x58]; uint32_t s58; uint32_t s5c; } data_ov009_021b088c;
extern uint8_t data_ov009_021b0a50;
void func_ov009_021a4408(uint8_t *self) {
    uint8_t i;
    for (i = 0; i < 5; i++) {
        uint8_t *o = (uint8_t *)func_0205681c(0x9c);
        if (o != 0) {
            volatile P p2; volatile P p1;
            uint8_t *a = data_ov009_021b080c.p38 + data_ov009_021b088c.s58 * i;
            p2.a = a;
            p1.a = a;
            uint8_t *b = data_ov009_021b080c.p3c + data_ov009_021b088c.s5c * i;
            p2.b = b;
            p1.b = b;
            func_02069210(o);
            *(void **)o = &data_ov009_021b0a50;
            *(uint8_t **)(o + 0x94) = a;
            *(uint8_t **)(o + 0x98) = p1.b;
        }
        *(void **)(self + 0x13c + i * 4) = o;
        func_020695ec(self, o);
    }
}
