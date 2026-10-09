#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0x80]; DataPair d; } Target;
extern DataPair data_020ae9f8;
void func_02039778(Target *p)
{
    p->d = data_020ae9f8;
}
