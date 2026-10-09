#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0x80]; DataPair d; } Target;
extern DataPair data_020b26b8;
void func_02075350(Target *p)
{
    p->d = data_020b26b8;
}
