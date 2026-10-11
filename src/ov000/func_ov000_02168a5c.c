#include "ffc/types.h"

extern void func_ov000_02168738(void *p);
extern void func_ov000_021653f4(void *p);

typedef struct {
    void **items;
    int32_t count;
} List;

void func_ov000_02168a5c(List *p) {
    if (p) {
        int32_t i;
        for (i = 0; i < p->count; i++) {
            func_ov000_02168738(p->items[i]);
        }
        func_ov000_021653f4(p->items);
        func_ov000_021653f4(p);
    }
}
