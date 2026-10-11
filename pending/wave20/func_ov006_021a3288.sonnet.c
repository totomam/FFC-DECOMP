#include "ffc/types.h"
typedef struct { uint32_t w[22]; } B;
extern void func_ov006_021a28c4(B *p);
extern void func_ov006_021a28ec(B *p, uint32_t a, uint32_t b);
extern void func_ov006_021a2964(void *a, B *p);

void func_ov006_021a3288(void *r0, uint32_t r1, uint32_t r2) {
    B buf;
    B *q = &buf;
    func_ov006_021a28c4(q);
    func_ov006_021a28ec(&buf, r1, r2);
    if (r0) { func_ov006_021a2964(r0, &buf); }
}
