/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/alloc_init_vtable_add.c, externs renamed. */
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

/* func_0205681c 0x14-byte node, init (vtable 0x020AC4D8, id 0x10165, payload arg),
   then func_02055914((u8*)func_ov002_02198dec(*(self+0xF0)) + 0x80, node). Sibling of Func_021C4B10
   (alloc_init_vtable.c) with an extra getter hop.
   Matched: 021C4AD4 (48B). */
extern void* func_0205681c(u32 size);
extern void* func_ov002_02198dec(u32 p);
extern void func_02055914(void* p, void* obj);

void func_ov002_021c4ad4(void* self, void* arg)
{
    u8* obj;
    obj = (u8*)func_0205681c(0x14);
    if (obj != 0) {
        *(u32*)(obj + 0x8) = 0;
        *(u32*)(obj + 0xC) = 0x00010165;
        *(u32*)obj = 0x020AC4D8;
        *(u32*)(obj + 0x10) = (u32)arg;
    }
    func_02055914((u8*)func_ov002_02198dec(*(u32*)((u8*)self + 0xF0)) + 0x80, obj);
}
