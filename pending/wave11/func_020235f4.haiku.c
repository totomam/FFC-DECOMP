#include "ffc/types.h"

typedef struct {
    uint32_t a;
    int32_t off;
} S;

void *func_020235f4(S *s) {
    return (char *)s + s->off;
}
