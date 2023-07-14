// Volkswagen T6 Transporter version SSA

class CfgPatches
{
	class HB_SSAretex_TransporterT6 //class name de AddOn_Cars provenant du config.cpp du pbo d'origine
	{
		units[]= {"HB_TransporterT6_SSA"};//class name de ton skin
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"chvwT6_AddOn_Cars"};
	};
};

class CfgEditorSubcategories
{
	class HB_SSA // Category class, you point to it in editorSubcategory property
	{
		displayName = "Service de Sante des Armees"; // Name visible in the list
	};
};

class CfgVehicles
{
	class chvwT6_ap;//class name de base dans le config.cpp du pbo d'orgine
	class HB_TransporterT6_SSA : chvwT6_ap //class name de ton skin avec la class name base d'origine
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		crew = "C_Man_Paramedic_01_F";
		side = 1;
		faction = "chmods";
		editorSubcategory = "HB_SSA";
		displayName = "Volkswagen Transporter T6 VSU";//Nom en jeu
		author = "Heartbroken";//Nom de l'auteur
		hiddenSelectionsTextures[] = {"HB_SSAretex_TransporterT6\data\T6_SSA.paa"};//Chemin d'accès de la texture (change le nom du dossier "Mon_Skin" par celui que tu veux, n'oublies pas de mettre des _ pour les espaces)
	};
};
