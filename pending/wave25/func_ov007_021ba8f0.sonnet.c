#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } S2;
typedef struct { uint8_t pad[0x144]; uint8_t c; uint8_t m; } T;
extern void func_ov007_021ba704(T *p);
extern void func_02069724(S2 *dst, T *src);
extern void func_02069828(T *p, S2 s);
void func_ov007_021ba8f0(T *p)
{
    S2 s;
    if (p->c == 0) p->c = p->m; else p->c--;
    func_ov007_021ba704(p);
    func_02069724(&s, p);
    func_02069828(p, s);
}
