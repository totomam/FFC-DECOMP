#include "ffc/types.h"

typedef struct { uint64_t lo; uint64_t hi; uint32_t flag; } Obj;
typedef struct { uint64_t a; uint64_t b; uint32_t z; } Buf;

extern void func_ov000_021585a8(Buf *out);

void func_ov000_02158cf4(Obj *p)
{
    Buf buf;
    func_ov000_021585a8(&buf);
    p->lo = buf.a;
    p->hi = buf.b;
    if (buf.a == 0) {
        p->flag = 0;
        return;
    }
    p->flag = 1;
}
