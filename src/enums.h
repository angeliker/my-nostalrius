/**
 * Tibia GIMUD Server - a free and open-source MMORPG server emulator
 * Copyright (C) 2017  Alejandro Mujica <alejandrodemujica@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef FS_ENUMS_H_003445999FEE4A67BCECBE918B0124CE
#define FS_ENUMS_H_003445999FEE4A67BCECBE918B0124CE

enum ThreadState {
	THREAD_STATE_RUNNING,
	THREAD_STATE_CLOSING,
	THREAD_STATE_TERMINATED,
};

enum itemAttrTypes : uint32_t {
	ITEM_ATTRIBUTE_NONE,

	ITEM_ATTRIBUTE_ACTIONID = 1 << 0,
	ITEM_ATTRIBUTE_MOVEMENTID = 1 << 1,
	ITEM_ATTRIBUTE_DESCRIPTION = 1 << 2,
	ITEM_ATTRIBUTE_TEXT = 1 << 3,
	ITEM_ATTRIBUTE_DATE = 1 << 4,
	ITEM_ATTRIBUTE_WRITER = 1 << 5,
	ITEM_ATTRIBUTE_NAME = 1 << 6,
	ITEM_ATTRIBUTE_ARTICLE = 1 << 7,
	ITEM_ATTRIBUTE_PLURALNAME = 1 << 8,
	ITEM_ATTRIBUTE_WEIGHT = 1 << 9,
	ITEM_ATTRIBUTE_ATTACK = 1 << 10,
	ITEM_ATTRIBUTE_DEFENSE = 1 << 11,
	ITEM_ATTRIBUTE_ARMOR = 1 << 12,
	ITEM_ATTRIBUTE_SHOOTRANGE = 1 << 13,
	ITEM_ATTRIBUTE_OWNER = 1 << 14,
	ITEM_ATTRIBUTE_DURATION = 1 << 15,
	ITEM_ATTRIBUTE_DECAYSTATE = 1 << 16,
	ITEM_ATTRIBUTE_CORPSEOWNER = 1 << 17,
	ITEM_ATTRIBUTE_CHARGES = 1 << 18,
	ITEM_ATTRIBUTE_FLUIDTYPE = 1 << 19,
	ITEM_ATTRIBUTE_DOORID = 1 << 20,
	ITEM_ATTRIBUTE_KEYNUMBER = 1 << 21,
	ITEM_ATTRIBUTE_KEYHOLENUMBER = 1 << 22,
	ITEM_ATTRIBUTE_DOORQUESTNUMBER = 1 << 23,
	ITEM_ATTRIBUTE_DOORQUESTVALUE = 1 << 24,
	ITEM_ATTRIBUTE_DOORLEVEL = 1 << 25,
	ITEM_ATTRIBUTE_CHESTQUESTNUMBER = 1 << 26,
};

enum VipStatus_t : uint8_t {
	VIPSTATUS_OFFLINE = 0,
	VIPSTATUS_ONLINE = 1,
};

enum OperatingSystem_t : uint8_t {
	CLIENTOS_NONE = 0,

	CLIENTOS_LINUX = 1,
	CLIENTOS_WINDOWS = 2,
	CLIENTOS_FLASH = 3,

	CLIENTOS_OTCLIENT_LINUX = 10,
	CLIENTOS_OTCLIENT_WINDOWS = 11,
	CLIENTOS_OTCLIENT_MAC = 12,
};

enum AccountType_t : uint8_t {
	ACCOUNT_TYPE_NORMAL = 1,
	ACCOUNT_TYPE_TUTOR = 2,
	ACCOUNT_TYPE_SENIORTUTOR = 3,
	ACCOUNT_TYPE_GAMEMASTER = 4,
	ACCOUNT_TYPE_GOD = 5
};

enum RaceType_t : uint8_t {
	RACE_NONE,
	RACE_VENOM,
	RACE_BLOOD,
	RACE_UNDEAD,
	RACE_FIRE,
};

enum CombatType_t : uint16_t {
	COMBAT_NONE = 0,

	COMBAT_PHYSICALDAMAGE = 1 << 0,
	COMBAT_ENERGYDAMAGE = 1 << 1,
	COMBAT_EARTHDAMAGE = 1 << 2,
	COMBAT_FIREDAMAGE = 1 << 3,
	COMBAT_UNDEFINEDDAMAGE = 1 << 4,
	COMBAT_LIFEDRAIN = 1 << 5,
	COMBAT_MANADRAIN = 1 << 6,
	COMBAT_HEALING = 1 << 7,

	COMBAT_COUNT = 9
};

enum CombatParam_t {
	COMBAT_PARAM_TYPE,
	COMBAT_PARAM_EFFECT,
	COMBAT_PARAM_DISTANCEEFFECT,
	COMBAT_PARAM_BLOCKSHIELD,
	COMBAT_PARAM_BLOCKARMOR,
	COMBAT_PARAM_TARGETCASTERORTOPMOST,
	COMBAT_PARAM_CREATEITEM,
	COMBAT_PARAM_AGGRESSIVE,
	COMBAT_PARAM_DISPEL,
	COMBAT_PARAM_USECHARGES,
	COMBAT_PARAM_DECREASEDAMAGE,
	COMBAT_PARAM_MAXIMUMDECREASEDDAMAGE,
};

enum fightMode_t : uint8_t {
	FIGHTMODE_ATTACK = 1,
	FIGHTMODE_BALANCED = 2,
	FIGHTMODE_DEFENSE = 3,
};

enum CallBackParam_t {
	CALLBACK_PARAM_LEVELMAGICVALUE,
	CALLBACK_PARAM_SKILLVALUE,
	CALLBACK_PARAM_TARGETTILE,
	CALLBACK_PARAM_TARGETCREATURE,
};

enum ConditionParam_t {
	CONDITION_PARAM_OWNER = 1,
	CONDITION_PARAM_TICKS = 2,
	//CONDITION_PARAM_OUTFIT = 3,
	CONDITION_PARAM_HEALTHGAIN = 4,
	CONDITION_PARAM_HEALTHTICKS = 5,
	CONDITION_PARAM_MANAGAIN = 6,
	CONDITION_PARAM_MANATICKS = 7,
	CONDITION_PARAM_DELAYED = 8,
	CONDITION_PARAM_SPEED = 9,
	CONDITION_PARAM_LIGHT_LEVEL = 10,
	CONDITION_PARAM_LIGHT_COLOR = 11,
	CONDITION_PARAM_SOULGAIN = 12,
	CONDITION_PARAM_SOULTICKS = 13,
	CONDITION_PARAM_MINVALUE = 14,
	CONDITION_PARAM_MAXVALUE = 15,
	CONDITION_PARAM_STARTVALUE = 16,
	CONDITION_PARAM_TICKINTERVAL = 17,
	CONDITION_PARAM_SKILL_MELEE = 19,
	CONDITION_PARAM_SKILL_FIST = 20,
	CONDITION_PARAM_SKILL_CLUB = 21,
	CONDITION_PARAM_SKILL_SWORD = 22,
	CONDITION_PARAM_SKILL_AXE = 23,
	CONDITION_PARAM_SKILL_DISTANCE = 24,
	CONDITION_PARAM_SKILL_SHIELD = 25,
	CONDITION_PARAM_SKILL_FISHING = 26,
	CONDITION_PARAM_STAT_MAXHITPOINTS = 27,
	CONDITION_PARAM_STAT_MAXMANAPOINTS = 28,
	// CONDITION_PARAM_STAT_SOULPOINTS = 29,
	CONDITION_PARAM_STAT_MAGICPOINTS = 30,
	CONDITION_PARAM_STAT_MAXHITPOINTSPERCENT = 31,
	CONDITION_PARAM_STAT_MAXMANAPOINTSPERCENT = 32,
	// CONDITION_PARAM_STAT_SOULPOINTSPERCENT = 33,
	CONDITION_PARAM_STAT_MAGICPOINTSPERCENT = 34,
	CONDITION_PARAM_PERIODICDAMAGE = 35,
	CONDITION_PARAM_SKILL_MELEEPERCENT = 36,
	CONDITION_PARAM_SKILL_FISTPERCENT = 37,
	CONDITION_PARAM_SKILL_CLUBPERCENT = 38,
	CONDITION_PARAM_SKILL_SWORDPERCENT = 39,
	CONDITION_PARAM_SKILL_AXEPERCENT = 40,
	CONDITION_PARAM_SKILL_DISTANCEPERCENT = 41,
	CONDITION_PARAM_SKILL_SHIELDPERCENT = 42,
	CONDITION_PARAM_SKILL_FISHINGPERCENT = 43,
	// CONDITION_PARAM_BUFF_SPELL = 44,
	CONDITION_PARAM_SUBID = 45,
	CONDITION_PARAM_FIELD = 46,
	CONDITION_PARAM_CYCLE = 47,
	CONDITION_PARAM_HIT_DAMAGE = 48,
	CONDITION_PARAM_COUNT = 49,
	CONDITION_PARAM_MAX_COUNT = 50,
};

enum BlockType_t : uint8_t {
	BLOCK_NONE,
	BLOCK_DEFENSE,
	BLOCK_ARMOR,
	BLOCK_IMMUNITY
};

enum skills_t : uint8_t {
	SKILL_FIST = 0,
	SKILL_CLUB = 1,
	SKILL_SWORD = 2,
	SKILL_AXE = 3,
	SKILL_DISTANCE = 4,
	SKILL_SHIELD = 5,
	SKILL_FISHING = 6,

	SKILL_MAGLEVEL = 7,
	SKILL_LEVEL = 8,

	SKILL_FIRST = SKILL_FIST,
	SKILL_LAST = SKILL_FISHING
};

enum stats_t {
	STAT_MAXHITPOINTS,
	STAT_MAXMANAPOINTS,
	STAT_SOULPOINTS, // unused
	STAT_MAGICPOINTS,

	STAT_FIRST = STAT_MAXHITPOINTS,
	STAT_LAST = STAT_MAGICPOINTS
};

enum formulaType_t {
	COMBAT_FORMULA_UNDEFINED,
	COMBAT_FORMULA_LEVELMAGIC,
	COMBAT_FORMULA_SKILL,
	COMBAT_FORMULA_DAMAGE,
};

enum ConditionType_t {
	CONDITION_NONE,

	CONDITION_POISON = 1 << 0,
	CONDITION_FIRE = 1 << 1,
	CONDITION_ENERGY = 1 << 2,
	CONDITION_HASTE = 1 << 3,
	CONDITION_PARALYZE = 1 << 4,
	CONDITION_OUTFIT = 1 << 5,
	CONDITION_INVISIBLE = 1 << 6,
	CONDITION_LIGHT = 1 << 7,
	CONDITION_MANASHIELD = 1 << 8,
	CONDITION_INFIGHT = 1 << 9,
	CONDITION_DRUNK = 1 << 10,
	CONDITION_REGENERATION = 1 << 11,
	CONDITION_SOUL = 1 << 12,
	CONDITION_MUTED = 1 << 13,
	CONDITION_CHANNELMUTEDTICKS = 1 << 14,
	CONDITION_YELLTICKS = 1 << 15,
	CONDITION_ATTRIBUTES = 1 << 16,
	CONDITION_EXHAUST = 1 << 17,
	CONDITION_PACIFIED = 1 << 18,
	CONDITION_AGGRESSIVE = 1 << 19,
};

enum ConditionId_t : int8_t {
	CONDITIONID_DEFAULT = -1,
	CONDITIONID_COMBAT,
	CONDITIONID_HEAD,
	CONDITIONID_NECKLACE,
	CONDITIONID_BACKPACK,
	CONDITIONID_ARMOR,
	CONDITIONID_RIGHT,
	CONDITIONID_LEFT,
	CONDITIONID_LEGS,
	CONDITIONID_FEET,
	CONDITIONID_RING,
	CONDITIONID_AMMO,
};

enum PlayerSex_t : uint8_t {
	PLAYERSEX_FEMALE = 0,
	PLAYERSEX_MALE = 1,

	PLAYERSEX_LAST = PLAYERSEX_MALE
};

enum Vocation_t : uint16_t {
	VOCATION_NONE,
	VOCATION_SORCERER = 1 << 0,
	VOCATION_DRUID = 1 << 1,
	VOCATION_PALADIN = 1 << 2,
	VOCATION_KNIGHT = 1 << 3,
};

enum ReturnValue {
	RETURNVALUE_NOERROR,
	RETURNVALUE_NOTPOSSIBLE,
	RETURNVALUE_NOTENOUGHROOM,
	RETURNVALUE_PLAYERISPZLOCKED,
	RETURNVALUE_PLAYERISNOTINVITED,
	RETURNVALUE_CANNOTTHROW,
	RETURNVALUE_THEREISNOWAY,
	RETURNVALUE_DESTINATIONOUTOFREACH,
	RETURNVALUE_CREATUREBLOCK,
	RETURNVALUE_NOTMOVEABLE,
	RETURNVALUE_DROPTWOHANDEDITEM,
	RETURNVALUE_BOTHHANDSNEEDTOBEFREE,
	RETURNVALUE_CANONLYUSEONEWEAPON,
	RETURNVALUE_NEEDEXCHANGE,
	RETURNVALUE_CANNOTBEDRESSED,
	RETURNVALUE_PUTTHISOBJECTINYOURHAND,
	RETURNVALUE_PUTTHISOBJECTINBOTHHANDS,
	RETURNVALUE_TOOFARAWAY,
	RETURNVALUE_FIRSTGODOWNSTAIRS,
	RETURNVALUE_FIRSTGOUPSTAIRS,
	RETURNVALUE_CONTAINERNOTENOUGHROOM,
	RETURNVALUE_NOTENOUGHCAPACITY,
	RETURNVALUE_CANNOTPICKUP,
	RETURNVALUE_THISISIMPOSSIBLE,
	RETURNVALUE_DEPOTISFULL,
	RETURNVALUE_CREATUREDOESNOTEXIST,
	RETURNVALUE_CANNOTUSETHISOBJECT,
	RETURNVALUE_PLAYERWITHTHISNAMEISNOTONLINE,
	RETURNVALUE_NOTREQUIREDLEVELTOUSERUNE,
	RETURNVALUE_YOUAREALREADYTRADING,
	RETURNVALUE_THISPLAYERISALREADYTRADING,
	RETURNVALUE_YOUMAYNOTLOGOUTDURINGAFIGHT,
	RETURNVALUE_DIRECTPLAYERSHOOT,
	RETURNVALUE_NOTENOUGHLEVEL,
	RETURNVALUE_NOTENOUGHMAGICLEVEL,
	RETURNVALUE_NOTENOUGHMANA,
	RETURNVALUE_NOTENOUGHSOUL,
	RETURNVALUE_YOUAREEXHAUSTED,
	RETURNVALUE_PLAYERISNOTREACHABLE,
	RETURNVALUE_CANONLYUSETHISRUNEONCREATURES,
	RETURNVALUE_ACTIONNOTPERMITTEDINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISPLAYER,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONWHILEINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISCREATURE,
	RETURNVALUE_YOUCANONLYUSEITONCREATURES,
	RETURNVALUE_CREATUREISNOTREACHABLE,
	RETURNVALUE_TURNSECUREMODETOATTACKUNMARKEDPLAYERS,
	RETURNVALUE_YOUNEEDPREMIUMACCOUNT,
	RETURNVALUE_YOUNEEDTOLEARNTHISSPELL,
	RETURNVALUE_YOURVOCATIONCANNOTUSETHISSPELL,
	RETURNVALUE_YOUNEEDAWEAPONTOUSETHISSPELL,
	RETURNVALUE_PLAYERISPZLOCKEDLEAVEPVPZONE,
	RETURNVALUE_PLAYERISPZLOCKEDENTERPVPZONE,
	RETURNVALUE_ACTIONNOTPERMITTEDINANOPVPZONE,
	RETURNVALUE_YOUCANNOTLOGOUTHERE,
	RETURNVALUE_YOUNEEDAMAGICITEMTOCASTSPELL,
	RETURNVALUE_CANNOTCONJUREITEMHERE,
	RETURNVALUE_YOUNEEDTOSPLITYOURSPEARS,
	RETURNVALUE_NAMEISTOOAMBIGIOUS,
	RETURNVALUE_CANONLYUSEONESHIELD,
	RETURNVALUE_NOPARTYMEMBERSINRANGE,
	RETURNVALUE_YOUARENOTTHEOWNER,
};

struct Outfit_t {
	uint16_t lookType = 0;
	uint16_t lookTypeEx = 0;
	uint8_t lookHead = 0;
	uint8_t lookBody = 0;
	uint8_t lookLegs = 0;
	uint8_t lookFeet = 0;
};

struct LightInfo {
	uint8_t level = 0;
	uint8_t color = 0;
	constexpr LightInfo() = default;
	constexpr LightInfo(uint8_t level, uint8_t color) : level(level), color(color) {}
};

struct CombatDamage
{
	CombatType_t type;
	int32_t value;
	int32_t min;
	int32_t max;

	CombatDamage()
	{
		type = COMBAT_NONE;
		value = 0;
		min = 0;
		max = 0;
	}
};

#endif