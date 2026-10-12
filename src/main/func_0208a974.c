#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    void (*fp)(int32_t, int32_t, int32_t);
    uint8_t pad[0x30];
    uint16_t h38;
    uint16_t h3a;
} G;

extern uint32_t func_02088978(void);
extern int32_t func_02089218(int32_t a, uint32_t b, int32_t c);
extern void func_0208898c(uint32_t p);
extern G data_021434e4;

void func_0208a974(void)
{
    uint32_t r4;
    int32_t r5;
    G *g;
    void (*fp)(int32_t, int32_t, int32_t);

    r4 = func_02088978();
    r5 = 0;
    if (func_02089218(6, 6u << 23, 0) >= 0) {
        r5 = 1;
    }
    if (r5 == 0) {
        func_0208898c(r4);
        g = &data_021434e4;
        g->h38 = (uint16_t)(g->h38 | 1);
        fp = g->fp;
        if (fp != 0) {
            fp(0, 4, 0);
        }
    } else {
        g = &data_021434e4;
        g->h3a = (uint16_t)(g->h3a | 1);
        g->h38 = (uint16_t)(g->h38 & 0xfffe);
        func_0208898c(r4);
    }
}
