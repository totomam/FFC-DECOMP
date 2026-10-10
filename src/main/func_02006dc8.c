#include "ffc/types.h"

typedef struct {
    uint8_t pad[4];
    int16_t a;
    int16_t b;
} S;

void func_02006dc8(S *p) {
    p->a = -1;
    p->b = -1;
}
