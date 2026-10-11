#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov013_021bcdf8(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

typedef struct { int32_t a; int32_t b; } Pair;
extern Pair data_ov013_021c4228;

typedef struct {
    uint8_t pad[0xb8];
    int32_t f_b8;
    int32_t f_bc;
} Obj;

void func_ov013_021bd84c(Obj *obj)
{
    void *node;
    int32_t a, b;
    node = func_0205681c(0x90);
    if (node != 0) {
        node = func_ov013_021bcdf8(node, obj);
    }
    func_02056bc0((char *)obj + 0x14, node);
    a = data_ov013_021c4228.a;
    b = data_ov013_021c4228.b;
    obj->f_b8 = a;
    obj->f_bc = b;
}
