/* cflags:  */
/* From arcnid/ffc-decomp src/battle/dtor_notify3_021B4EF8.c, externs renamed. */
/* 0x021B4EF8 (size 0x80), -O4,p.
   Destructor returning this: vtable reset to 0x021D5B4C (bare constant), func_ov002_02198d08(pE0,pC0),
   cur=func_ov002_0219b860(); loop i<count (count s32 at +0x164, arr[3] at +0x158, both reached via
   reg-offset — plain field access, address of count cached in a stack slot by the
   allocator automatically); per element t=func_ov002_02198db8(pE0, arr[i]); func_ov002_021b101c(t, cur==func_ov002_021ae5f4()?4:3)
   written as if/else into a local; then func_0204fa14(+0x10C), func_020695d0(self), return self.
   cur compared LEFT against the func_ov002_021ae5f4() call result. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif


typedef struct {
    u32 vtbl;
    u8 pad04[0xBC];
    void* pC0;
    u8 padC4[0x1C];
    void* pE0;
    u8 padE4[0x28];
    u8 memb10C[0x4C];
    u32 arr[3];
    s32 count;
} Obj;

extern void func_ov002_02198d08(void* a, void* b);
extern u32 func_ov002_0219b860(void);
extern void* func_ov002_02198db8(void* a, u32 b);
extern u32 func_ov002_021ae5f4(void);
extern void func_ov002_021b101c(void* t, u32 v);
extern void func_0204fa14(void* m);
extern void func_020695d0(Obj* s);

Obj* func_ov002_021b4ef8(Obj* s)
{
    u32 cur;
    s32 i;
    s->vtbl = 0x021D5B4C;
    func_ov002_02198d08(s->pE0, s->pC0);
    cur = func_ov002_0219b860();
    i = 0;
    if (s->count > 0) {
        do {
            void* t;
            u32 v;
            t = func_ov002_02198db8(s->pE0, s->arr[i]);
            if (cur == func_ov002_021ae5f4()) {
                v = 4;
            } else {
                v = 3;
            }
            func_ov002_021b101c(t, v);
            i++;
        } while (i < s->count);
    }
    func_0204fa14(s->memb10C);
    func_020695d0(s);
    return s;
}
