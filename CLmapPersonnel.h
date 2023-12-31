#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapPersonnel
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ embauche;
		System::String^ adresse;
		int numadresse;
		int codepostal;
		int roleID;

	public:
		System::String^ SelectPersonnel(void);
		System::String^ InsertPersonnel(void);
		System::String^ DeletePersonnel(int);
		//System::String^ ShowPersonnel(int);
		System::String^ UpdatePersonnel(int, System::String^, System::String^, System::String^, System::String^, int, int, int);

		void setNom(System::String^);
		void setPrenom(System::String^);
		void setEmbauche(System::String^);
		void setAdresse(System::String^);
		void setNumAdresse(int);
		void setCodePostal(int);
		void setRoleID(int);

		//int getId(void);
		//System::String^ getNom(void);
		//System::String^ getPrenom(void);
	};
}

