/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/set_status_four_args.c, externs renamed. */
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


extern void func_ov002_021c1dd4(u32 a, u32 b, u32 c, u32 d);

void func_ov002_021c2214(void* obj)
{
    func_ov002_021c1dd4(*(u32*)((u8*)obj + 0x14), *(u32*)((u8*)obj + 0x18),
                      *(u32*)((u8*)obj + 0x20), *(u32*)((u8*)obj + 0x1C));
    *(u32*)((u8*)obj + 0xC) = (*(u32*)((u8*)obj + 0xC) & ~0xFF) | 2;
}
