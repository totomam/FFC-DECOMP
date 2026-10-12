#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_02092878(void *p, const uint8_t *text);

typedef struct {
    void *ptr;
    void *field;
} Entry;

typedef struct {
    Entry *arr;
    int32_t max;
    int32_t count;
} Table;

int32_t func_ov000_02156e48(uint8_t *ctx, Table *t, const uint8_t *text, const uint8_t *text2)
{
    uint32_t (*alloc)(uint32_t, uint32_t) = *(uint32_t (**)(uint32_t, uint32_t))(ctx + 0x1010);
    void (*release)(uint32_t, void *, uint32_t) = *(void (**)(uint32_t, void *, uint32_t))(ctx + 0x1014);

    if (t->count > t->max) {
        return 0;
    }

    t->arr[t->count].ptr = (void *)alloc(0, func_02092864(text) + 1);
    if (t->arr[t->count].ptr != 0) {
        t->arr[t->count].field = (void *)alloc(0, func_02092864(text2) + 1);
        if (t->arr[t->count].field != 0) {
            func_02092878(t->arr[t->count].ptr, text);
            func_02092878(t->arr[t->count].field, text2);
            t->count++;
            return 1;
        }
    }

    if (t->arr[t->count].ptr != 0) {
        release(0, t->arr[t->count].ptr, 0);
        t->arr[t->count].ptr = 0;
    }
    if (t->arr[t->count].field != 0) {
        release(0, t->arr[t->count].field, 0);
        t->arr[t->count].field = 0;
    }
    return 0;
}
