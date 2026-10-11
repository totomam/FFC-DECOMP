#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;
typedef struct { uint8_t a; uint8_t pad[3]; uint8_t b; } Flags;

extern void *func_ov003_0214ba54(void *obj, Pair g, uint32_t a, uint32_t b, uint32_t c, uint8_t d, uint8_t e);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_02179904;

void *func_ov003_0214ba20(void *obj, uint32_t a, uint32_t b, uint32_t c, Flags f)
{
    void *node = func_ov003_0214ba54(obj, data_ov003_02179904, a, b, c, f.a, f.b);
    func_02056bc0((char *)obj + 0x14, node);
}
