#include "ffc/types.h"

extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a1830(void);
extern uint32_t func_ov002_021994c0(uint32_t a, uint32_t b);
extern void func_ov002_021ac2a8(uint32_t *out, const void *object);
extern void func_ov002_021ac39c(uint32_t *out, uint32_t value);
extern void func_ov002_021ac484(uint32_t *out, const void *object, uint32_t a, uint32_t b);

void func_ov002_021ac600(uint32_t *out, const void *object, uint32_t value) {
    uint32_t a, b, c;
    uint32_t flag = 1;

    func_ov002_021aa850(object);
    if (func_ov002_021994c0(func_ov002_021a1830(), 1) != 0) {
        *out = flag << 12;
        return;
    }
    func_ov002_021ac2a8(&a, object);
    func_ov002_021ac39c(&b, value);
    func_ov002_021ac484(&c, object, a, b);
    *out = c;
}
