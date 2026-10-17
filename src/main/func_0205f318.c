
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
  uint32_t a;
  uint32_t b;
} Pair;
extern Pair data_020b11b4[];
typedef struct 
{
  uint32_t p0 : 8;
  uint32_t mode : 2;
  uint32_t p1 : 4;
  uint32_t lo : 2;
  uint32_t p2 : 14;
  uint32_t hi : 2;
  uint32_t w[5];
  uint32_t a;
  uint32_t b;
  uint32_t pad[2];
} Elem;
typedef struct 
{
  uint32_t pad0;
  Elem *elems;
  uint32_t pad1[2];
  uint32_t count;
} Obj;
void func_0205f318(Obj *o, uint32_t mode)
{
  Elem *e = o->elems;
  uint32_t count = o->count;
  if (count == 0)
  {
    return;
  }
  do
  {
    uint32_t idx;
    e->mode = mode;
    if (mode != 3)
    {
      idx = e->lo | (e->hi << 2);
      Pair *t = &data_020b11b4[idx];
      uint32_t x = t->a;
      uint32_t y = t->b;
      e->a = x;
      e->b = y;
    }
    else
    {
      idx = e->lo | (e->hi << 2);
      Pair *t = &data_020b11b4[idx];
      uint32_t x = t->a;
      uint32_t y = t->b;
      x <<= 1;
      y <<= 1;
      e->b = y;
      e->a = x;
      e->b = y;
    }
    count--;
    e++;
  }
  while (count != 0);
}
