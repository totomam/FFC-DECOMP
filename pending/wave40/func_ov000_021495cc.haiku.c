#include "ffc/types.h"

extern void *func_02088978(void);
extern void func_0208898c(void *h);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);

typedef struct {
    uint8_t pad0[0x20];
    uint8_t copy[0x30];
    uint8_t pad50[4];
    uint32_t w54;
    uint16_t h58;
    uint8_t b5a;
    uint8_t pad5b;
} Ent;

extern Ent data_ov000_0216de9c[4];

void func_ov000_021495cc(uint8_t *p)
{
    void *h = func_02088978();
    int i;

    p[0x30] = 0;
    for (i = 0; i < 4; i++) {
        Ent *e = &data_ov000_0216de9c[i];
        if (e->b5a != 0 && e->w54 == 0 && e->h58 == 0) {
            if (func_02090410((const uint8_t *)e, p + 0x74, 0x20) == 0) {
                func_02084ca4(e->copy, p, 0x30);
                p[0x30] = 1;
                break;
            }
        }
    }
    func_0208898c(h);
}
