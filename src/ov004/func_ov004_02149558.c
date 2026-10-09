#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0x80]; DataPair d; } Target;
extern DataPair data_ov004_0215870c;
void func_ov004_02149558(Target *p)
{
    p->d = data_ov004_0215870c;
}
