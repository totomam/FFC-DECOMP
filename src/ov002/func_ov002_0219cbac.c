
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned int uintptr_t;
typedef struct 
{
  uint32_t pad[3];
  uint32_t flags;
} Obj;
typedef struct 
{
  uint8_t pad[0x84];
  Obj *s[4];
} Host;
void func_ov002_0219cbac(Host *p, int32_t idx)
{
  unsigned int new_var;
  if (idx == (-1))
  {
    int32_t i;
    for (i = 0; i < 3; i++)
    {
      Obj *o = p->s[i];
      if (o != 0)
      {
        new_var = o->flags;
        o->flags = (new_var & (~0xffu)) | 2;
        p->s[i] = 0;
      }
    }

    {
      Obj *o = p->s[3];
      if (o != 0)
      {
        o->flags = (o->flags & (~0xffu)) | 2;
        p->s[3] = 0;
      }
    }
  }
  else
  {
    Obj *o = p->s[idx];
    if (o != 0)
    {
      p->s[idx]->flags = (p->s[idx]->flags & (~0xffu)) | 2;
      p->s[idx] = 0;
    }
  }
}
