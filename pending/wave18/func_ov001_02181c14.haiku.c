#include "ffc/types.h"

typedef struct {
    uint32_t key;
    uint16_t val;
} Rec;

int32_t func_ov001_02181c14(Rec **pa, Rec **pb) {
    Rec *x = *pa;
    Rec *y = *pb;
    if (x->key != y->key) {
        return (int32_t)(x->key - y->key);
    }
    return (int16_t)(x->val - y->val);
}
