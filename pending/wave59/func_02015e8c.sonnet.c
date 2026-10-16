#include "ffc/types.h"
typedef struct { uint8_t pad[4]; uint32_t a; uint32_t b; uint8_t c; } O;
typedef struct { uint8_t pad[0x50]; uint32_t a; uint32_t b; } G1;
typedef struct { uint8_t pad[0x18]; uint8_t c; } G2;
extern G1 data_020b8e70;
extern G2 data_020b8eb0;
extern uint8_t data_020b8ebc[];
extern void *func_0205327c(void *d, const void *s);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
void func_02015e8c(O *p) {
    func_0205327c(p, data_020b8ebc);
    p->a = data_020b8e70.a;
    p->b = data_020b8e70.b;
    p->c = data_020b8eb0.c;
    if (p->a != 0) {
        func_02052be0();
        if (p->c != 0) func_02052d10(p->a, p->b);
    }
}
