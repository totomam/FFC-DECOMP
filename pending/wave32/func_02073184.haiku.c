#include "ffc/types.h"

extern uint8_t data_020b22dc[];
extern void func_02073904(void *self);
extern void func_02056844(void *self);

typedef struct {
    void *vt;
    uint8_t pad[0xac - 4];
    void *slots[32];
} Self;

void *func_02073184(Self *s)
{
    int i;
    s->vt = data_020b22dc;
    func_02073904(s);
    for (i = 0; i < 32; i++) {
        void *p = s->slots[i];
        if (p != 0) {
            if (p != 0) {
                (*(void (***)(void *))p)[1](p);
            }
            s->slots[i] = 0;
        }
    }
    func_02056844(s);
    return s;
}
