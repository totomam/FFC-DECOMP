#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015c98(void *unused, uint32_t index);
extern void func_ov002_021ac600(uint32_t *out, uint32_t a, uint32_t b);
extern uint32_t func_ov002_021ac650(uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov002_021c9030(void *obj, uint32_t v);
extern void func_ov002_021c903c(void *obj, uint32_t v);
extern uint32_t func_ov002_021c9004(void *obj);
extern void func_ov002_021ac5d4(uint32_t *out, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov002_021c8ff8(void *obj);
extern void func_ov002_021ac7a0(uint32_t *out, uint32_t a, uint32_t b);
extern uint32_t func_ov002_021aca3c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov002_021c902c(void *obj, uint32_t v);
extern uint32_t func_ov002_021c8ff4(void *obj);
extern uint32_t func_ov002_021a0d1c(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov002_021c9038(void *obj, uint32_t v);
extern void func_ov002_021a0da8(void *p, void *obj);
extern int32_t func_ov002_021aa820(uint32_t obj);
extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a1838(uint32_t x);
extern void func_ov002_021c9034(void *obj, uint32_t v);

typedef struct {
    uint8_t pad[2];
    uint8_t f2;
} Rec;

void func_ov002_021a0fd4(void *p0, uint32_t a1, uint32_t a2, uint32_t a3, void *obj)
{
    Rec *r7;
    uint32_t v;
    uint32_t t;
    uint32_t local_1c;
    uint32_t local_18;
    uint32_t local_14;
    uint8_t b;
    int32_t n;

    r7 = (Rec *)func_02015c98(data_020b8e44, a3);
    func_ov002_021ac600(&local_1c, a1, a2);
    v = func_ov002_021ac650(a1, 0, r7, a2, local_1c, 0);
    func_ov002_021c9030(obj, v);
    if (v == 0) {
        func_ov002_021c903c(obj, 1);
    }
    if (func_ov002_021c9004(obj) == 0) {
        func_ov002_021ac5d4(&local_18, a1, a2, 1);
        t = func_ov002_021c8ff8(obj);
        func_ov002_021ac7a0(&local_14, a1, t);
        v = func_ov002_021aca3c(a1, 0, a2, a3, local_18, local_14);
        func_ov002_021c902c(obj, v);
        b = r7->f2;
        n = func_ov002_021c8ff4(obj);
        v = func_ov002_021a0d1c(p0, a2, b, n);
        func_ov002_021c9038(obj, v);
        func_ov002_021a0da8(p0, obj);
        n = func_ov002_021c8ff4(obj);
        if (n < func_ov002_021aa820(a2)) {
            return;
        }
        if (func_ov002_021a1838(func_ov002_021aa850(a2)) != 0) {
            return;
        }
        func_ov002_021c9038(obj, 0);
        func_ov002_021c9034(obj, 0);
    }
}
