/* cflags:  */
/* From arcnid/ffc-decomp src/battle/cond_dothing_021AA200.c, externs renamed. */
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


/* Matched: 0x021AA200  size 0x58 (88)  [--O4p]
   if (c && b==3 && Check(self)) { DoThing(self,b,0,2,1); obj=Bar(g,Foo(g,b,2));
   store obj[5]/obj[6] into 8-byte element b of array at self+0x4c } else Other(self,b). */

extern void* data_020b8e44;
extern int func_ov002_021aa1a0(void* self);
extern void func_ov002_021aa278(void* self, s32 b, u32 z, u32 two, u32 flag);
extern void* func_02019f90(void* g, s32 b, u32 two);
extern void* func_02017734(void* g, void* x);
extern void func_ov002_021aa29c(void* self, s32 b);

typedef struct { u32 a, bb; } E8;

void func_ov002_021aa200(void* self, s32 b, u32 c)
{
    void* obj;
    if (c != 0 && b == 3 && func_ov002_021aa1a0(self)) {
        func_ov002_021aa278(self, b, 0, 2, 1);
        obj = func_02017734(data_020b8e44, func_02019f90(data_020b8e44, b, 2));
        ((E8*)((u8*)self + 0x4C))[b].a = *((u8*)obj + 5);
        ((E8*)((u8*)self + 0x4C))[b].bb = *((u8*)obj + 6);
    } else {
        func_ov002_021aa29c(self, b);
    }
}
