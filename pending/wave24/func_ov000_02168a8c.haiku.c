#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *p);

typedef struct {
    void **items;
    int32_t count;
} List;

int32_t func_ov000_02168a8c(List *list) {
    int32_t sum = 0;
    int32_t i;
    if (!list) {
        return 0;
    }
    for (i = 0; i < list->count; i++) {
        sum += func_ov000_02168768(list->items[i]);
    }
    return sum;
}
