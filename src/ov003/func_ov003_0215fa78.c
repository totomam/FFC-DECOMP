#include "ffc/types.h"

extern void func_02056858(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov003_0217a2d4[];

typedef struct {
    void *vtbl;
    void *ptr;
} S;

void *func_ov003_0215fa78(void *p) {
    S *s = p;
    s->vtbl = data_ov003_0217a2d4;
    if (s->ptr) {
        func_02056858(s->ptr);
        s->ptr = 0;
    }
    func_02056844(s);
    return s;
}
