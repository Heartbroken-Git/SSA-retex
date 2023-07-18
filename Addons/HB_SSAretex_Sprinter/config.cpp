// Mercedes Sprinter version SSA

class CfgPatches
{
	class HB_SSAretex_Sprinter //class name de AddOn_Cars provenant du config.cpp du pbo d'origine
	{
		units[]= {"HB_Sprinter_SSA"};//class name de ton skin
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"chvsav_sprinter_AddOn_Cars","HB_SSAretex_TransporterT6"};
	};
};

class CfgVehicles
{
	class chVSAV_Sprinter;//class name de base dans le config.cpp du pbo d'orgine
	class HB_Sprinter_SSA : chVSAV_Sprinter //class name de ton skin avec la class name base d'origine
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "C_Man_Paramedic_01_F";
		side = 1;
		faction = "chmods";
		editorSubcategory = "HB_SSA";
		displayName = "Mercedes-Benz Sprinter VSU";//Nom en jeu
		author = "Heartbroken";//Nom de l'auteur
		hiddenSelectionsTextures[] = {"HB_SSAretex_Sprinter\data\Sprinter_SSA.paa"};//Chemin d'accès de la texture (change le nom du dossier "Mon_Skin" par celui que tu veux, n'oublies pas de mettre des _ pour les espaces)
		editorPreview = "HB_SSAretex_Sprinter\data\previews\Sprinter_SSA.jpg";

		class EventHandlers
			{
				init = "_this execVM ""\Charlieco89_Base\scripts\init_triton.sqf"";";
			};

	};
};
