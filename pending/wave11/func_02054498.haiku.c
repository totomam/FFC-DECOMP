#include "ffc/types.h"

extern uint8_t data_020b05ac[];

typedef struct {
    void *ptr;
    uint8_t flag;
} S;

void func_02054498(S *s) {
    s->ptr = data_020b05ac;
    s->flag = 0;
}
