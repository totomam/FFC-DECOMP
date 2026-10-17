/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_delete_104_vt2.c, externs renamed. */
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


extern void func_0206c030(void* p);
extern void func_02056844(void* p);
extern void func_ov002_021d3130(void* p);
extern void func_02056844(void* p);
extern u32 data_ov002_021d78a8[];
extern u32 data_ov002_021d78c0[];

void* func_ov002_021c9724(void* self)
{
    u8* p;
    *(u32*)self = (u32)data_ov002_021d78a8;
    *(u32*)((u8*)self + 0x80) = (u32)data_ov002_021d78c0;
    p = *(u8**)((u8*)self + 0x104);
    if (p) {
        if (p) {
            func_0206c030(p);
            func_02056844(p);
        }
        *(u32*)((u8*)self + 0x104) = 0;
    }
    func_ov002_021d3130(self);
    func_02056844(self);
    return self;
}
