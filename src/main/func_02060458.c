#include "ffc/types.h"

typedef struct {
    void *obj;
    uint16_t a;
    uint16_t b;
    uint16_t c;
} S;

extern uint16_t *func_0204f0bc(void *obj);
extern uint16_t *func_0204f0c4(void *obj);
extern uint16_t *func_0204f0cc(void *obj);

void func_02060458(S *s) {
    *func_0204f0bc(s->obj) = s->a;
    *func_0204f0c4(s->obj) = s->b;
    *func_0204f0cc(s->obj) = s->c;
}
