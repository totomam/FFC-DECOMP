#include "ffc/types.h"
typedef struct { uint32_t v; } S;
extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a1830(void);
extern uint32_t func_ov002_021994c0(uint32_t a, uint32_t b);
extern void func_ov002_021ac2a8(S *out, const void *object);
extern void func_ov002_021ac39c(S *out, uint32_t value);
extern void func_ov002_021ac484(S *out, const void *object, S a, S b);

void func_ov002_021ac600(S *out, const void *object, uint32_t value) {
    S a, b, c;
    uint32_t flag = 1;

    func_ov002_021aa850(object);
    if (func_ov002_021994c0(func_ov002_021a1830(), flag) != 0) {
        out->v = flag << 12;
        return;
    }
    func_ov002_021ac2a8(&a, object);
    func_ov002_021ac39c(&b, value);
    func_ov002_021ac484(&c, object, a, b);
    *out = c;
}
