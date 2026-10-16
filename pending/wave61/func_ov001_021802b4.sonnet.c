#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; uint32_t e; } S;
extern int func_ov001_02181e1c(void *a, void *b);
void func_ov001_021802b4(void *a, S **p) {
    if (func_ov001_02181e1c(a, p) != 0) return;
    (*p)->d = 2;
    (*p)->e = 0;
}
