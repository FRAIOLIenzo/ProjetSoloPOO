#include "MyFormStockCreer.h"
#include "MyFormStockSupprimer.h"
#include "MyFormStockModifier.h"
#include "CLserviceStock.h"
#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyFormStock
	/// </summary>
	public ref class MyFormStock : public System::Windows::Forms::Form
	{
	public:
		MyFormStock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvStock;
	protected:

	protected:

	private: NS_Comp_Svc::CLservicesStock^ oSvc;
	private: System::Data::DataSet^ oDs;


	private: System::Windows::Forms::Button^ btnCreer;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Button^ btnModifier;


	private: System::Windows::Forms::Button^ btnAfficher;
	private: System::Windows::Forms::Panel^ pnlMode;



	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Form^ formulaireActuel;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormStock::typeid));
			this->dgvStock = (gcnew System::Windows::Forms::DataGridView());
			this->btnCreer = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnAfficher = (gcnew System::Windows::Forms::Button());
			this->pnlMode = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStock))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvStock
			// 
			this->dgvStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStock->Location = System::Drawing::Point(686, 12);
			this->dgvStock->Name = L"dgvStock";
			this->dgvStock->RowHeadersWidth = 82;
			this->dgvStock->RowTemplate->Height = 33;
			this->dgvStock->Size = System::Drawing::Size(750, 321);
			this->dgvStock->TabIndex = 4;
			// 
			// btnCreer
			// 
			this->btnCreer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnCreer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->btnCreer->FlatAppearance->BorderSize = 0;
			this->btnCreer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreer->ForeColor = System::Drawing::Color::White;
			this->btnCreer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCreer.Image")));
			this->btnCreer->Location = System::Drawing::Point(686, 530);
			this->btnCreer->Name = L"btnCreer";
			this->btnCreer->Size = System::Drawing::Size(223, 116);
			this->btnCreer->TabIndex = 5;
			this->btnCreer->Text = L"Cr�er";
			this->btnCreer->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnCreer->UseVisualStyleBackColor = false;
			this->btnCreer->Click += gcnew System::EventHandler(this, &MyFormStock::btnCreer_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSupprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->btnSupprimer->FlatAppearance->BorderSize = 0;
			this->btnSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimer->ForeColor = System::Drawing::Color::White;
			this->btnSupprimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSupprimer.Image")));
			this->btnSupprimer->Location = System::Drawing::Point(950, 530);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(223, 116);
			this->btnSupprimer->TabIndex = 6;
			this->btnSupprimer->Text = L"Supprimer";
			this->btnSupprimer->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnSupprimer->UseVisualStyleBackColor = false;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &MyFormStock::btnSupprimer_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnModifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->btnModifier->FlatAppearance->BorderSize = 0;
			this->btnModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifier->ForeColor = System::Drawing::Color::White;
			this->btnModifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnModifier.Image")));
			this->btnModifier->Location = System::Drawing::Point(1213, 530);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(223, 116);
			this->btnModifier->TabIndex = 7;
			this->btnModifier->Text = L"Modifier";
			this->btnModifier->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnModifier->UseVisualStyleBackColor = false;
			this->btnModifier->Click += gcnew System::EventHandler(this, &MyFormStock::btnModifier_Click);
			// 
			// btnAfficher
			// 
			this->btnAfficher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAfficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)));
			this->btnAfficher->FlatAppearance->BorderSize = 0;
			this->btnAfficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAfficher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAfficher->ForeColor = System::Drawing::Color::White;
			this->btnAfficher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAfficher.Image")));
			this->btnAfficher->Location = System::Drawing::Point(686, 372);
			this->btnAfficher->Name = L"btnAfficher";
			this->btnAfficher->Size = System::Drawing::Size(750, 116);
			this->btnAfficher->TabIndex = 8;
			this->btnAfficher->Text = L"Afficher";
			this->btnAfficher->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnAfficher->UseVisualStyleBackColor = false;
			this->btnAfficher->Click += gcnew System::EventHandler(this, &MyFormStock::btnAfficher_Click);
			// 
			// pnlMode
			// 
			this->pnlMode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pnlMode->Location = System::Drawing::Point(12, 12);
			this->pnlMode->Name = L"pnlMode";
			this->pnlMode->Size = System::Drawing::Size(647, 634);
			this->pnlMode->TabIndex = 9;
			// 
			// MyFormStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1448, 658);
			this->ControlBox = false;
			this->Controls->Add(this->btnAfficher);
			this->Controls->Add(this->btnModifier);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->btnCreer);
			this->Controls->Add(this->dgvStock);
			this->Controls->Add(this->pnlMode);
			this->Name = L"MyFormStock";
			this->Text = L"MyFormPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormStock::MyFormStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStock))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void OuvrirFormulaire(System::Windows::Forms::Form^ formulaire) {
			if (formulaireActuel != nullptr) {
				formulaireActuel->Close();
			}
			formulaire->TopLevel = false;
			formulaire->Parent = pnlMode;
			pnlMode->Controls->Add(formulaire);
			formulaire->Dock = System::Windows::Forms::DockStyle::Fill;
			formulaire->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			formulaire->Show();
			formulaireActuel = formulaire;
		}
	private: System::Void btnCreer_Click(System::Object^ sender, System::EventArgs^ e) {
		OuvrirFormulaire(gcnew MyFormStockCreer());
	}
	private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		OuvrirFormulaire(gcnew MyFormStockSupprimer());
	}
	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		OuvrirFormulaire(gcnew MyFormStockModifier());
	}
	private: System::Void MyFormStock_Load(System::Object^ sender, System::EventArgs^ e) {
		OuvrirFormulaire(gcnew MyFormStockCreer());
		this->oSvc = gcnew NS_Comp_Svc::CLservicesStock();
	}
private: System::Void btnAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgvStock->Refresh();
	this->oDs = this->oSvc->SelectionnerStock("Rsl");
	this->dgvStock->DataSource = this->oDs;
	this->dgvStock->DataMember = "Rsl";
}
};
}
