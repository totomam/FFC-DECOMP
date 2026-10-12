#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa778(const void *object);
extern void func_0200d5d4(void *object, uint32_t *ptr, uint32_t value);

typedef struct {
    uint32_t *items;
    uint32_t count;
    uint32_t capacity;
} List;

void func_ov002_021a00c0(uint32_t a, List *list, void *x, void *y) {
    volatile uint32_t k = 0;
    do {
        void *obj = (k == 0) ? x : y;
        uint32_t i = 0;
        if (obj != 0) {
            uint32_t n = func_ov002_021a18bc(obj);
            if (n > 0) {
                do {
                    uint32_t v = func_ov002_021aa778((void *)func_ov002_021a18c4(obj, i));
                    if (list->count < list->capacity) {
                        list->items[list->count++] = v;
                    } else {
                        func_0200d5d4(list, &v, 0);
                    }
                    i++;
                } while (i < func_ov002_021a18bc(obj));
            }
        }
        k++;
    } while (k < 2);
}
