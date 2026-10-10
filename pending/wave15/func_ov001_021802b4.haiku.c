#include "ffc/types.h"

extern uint32_t func_ov001_02181e1c();

typedef struct {
    uint32_t pad[3];
    uint32_t f0c;
    uint32_t f10;
} S;

void func_ov001_021802b4(void *a, S **pp) {
    if (func_ov001_02181e1c() == 0) {
        (*pp)->f0c = 2;
        (*pp)->f10 = 0;
    }
}
