class CfgPatches
{
	class AIQD
	{
		name="AI Quadratic Detection";
		author="DarkBall";
		url="";
		requiredVersion = 2.22;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"cba_common",
			"cba_events",
			"cba_settings",
			"cba_xeh"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions
{
	class DB_AIQD
	{
		class AIQD
		{
			file="\AIQD\functions";
			class findAndDrawTargets
			{
			};
			class cancelDrawTargets
			{
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class AIQD_preInit
	{
		init="call compile preProcessFileLineNumbers '\AIQD\XEH_preInit.sqf'";
	};
};
class cfgMods
{
	author="[SEAL TEAM] DarkBall";
	timepacked="1712266541";
};
