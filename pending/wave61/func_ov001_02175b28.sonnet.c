#include "ffc/types.h"
extern uint8_t data_ov001_02190100[];
extern void func_ov001_0217ef6c(void *a, void *b);
extern int func_ov001_0217a9b4(void *a);
typedef struct { uint8_t pad[0x108]; uint32_t a; uint8_t pad2[0xe8]; uint32_t b; } S;
int func_ov001_02175b28(S **p)
{
    S *q;
    uint32_t v;
    if (p != 0) {
        q = *p;
        if (q != 0) {
            v = q->a;
            if (v == 0) {
                if (q->b == 4) {
                    func_ov001_0217ef6c(p, data_ov001_02190100);
                    return 2;
                }
                return func_ov001_0217a9b4(p);
            }
            return v;
        }
    }
    return 2;
}
