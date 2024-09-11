class CfgPatches
{
	class seis_AWM_Sound
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Firearms_Scout",
			"DZ_Sounds_Weapons",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Projectiles",
			"DZ_Sounds_Effects",
			"DZ_Data",
			"DZ_Weapons_Supports"
		};
		magazines[]={};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class AWM_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"AWM\data\sounds\AWM_shot",1}};
		volume = 0.8;
	};
	class AWM_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"AWM\data\sounds\AWM_shot",1}};
		volume = 0.5;
	};
	class AWM_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"AWM\data\sounds\AWM_shot",1}};
		volume = 0.35;
	};
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class AWM_silencedcloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"AWM\data\sounds\AWM_suppressed_shot",1}};
		volume = 1.0;
	};
	class AWM_silencedmidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"AWM\data\sounds\AWM_suppressed_shot",1}};
		volume = 0.8;
	};
	class AWM_silenceddistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"AWM\data\sounds\AWM_suppressed_shot",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class AWM_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AWM_closeShot_SoundShader","AWM_midShot_SoundShader","AWM_distShot_SoundShader"};
	};
	class Rifle_silencerHomemade_Base_SoundSet;
	class AWM_SilencedShot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"AWM_silencedcloseShot_SoundShader","AWM_silencedmidShot_SoundShader","AWM_silenceddistShot_SoundShader"};
	};
};