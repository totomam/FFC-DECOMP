#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t b : 1;
} S;

uint32_t func_ov006_0219cbb4(S *p) {
    if (p->b) {
        return 1;
    }
    return 0;
}
