#include "ffc/types.h"

typedef struct {
    uint32_t ptr;
    uint8_t f4;
    uint8_t f5;
    uint8_t f6;
} S;

extern uint32_t data_020ae698;

void func_02039120(S *p) {
    p->ptr = (uint32_t)&data_020ae698;
    p->f4 = 0;
    p->f6 = 0;
}
