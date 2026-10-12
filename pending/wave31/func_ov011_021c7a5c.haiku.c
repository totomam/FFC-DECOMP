#include "ffc/types.h"

extern void func_0206bf5c(void *ctx);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void *func_0206c030(void *object);

typedef struct {
    uint8_t pad[0x124];
    uint32_t *arr;
    uint32_t count;
} Obj;

void func_ov011_021c7a5c(Obj *o)
{
    uint8_t local[8];
    uint32_t i = 0;

    func_0206bf5c(local);
    if (o->count != 0) {
        do {
            uint32_t j = func_0206c184((uint32_t)local, o->count);
            uint32_t a = o->arr[i];
            o->arr[i] = o->arr[j];
            o->arr[j] = a;
            i++;
        } while (i < o->count);
    }
    func_0206c030(local);
}
