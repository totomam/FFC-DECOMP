#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } DataPair;
typedef struct { uint8_t pad[0xb8]; DataPair d; } Target;
extern DataPair data_ov013_021c4230;
void func_ov013_021bd880(Target *p)
{
    p->d = data_ov013_021c4230;
}
