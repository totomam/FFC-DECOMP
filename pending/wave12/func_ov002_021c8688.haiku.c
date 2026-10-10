#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} S;

void func_ov002_021c8688(S *p) {
    if (p->b > 0) {
        p->b--;
    }
}
