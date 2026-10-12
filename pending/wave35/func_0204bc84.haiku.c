#include "ffc/types.h"

extern uint32_t func_0204de78(uint32_t p);
extern uint32_t func_0204de74(uint32_t p);
extern uint32_t func_0204de80(uint32_t p);
extern void func_0204dec8(uint32_t p);
extern void func_0204ac38(uint32_t a, uint32_t b, uint32_t c);
extern void func_0204b48c(uint32_t a, uint32_t b);
extern void func_0204ded0(uint32_t p);

typedef struct {
    uint32_t pad[3];
    uint32_t *volatile ptr;
    uint32_t val;
} Obj;

void func_0204bc84(uint32_t p) {
    Obj **pp = (Obj **)func_0204de78(p);
    uint32_t b = func_0204de74(p);
    uint32_t c = func_0204de80(p);
    Obj *s = *pp;
    func_0204dec8(c);
    if (s != 0) {
        if (*s->ptr == 0) {
            *s->ptr = 1;
            func_0204ac38(c, (uint32_t)s->ptr, s->val);
        }
    }
    func_0204b48c(b, c);
    func_0204ded0(c);
}
