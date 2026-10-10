#include "ffc/types.h"

typedef struct {
    uint32_t pad[3];
    int32_t a;
    int32_t b;
} FfcObj14;

extern void func_ov014_02148790(FfcObj14 *p);

void func_ov014_02148584(FfcObj14 *p)
{
    func_ov014_02148790(p);
    p->a = -1;
    p->b = 0;
}
