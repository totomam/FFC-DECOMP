#include "ffc/types.h"

extern int32_t func_ov006_0219f078(uint16_t v, int32_t b);
extern void func_ov006_0219ef5c(int32_t b, void *p);

typedef struct {
    uint8_t pad[6];
    uint8_t type;
    uint8_t pad2;
    uint16_t size;
    uint32_t data;
} Rec;

int32_t func_ov006_0219e558(Rec *a, int32_t b)
{
    Rec *q = (Rec *)((uint8_t *)a + 6);
    int32_t r = func_ov006_0219f078(q->size, b);
    if (r <= 0) {
        return -1;
    }
    if (q->type != 0x70) {
        return -1;
    }
    func_ov006_0219ef5c(b, &q->data);
    return 0;
}
