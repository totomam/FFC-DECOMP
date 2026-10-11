#include "ffc/types.h"

extern void func_02005fd4(void);

typedef struct {
    void *unk0;
    int32_t *arr;
    int32_t count;
} Obj;

void func_02005f88(Obj *p, int32_t n) {
    int32_t i;
    int32_t j = n;
    i = j;
    if (j < p->count) {
        do {
            p->arr[j] = -1;
            i++;
            j = i;
        } while (j < p->count);
    }
    p->count = n;
    func_02005fd4();
}
