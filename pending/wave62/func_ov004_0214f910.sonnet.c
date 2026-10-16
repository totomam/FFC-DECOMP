/* cflags: -noO4,p -O1 */
#include "ffc/types.h"
typedef struct { int32_t a, b; } Pair;
typedef struct { uint8_t pad0[0x80]; Pair pr; int32_t pp[2]; int32_t h; uint8_t pad1[0x54]; int32_t x; int32_t y; } S;
extern Pair data_ov004_021596a4;
extern void func_01ffd834(int32_t, int32_t, int32_t);
void func_ov004_0214f910(S *p) {
    int32_t ok = 1;
    int32_t y = p->y;
    int32_t x = p->x + y;
    p->x = x;
    y += 0xe66;
    p->y = y;
    if (x < 0 || y < 0) ok = 0;
    if (ok) {
        func_01ffd834(p->h, 0, x >> 12);
        return;
    }
    p->pr = data_ov004_021596a4;
}
