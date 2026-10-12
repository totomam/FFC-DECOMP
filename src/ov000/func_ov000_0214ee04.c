#include "ffc/types.h"

extern void func_ov000_0214dec0(void *a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5);

typedef struct {
    uint8_t pad[2];
    uint16_t h;
    uint32_t w;
} S;

void func_ov000_0214ee04(void *a0, uint32_t a1, uint32_t a2, uint32_t a3, S *p)
{
    uint32_t hv;
    uint32_t wv;

    if (p) {
        hv = (uint16_t)((uint8_t)(p->h >> 8) | ((p->h << 8) & 0xff00));
        wv = (uint32_t)((uint8_t)(p->w >> 24)) | ((p->w >> 8) & 0xff00) | ((p->w << 8) & 0xff0000) | ((p->w << 24) & 0xff000000);
    } else {
        hv = 0;
        wv = 0;
    }
    func_ov000_0214dec0(a0, a1, a2, hv, wv, a3);
}
