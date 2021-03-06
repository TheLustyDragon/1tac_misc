// If you want to base a loadout on an existing one, this repository contains them all:
// https://github.com/Sniperhid/1tac_misc/tree/master/addons/tm_tmf_loadouts/loadouts

tooltip = "Author: Luka Stark";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_indep2_croatia"};
    vest[] = {"rhs_6b23_6sh116_flora"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"bear_lwh_croatia_ess"};
    goggles[] = {"default"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {"FirstAidKit"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    backpack[] = {"rhs_assault_umbts"};
    primaryWeapon[] = {"rhs_weap_vhsd2", 
					"rhs_weap_vhsd2_ct15x", 
					"CUP_arifle_G36K_KSK_VFG"};
	sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    scope[] = {"cup_optic_compm4"};
    bipod[] = {"rhs_acc_grip_ffg2"};
    silencer[] = {"cup_muzzle_snds_g36_black"};
    magazines[] =
    {
        
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet",
		LIST_6("rhsgref_30rnd_556x45_vhs2"),
        LIST_2("rhsgref_30rnd_556x45_vhs2_t"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_vhsd2_bg",
					"rhs_weap_vhsd2_bg_ct15x"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_SCARH_FDE_STD"};
	scope[] = {"cup_optic_aimm_compm4_blk"};
    bipod[] = {"rhs_acc_grip_ffg2"};
    silencer[] = {"rhsusf_acc_aac_scarh_silencer"};
	magazines[] =
    {
        
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet",
		LIST_6("rhs_mag_20Rnd_SCAR_762x51_m80_ball"),
        LIST_2("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class m : car 
{
    displayName = "Medic";
	backpack[] = {"rhs_medic_bag"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_20("ACE_elasticBandage"),
		LIST_20("ACE_packingBandage"),
		LIST_2("ACE_adenosine"),
		LIST_10("ACE_morphine"),
		LIST_10("ACE_epinephrine"),
		LIST_5("ACE_tourniquet"),
		LIST_6("ACE_bloodIV"),
		LIST_6("ACE_splint"),
		LIST_1("ACE_surgicalKit"),
		LIST_2("rhssaf_mag_brd_m83_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhsusf_weap_MP7A2"};
	scope[] = {"cup_optic_compm4"};
    bipod[] = {"rhs_acc_grip_ffg2"};
    silencer[] = {"rhsusf_acc_rotex_mp7"};	
    magazines[] =
    {
        LIST_8("CUP_40Rnd_46x30_MP7"),
		LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_minimi_para_railed"};
	scope[] = {"rhsusf_acc_acog2_usmc"};
    magazines[] =
    {
        LIST_2("rhsusf_100Rnd_556x45_soft_pouch"),
        LIST_2("rhsusf_100Rnd_556x45_mixed_soft_pouch"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white",
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_556x45_mixed_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"UK3CB_BAF_AT4_CS_AP_Launcher"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m40a5"};
	bipod[] = {"rhs_acc_harris_bipod"};
    scope[] = {"rksl_optic_pmii_312"};
    magazines[] =
    {
        LIST_8("rhsusf_5Rnd_762x51_AICS_m993_Mag"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white",
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_2("MRAWS_HEAT_F"),
		LIST_2("MRAWS_HE_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_4("MRAWS_HEAT_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
	backpack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_4("MRAWS_HEAT_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_Metis_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_I_Titan_F"};
	backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_4("Titan_AA")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
	backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_4("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sniper M40A5";
    uniform[] = {"CUP_U_O_RUS_Ghillie"};
    vest[] = {"rhs_6b23_6sh116_flora"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_m40a5_wd"};
    scope[] = {"rksl_optic_pmii_312"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    magazines[] =
    {
        LIST_8("rhsusf_5Rnd_762x51_AICS_m118_special_Mag"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet"
    };
};
class sn1 : r
{
    displayName = "Sniper M82A1";
    uniform[] = {"CUP_U_O_RUS_Ghillie"};
    vest[] = {"rhs_6b23_6sh116_flora"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_m82a1"};
    scope[] = {"rksl_optic_pmii_312"};
    magazines[] =
    {
        
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
		LIST_5("ACE_fieldDressing"),
		LIST_3("ACE_quikclot"),
		LIST_2("ACE_Splint"),
		"ACE_morphine",
		"ACE_tourniquet",
		LIST_8("rhsusf_mag_10Rnd_STD_50BMG_M33")
    };
};
class sp : g
{
    displayName = "Spotter";
    scope[] = {"rksl_optic_pmii_312"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"B_AssaultPack_khk"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"rhs_tsh4"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class jp : smg
{
    displayName = "Jet Pilot";
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    backpack[] = {"B_AssaultPack_khk"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};