#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0x80]; DataPair d; } Target;
extern DataPair data_ov003_0217b93c;
void func_ov003_02173b04(Target *p)
{
    p->d = data_ov003_0217b93c;
}
