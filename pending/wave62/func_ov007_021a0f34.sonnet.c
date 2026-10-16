/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { int32_t x, y; } P;
typedef struct { P a, b; } R;
typedef void (*Fn)(P*, void*);
typedef struct { uint8_t pad[0x98]; void *f; } O;
void func_ov007_021a0f34(R *out, O *obj) {
    P a, a2, b, b2;
    R r;
    (*(Fn**)obj->f)[4](&a, obj->f);
    a2.x = a.x + 0x19; a2.y = a.y + 8;
    r.b = a2;
    (*(Fn**)obj->f)[4](&b, obj->f);
    b2.x = b.x - 0x19; b2.y = b.y - 8;
    r.a = b2;
    *out = r;
}
