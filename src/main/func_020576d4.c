
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
  uint32_t f0;
  uint32_t f4;
  uint32_t f8;
  uint32_t fc;
  uint32_t f10;
  uint32_t f14;
  uint32_t f18;
  uint32_t f1c;
  uint32_t f20;
} S;
void func_020576d4(S *p, S *s)
{
  uint32_t t = p->f4;
  uint32_t u = s->f4;
  S *new_var;
  uint32_t v;
  uint32_t w;
  p->f8 = t;
  v = s->f0;
  p->f1c = u;
  w = s->f8;
  t = p->fc;
  p->f4 = v;
  new_var = p;
  new_var->f20 = w;
  if (t != 0)
  {
    if (v & t)
    {
      if ((--new_var->f18) == 0)
      {
        new_var->f18 = new_var->f14;
        new_var->f4 = v & (~t);
      }
    }
    else
    {
      new_var->f18 = new_var->f10;
    }
  }
}
