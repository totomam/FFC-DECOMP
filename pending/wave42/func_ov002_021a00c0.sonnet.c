#include "ffc/types.h"

extern uint32_t func_ov002_021a18bc(const void *object);
extern uint32_t func_ov002_021a18c4(const void *object, uint32_t index);
extern uint32_t func_ov002_021aa778(const void *object);
typedef struct { uint8_t b; } B;
typedef struct {
    uint32_t *items;
    uint32_t count;
    uint32_t capacity;
} List;
extern void func_0200d5d4(void *object, uint32_t *ptr, B b);

void func_ov002_021a00c0(uint32_t a, List *list, void *x, void *y) {
    uint32_t v, kk;
    uint8_t t[4];
    volatile uint32_t k = 0;
    void *objs[2];
    objs[0] = x; objs[1] = y;
    do {
        void *obj = k ? objs[1] : objs[0];
        uint32_t i;
        if (obj != 0) {
            for (i = 0; i < func_ov002_021a18bc(obj); i++) {
                v = func_ov002_021aa778((void *)func_ov002_021a18c4(obj, i));
                if (list->count < list->capacity) {
                    list->items[(list->count += 1) - 1] = v;
                } else {
                    uint8_t *p = &t[1];
                    *p = 0;
                    func_0200d5d4(list, &v, *(B *)p);
                }
            }
        }
        kk = k + 1;
        k = kk;
    } while (kk < 2);
}
