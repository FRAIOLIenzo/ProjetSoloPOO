#pragma once
#include "CLmapPersonnel.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesPersonnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapPersonnel^ oMappPersonnel;
	public:
		CLservicesPersonnel(void);
		System::Data::DataSet^ SelectionnerPersonnel(System::String^);
		void AjouterPersonnel(System::String^, System::String^, System::String^, System::String^, int, int, int);
		void SupprimerPersonnel(int);
		void ModifierPersonnel(int, System::String^, System::String^, System::String^, System::String^, int, int, int);
	};
}






//void AfficherPersonnel(int);