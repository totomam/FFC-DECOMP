#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } D;
typedef struct { uint8_t pad[0x80]; D d; uint32_t c; } T;
extern void func_02042c64(uint32_t a, uint32_t b, uint32_t c);
extern D data_020afc30;

void func_02046868(T *p)
{
    func_02042c64(p->c, 1, 0);
    p->d = data_020afc30;
}
