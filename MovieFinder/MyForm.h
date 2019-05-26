#pragma once

#include "MyClass.h"
#include "msclr\marshal_cppstd.h"
#include "windows.h"

namespace MovieFinder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ findButton;
	protected:
	private: System::Windows::Forms::Label^ recommendLabel;
	private: System::Windows::Forms::Label^ typeLabel;
	private: System::Windows::Forms::Label^ genreLabel;
	private: System::Windows::Forms::Label^ producerLabel;
	private: System::Windows::Forms::Label^ actorLabel;
	private: System::Windows::Forms::Label^ yearLabel;
	private: System::Windows::Forms::Label^ themeLabel;
	private: System::Windows::Forms::Label^ featureLabel;
	private: System::Windows::Forms::ComboBox^ typeComboBox;
	private: System::Windows::Forms::ComboBox^ genreComboBox1;
	private: System::Windows::Forms::Button^ plusgenreButton;
	private: System::Windows::Forms::ComboBox^ genreComboBox2;
	private: System::Windows::Forms::ComboBox^ genreComboBox3;
	private: System::Windows::Forms::ComboBox^ producerComboBox;
	private: System::Windows::Forms::ComboBox^ actorComboBox1;
	private: System::Windows::Forms::ComboBox^ actorComboBox2;
	private: System::Windows::Forms::ComboBox^ actorComboBox3;
	private: System::Windows::Forms::Button^ plusactorButton;
	private: System::Windows::Forms::ComboBox^ yearComboBox;
	private: System::Windows::Forms::ComboBox^ themeComboBox1;
	private: System::Windows::Forms::ComboBox^ themeComboBox2;
	private: System::Windows::Forms::ComboBox^ themeComboBox3;
	private: System::Windows::Forms::Button^ plusthemeButton;
	private: System::Windows::Forms::ComboBox^ featureComboBox1;
	private: System::Windows::Forms::ComboBox^ featureComboBox2;
	private: System::Windows::Forms::ComboBox^ featureComboBox3;
	private: System::Windows::Forms::Button^ plusfeatureButton;
	private: System::Windows::Forms::ComboBox^ creatorComboBox;
	private: System::Windows::Forms::Button^ randomButton;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::PictureBox^ posterPictureBox;
	private: System::Windows::Forms::Label^ percentLabel;
	private: System::Windows::Forms::Label^ describeLabel;












	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->findButton = (gcnew System::Windows::Forms::Button());
			this->recommendLabel = (gcnew System::Windows::Forms::Label());
			this->typeLabel = (gcnew System::Windows::Forms::Label());
			this->genreLabel = (gcnew System::Windows::Forms::Label());
			this->producerLabel = (gcnew System::Windows::Forms::Label());
			this->actorLabel = (gcnew System::Windows::Forms::Label());
			this->yearLabel = (gcnew System::Windows::Forms::Label());
			this->themeLabel = (gcnew System::Windows::Forms::Label());
			this->featureLabel = (gcnew System::Windows::Forms::Label());
			this->typeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->genreComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->plusgenreButton = (gcnew System::Windows::Forms::Button());
			this->genreComboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->genreComboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->producerComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->actorComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->actorComboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->actorComboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->plusactorButton = (gcnew System::Windows::Forms::Button());
			this->yearComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->themeComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->themeComboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->themeComboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->plusthemeButton = (gcnew System::Windows::Forms::Button());
			this->featureComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->featureComboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->featureComboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->plusfeatureButton = (gcnew System::Windows::Forms::Button());
			this->creatorComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->randomButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->posterPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->percentLabel = (gcnew System::Windows::Forms::Label());
			this->describeLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posterPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// findButton
			// 
			this->findButton->Location = System::Drawing::Point(15, 236);
			this->findButton->Name = L"findButton";
			this->findButton->Size = System::Drawing::Size(75, 23);
			this->findButton->TabIndex = 0;
			this->findButton->Text = L"Найти";
			this->findButton->UseVisualStyleBackColor = true;
			this->findButton->Click += gcnew System::EventHandler(this, &MyForm::FindButton_Click);
			// 
			// recommendLabel
			// 
			this->recommendLabel->AutoSize = true;
			this->recommendLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->recommendLabel->Location = System::Drawing::Point(294, 317);
			this->recommendLabel->Name = L"recommendLabel";
			this->recommendLabel->Size = System::Drawing::Size(87, 13);
			this->recommendLabel->TabIndex = 1;
			this->recommendLabel->Text = L"Рекомедация";
			this->recommendLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// typeLabel
			// 
			this->typeLabel->AutoSize = true;
			this->typeLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->typeLabel->Location = System::Drawing::Point(12, 15);
			this->typeLabel->Name = L"typeLabel";
			this->typeLabel->Size = System::Drawing::Size(26, 13);
			this->typeLabel->TabIndex = 2;
			this->typeLabel->Text = L"Тип";
			// 
			// genreLabel
			// 
			this->genreLabel->AutoSize = true;
			this->genreLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->genreLabel->Location = System::Drawing::Point(12, 42);
			this->genreLabel->Name = L"genreLabel";
			this->genreLabel->Size = System::Drawing::Size(36, 13);
			this->genreLabel->TabIndex = 3;
			this->genreLabel->Text = L"Жанр";
			// 
			// producerLabel
			// 
			this->producerLabel->AutoSize = true;
			this->producerLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->producerLabel->Location = System::Drawing::Point(12, 69);
			this->producerLabel->Name = L"producerLabel";
			this->producerLabel->Size = System::Drawing::Size(58, 13);
			this->producerLabel->TabIndex = 4;
			this->producerLabel->Text = L"Режиссёр";
			// 
			// actorLabel
			// 
			this->actorLabel->AutoSize = true;
			this->actorLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->actorLabel->Location = System::Drawing::Point(12, 96);
			this->actorLabel->Name = L"actorLabel";
			this->actorLabel->Size = System::Drawing::Size(37, 13);
			this->actorLabel->TabIndex = 5;
			this->actorLabel->Text = L"Актёр";
			// 
			// yearLabel
			// 
			this->yearLabel->AutoSize = true;
			this->yearLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->yearLabel->Location = System::Drawing::Point(12, 123);
			this->yearLabel->Name = L"yearLabel";
			this->yearLabel->Size = System::Drawing::Size(25, 13);
			this->yearLabel->TabIndex = 6;
			this->yearLabel->Text = L"Год";
			// 
			// themeLabel
			// 
			this->themeLabel->AutoSize = true;
			this->themeLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->themeLabel->Location = System::Drawing::Point(12, 150);
			this->themeLabel->Name = L"themeLabel";
			this->themeLabel->Size = System::Drawing::Size(57, 13);
			this->themeLabel->TabIndex = 7;
			this->themeLabel->Text = L"Тематика";
			// 
			// featureLabel
			// 
			this->featureLabel->AutoSize = true;
			this->featureLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->featureLabel->Location = System::Drawing::Point(12, 177);
			this->featureLabel->Name = L"featureLabel";
			this->featureLabel->Size = System::Drawing::Size(71, 13);
			this->featureLabel->TabIndex = 8;
			this->featureLabel->Text = L"\"Изюминка\"";
			// 
			// typeComboBox
			// 
			this->typeComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->typeComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->typeComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->typeComboBox->FormattingEnabled = true;
			this->typeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Фильм", L"Сериал" });
			this->typeComboBox->Location = System::Drawing::Point(116, 12);
			this->typeComboBox->Name = L"typeComboBox";
			this->typeComboBox->Size = System::Drawing::Size(155, 21);
			this->typeComboBox->TabIndex = 9;
			this->typeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::TypeComboBox_SelectedIndexChanged);
			// 
			// genreComboBox1
			// 
			this->genreComboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->genreComboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->genreComboBox1->FormattingEnabled = true;
			this->genreComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"nope", L"Антиутопия", L"Антология", L"Боевик",
					L"Вестерн", L"Детектив", L"Драма", L"Комедия", L"Криминал", L"Научная фантастика", L"Неонуар", L"Приключения", L"Ситуационная комедия",
					L"Супергеройский фильм", L"Трагикомедия", L"Триллер", L"Фэнтези", L"Чёрная комедия", L"Экшн", L"Южная готика"
			});
			this->genreComboBox1->Location = System::Drawing::Point(116, 39);
			this->genreComboBox1->Name = L"genreComboBox1";
			this->genreComboBox1->Size = System::Drawing::Size(155, 21);
			this->genreComboBox1->Sorted = true;
			this->genreComboBox1->TabIndex = 10;
			this->genreComboBox1->TextUpdate += gcnew System::EventHandler(this, &MyForm::GenreComboBox1_TextUpdate);
			// 
			// plusgenreButton
			// 
			this->plusgenreButton->Location = System::Drawing::Point(91, 38);
			this->plusgenreButton->Name = L"plusgenreButton";
			this->plusgenreButton->Size = System::Drawing::Size(19, 21);
			this->plusgenreButton->TabIndex = 11;
			this->plusgenreButton->Text = L"+";
			this->plusgenreButton->UseVisualStyleBackColor = true;
			this->plusgenreButton->Click += gcnew System::EventHandler(this, &MyForm::PlusgenreButton_Click);
			// 
			// genreComboBox2
			// 
			this->genreComboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->genreComboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->genreComboBox2->FormattingEnabled = true;
			this->genreComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"nope", L"Антиутопия", L"Антология", L"Боевик",
					L"Вестерн", L"Детектив", L"Драма", L"Комедия", L"Криминал", L"Научная фантастика", L"Неонуар", L"Приключения", L"Ситуационная комедия",
					L"Супергеройский фильм", L"Трагикомедия", L"Триллер", L"Фэнтези", L"Чёрная комедия", L"Экшн", L"Южная готика"
			});
			this->genreComboBox2->Location = System::Drawing::Point(277, 39);
			this->genreComboBox2->Name = L"genreComboBox2";
			this->genreComboBox2->Size = System::Drawing::Size(155, 21);
			this->genreComboBox2->Sorted = true;
			this->genreComboBox2->TabIndex = 12;
			this->genreComboBox2->Visible = false;
			// 
			// genreComboBox3
			// 
			this->genreComboBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->genreComboBox3->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->genreComboBox3->FormattingEnabled = true;
			this->genreComboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"nope", L"Антиутопия", L"Антология", L"Боевик",
					L"Вестерн", L"Детектив", L"Драма", L"Комедия", L"Криминал", L"Научная фантастика", L"Неонуар", L"Приключения", L"Ситуационная комедия",
					L"Супергеройский фильм", L"Трагикомедия", L"Триллер", L"Фэнтези", L"Чёрная комедия", L"Экшн", L"Южная готика"
			});
			this->genreComboBox3->Location = System::Drawing::Point(438, 39);
			this->genreComboBox3->Name = L"genreComboBox3";
			this->genreComboBox3->Size = System::Drawing::Size(155, 21);
			this->genreComboBox3->Sorted = true;
			this->genreComboBox3->TabIndex = 13;
			this->genreComboBox3->Visible = false;
			// 
			// producerComboBox
			// 
			this->producerComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->producerComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->producerComboBox->FormattingEnabled = true;
			this->producerComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"nope", L"Дэвид Финчер", L"Квентин Тарантино",
					L"Кристофер Нолан", L"Питер Джексон", L"Роберт Земекис", L"Серджо Леоне", L"Сидни Люмет", L"Стивен Спилберг", L"Френсис Форд Коппола",
					L"Фрэнк Дарабонт"
			});
			this->producerComboBox->Location = System::Drawing::Point(116, 66);
			this->producerComboBox->Name = L"producerComboBox";
			this->producerComboBox->Size = System::Drawing::Size(155, 21);
			this->producerComboBox->Sorted = true;
			this->producerComboBox->TabIndex = 14;
			// 
			// actorComboBox1
			// 
			this->actorComboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->actorComboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->actorComboBox1->FormattingEnabled = true;
			this->actorComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(181) {
				L"nope", L"Аарон Пол", L"Айзек Хэмпстед-Райт",
					L"Аль Пачино", L"Альфи Аллен", L"Амори Ноласко", L"Анна Ганн", L"Ар Джей Митт", L"Бен Кингсли", L"Бенедикт Камбербэтч", L"Бетси Брандт",
					L"Билли Бойд", L"Боб Оденкерк", L"Брайан Крэнстон", L"Брэд Питт", L"Брюс Уиллис", L"Вигго Мортенсен", L"Винс Вон", L"Вуди Харрельсон",
					L"Гарри Ллойд", L"Гвендолин Кристи", L"Гэри Олдмен", L"Гэри Синиз", L"Деней Гарсия", L"Джанкарло Эспозито", L"Джейкоб Андерсон",
					L"Джейми-Линн Сиглер", L"Джеймс Гандольфини", L"Джеймс Каан", L"Джеймс Космо", L"Джейсон Момоа", L"Джейсон Сигел", L"Джек Глисон",
					L"Дженнифер Моррисон", L"Дженнифер Энистон", L"Джером Флинн", L"Джесси Племонс", L"Джесси Спенсер", L"Джим Парсонс", L"Джо Демпси",
					L"Джоди Лин О’Киф", L"Джон Брэдли", L"Джон МакГинли", L"Джон Рис-Дэвис", L"Джон Траволта", L"Джонатан Бэнкс", L"Джонатан Прайс",
					L"Джонни Галэки", L"Джош Рэднор", L"Джуди Рейес", L"Дин-Чарльз Чэпмен", L"Дин Норрис", L"Доминик Кьянезе", L"Доминик Монаган",
					L"Доминик Пёрселл", L"Дональд Фэйсон", L"Дэвид Франко", L"Дэвид Швиммер", L"Зак Брафф", L"Иван Реон", L"Илай Уоллак", L"Индира Варма",
					L"Иэн Глен", L"Иэн Маккеллен", L"Кармен Эджого", L"Кевин Зусман", L"Кейли Куоко", L"Келли Райлли", L"Кен Дженкинс", L"Керри Бише",
					L"Кит Харингтон", L"Клинт Иствуд", L"Коби Смолдерс", L"Колин Фаррелл", L"Конлет Хилл", L"Кортни Кокс", L"Крис Вэнс", L"Кристиан Бейл",
					L"Кристин Милиоти", L"Кристофер Хивью", L"Кунал Найяр", L"Кэл Пенн", L"Кэрис ван Хаутен", L"Ли Ван Клиф", L"Лиам Каннингем",
					L"Лиам Нисон", L"Лиза Кудроу", L"Лиза Эдельштейн", L"Лина Хиди", L"Лора Спенсер", L"Лора Фрейзер", L"Лоррейн Бракко", L"Маим Бялик",
					L"Майкелти Уильямсон", L"Майкл Империоли", L"Майкл Макэлхаттон", L"Майкл Поттс", L"Майкл Рапапорт", L"Марк Эдди", L"Марлон Брандо",
					L"Мартин Фримен", L"Маршалл Оллмэн", L"Махершала Али", L"Мелисса Ройч", L"Михаэль Мосли", L"Михиль Хаусман", L"Мишель Монаган",
					L"Мишель Фэйрли", L"Морган Фриман", L"Мэйси Уильямс", L"Мэтт Леблан", L"Мэттью Макконахи", L"Мэттью Перри", L"Натали Дормер",
					L"Натали Эммануэль", L"Николай Костер-Вальда", L"Нил Патрик Харрис", L"Нил Флинн", L"Одетт Эннэйбл", L"Оливия Уайлд", L"Омар Эппс",
					L"Орландо Блум", L"Петер Стормаре", L"Питер Джейкобсон", L"Питер Динклэйдж", L"Пол Адельштейн", L"Ричард Мэдден", L"Роберт Айлер",
					L"Роберт Де Ниро", L"Роберт Дюваль", L"Роберт Неппер", L"Роберт Уиздом", L"Роберт Шон Леонард", L"Робин Райт", L"Робин Танни",
					L"Рокмонд Данбар", L"Рори Макканн", L"Роуз Лесли", L"Рэй Фишер", L"Рэйф Файнс", L"Рэйчел Макадамс", L"Саймон Хелберг", L"Салли Филд",
					L"Сара Гилберт", L"Сара Уэйн Кэллис", L"Сара Чок", L"Сибель Кекилли", L"Скут Макнэйри", L"Софи Тёрнер", L"Стивен Ван Зандт",
					L"Стивен Диллэйн", L"Стивен Дорфф", L"Сэмюэл Л. Джексон", L"Тейлор Китч", L"Тим Роббинс", L"Том Влашиха", L"Том Хэнкс", L"Тони Сирико",
					L"Тори Киттлз", L"Уильям Фихтнер", L"Ума Турман", L"Уна Чаплин", L"Уэйд Уильямс", L"Уэнтуорт Миллер", L"Ханна Мюррей", L"Хелена Бонэм Картер",
					L"Хит Леджер", L"Хью Лори", L"Чарльз Дэнс", L"Шарлин И", L"Шон Астин", L"Шон Бин", L"Эдвард Нортон", L"Эди Фалко", L"Эйдан Гиллен",
					L"Элайджа Вуд", L"Элиза Коуп", L"Элисон Ханниган", L"Эмбер Тэмблин", L"Эмилия Кларк", L"Энди Серкис"
			});
			this->actorComboBox1->Location = System::Drawing::Point(116, 93);
			this->actorComboBox1->Name = L"actorComboBox1";
			this->actorComboBox1->Size = System::Drawing::Size(155, 21);
			this->actorComboBox1->Sorted = true;
			this->actorComboBox1->TabIndex = 15;
			// 
			// actorComboBox2
			// 
			this->actorComboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->actorComboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->actorComboBox2->FormattingEnabled = true;
			this->actorComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(181) {
				L"nope", L"Аарон Пол", L"Айзек Хэмпстед-Райт",
					L"Аль Пачино", L"Альфи Аллен", L"Амори Ноласко", L"Анна Ганн", L"Ар Джей Митт", L"Бен Кингсли", L"Бенедикт Камбербэтч", L"Бетси Брандт",
					L"Билли Бойд", L"Боб Оденкерк", L"Брайан Крэнстон", L"Брэд Питт", L"Брюс Уиллис", L"Вигго Мортенсен", L"Винс Вон", L"Вуди Харрельсон",
					L"Гарри Ллойд", L"Гвендолин Кристи", L"Гэри Олдмен", L"Гэри Синиз", L"Деней Гарсия", L"Джанкарло Эспозито", L"Джейкоб Андерсон",
					L"Джейми-Линн Сиглер", L"Джеймс Гандольфини", L"Джеймс Каан", L"Джеймс Космо", L"Джейсон Момоа", L"Джейсон Сигел", L"Джек Глисон",
					L"Дженнифер Моррисон", L"Дженнифер Энистон", L"Джером Флинн", L"Джесси Племонс", L"Джесси Спенсер", L"Джим Парсонс", L"Джо Демпси",
					L"Джоди Лин О’Киф", L"Джон Брэдли", L"Джон МакГинли", L"Джон Рис-Дэвис", L"Джон Траволта", L"Джонатан Бэнкс", L"Джонатан Прайс",
					L"Джонни Галэки", L"Джош Рэднор", L"Джуди Рейес", L"Дин-Чарльз Чэпмен", L"Дин Норрис", L"Доминик Кьянезе", L"Доминик Монаган",
					L"Доминик Пёрселл", L"Дональд Фэйсон", L"Дэвид Франко", L"Дэвид Швиммер", L"Зак Брафф", L"Иван Реон", L"Илай Уоллак", L"Индира Варма",
					L"Иэн Глен", L"Иэн Маккеллен", L"Кармен Эджого", L"Кевин Зусман", L"Кейли Куоко", L"Келли Райлли", L"Кен Дженкинс", L"Керри Бише",
					L"Кит Харингтон", L"Клинт Иствуд", L"Коби Смолдерс", L"Колин Фаррелл", L"Конлет Хилл", L"Кортни Кокс", L"Крис Вэнс", L"Кристиан Бейл",
					L"Кристин Милиоти", L"Кристофер Хивью", L"Кунал Найяр", L"Кэл Пенн", L"Кэрис ван Хаутен", L"Ли Ван Клиф", L"Лиам Каннингем",
					L"Лиам Нисон", L"Лиза Кудроу", L"Лиза Эдельштейн", L"Лина Хиди", L"Лора Спенсер", L"Лора Фрейзер", L"Лоррейн Бракко", L"Маим Бялик",
					L"Майкелти Уильямсон", L"Майкл Империоли", L"Майкл Макэлхаттон", L"Майкл Поттс", L"Майкл Рапапорт", L"Марк Эдди", L"Марлон Брандо",
					L"Мартин Фримен", L"Маршалл Оллмэн", L"Махершала Али", L"Мелисса Ройч", L"Михаэль Мосли", L"Михиль Хаусман", L"Мишель Монаган",
					L"Мишель Фэйрли", L"Морган Фриман", L"Мэйси Уильямс", L"Мэтт Леблан", L"Мэттью Макконахи", L"Мэттью Перри", L"Натали Дормер",
					L"Натали Эммануэль", L"Николай Костер-Вальда", L"Нил Патрик Харрис", L"Нил Флинн", L"Одетт Эннэйбл", L"Оливия Уайлд", L"Омар Эппс",
					L"Орландо Блум", L"Петер Стормаре", L"Питер Джейкобсон", L"Питер Динклэйдж", L"Пол Адельштейн", L"Ричард Мэдден", L"Роберт Айлер",
					L"Роберт Де Ниро", L"Роберт Дюваль", L"Роберт Неппер", L"Роберт Уиздом", L"Роберт Шон Леонард", L"Робин Райт", L"Робин Танни",
					L"Рокмонд Данбар", L"Рори Макканн", L"Роуз Лесли", L"Рэй Фишер", L"Рэйф Файнс", L"Рэйчел Макадамс", L"Саймон Хелберг", L"Салли Филд",
					L"Сара Гилберт", L"Сара Уэйн Кэллис", L"Сара Чок", L"Сибель Кекилли", L"Скут Макнэйри", L"Софи Тёрнер", L"Стивен Ван Зандт",
					L"Стивен Диллэйн", L"Стивен Дорфф", L"Сэмюэл Л. Джексон", L"Тейлор Китч", L"Тим Роббинс", L"Том Влашиха", L"Том Хэнкс", L"Тони Сирико",
					L"Тори Киттлз", L"Уильям Фихтнер", L"Ума Турман", L"Уна Чаплин", L"Уэйд Уильямс", L"Уэнтуорт Миллер", L"Ханна Мюррей", L"Хелена Бонэм Картер",
					L"Хит Леджер", L"Хью Лори", L"Чарльз Дэнс", L"Шарлин И", L"Шон Астин", L"Шон Бин", L"Эдвард Нортон", L"Эди Фалко", L"Эйдан Гиллен",
					L"Элайджа Вуд", L"Элиза Коуп", L"Элисон Ханниган", L"Эмбер Тэмблин", L"Эмилия Кларк", L"Энди Серкис"
			});
			this->actorComboBox2->Location = System::Drawing::Point(277, 93);
			this->actorComboBox2->Name = L"actorComboBox2";
			this->actorComboBox2->Size = System::Drawing::Size(155, 21);
			this->actorComboBox2->Sorted = true;
			this->actorComboBox2->TabIndex = 16;
			this->actorComboBox2->Visible = false;
			// 
			// actorComboBox3
			// 
			this->actorComboBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->actorComboBox3->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->actorComboBox3->FormattingEnabled = true;
			this->actorComboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(181) {
				L"nope", L"Аарон Пол", L"Айзек Хэмпстед-Райт",
					L"Аль Пачино", L"Альфи Аллен", L"Амори Ноласко", L"Анна Ганн", L"Ар Джей Митт", L"Бен Кингсли", L"Бенедикт Камбербэтч", L"Бетси Брандт",
					L"Билли Бойд", L"Боб Оденкерк", L"Брайан Крэнстон", L"Брэд Питт", L"Брюс Уиллис", L"Вигго Мортенсен", L"Винс Вон", L"Вуди Харрельсон",
					L"Гарри Ллойд", L"Гвендолин Кристи", L"Гэри Олдмен", L"Гэри Синиз", L"Деней Гарсия", L"Джанкарло Эспозито", L"Джейкоб Андерсон",
					L"Джейми-Линн Сиглер", L"Джеймс Гандольфини", L"Джеймс Каан", L"Джеймс Космо", L"Джейсон Момоа", L"Джейсон Сигел", L"Джек Глисон",
					L"Дженнифер Моррисон", L"Дженнифер Энистон", L"Джером Флинн", L"Джесси Племонс", L"Джесси Спенсер", L"Джим Парсонс", L"Джо Демпси",
					L"Джоди Лин О’Киф", L"Джон Брэдли", L"Джон МакГинли", L"Джон Рис-Дэвис", L"Джон Траволта", L"Джонатан Бэнкс", L"Джонатан Прайс",
					L"Джонни Галэки", L"Джош Рэднор", L"Джуди Рейес", L"Дин-Чарльз Чэпмен", L"Дин Норрис", L"Доминик Кьянезе", L"Доминик Монаган",
					L"Доминик Пёрселл", L"Дональд Фэйсон", L"Дэвид Франко", L"Дэвид Швиммер", L"Зак Брафф", L"Иван Реон", L"Илай Уоллак", L"Индира Варма",
					L"Иэн Глен", L"Иэн Маккеллен", L"Кармен Эджого", L"Кевин Зусман", L"Кейли Куоко", L"Келли Райлли", L"Кен Дженкинс", L"Керри Бише",
					L"Кит Харингтон", L"Клинт Иствуд", L"Коби Смолдерс", L"Колин Фаррелл", L"Конлет Хилл", L"Кортни Кокс", L"Крис Вэнс", L"Кристиан Бейл",
					L"Кристин Милиоти", L"Кристофер Хивью", L"Кунал Найяр", L"Кэл Пенн", L"Кэрис ван Хаутен", L"Ли Ван Клиф", L"Лиам Каннингем",
					L"Лиам Нисон", L"Лиза Кудроу", L"Лиза Эдельштейн", L"Лина Хиди", L"Лора Спенсер", L"Лора Фрейзер", L"Лоррейн Бракко", L"Маим Бялик",
					L"Майкелти Уильямсон", L"Майкл Империоли", L"Майкл Макэлхаттон", L"Майкл Поттс", L"Майкл Рапапорт", L"Марк Эдди", L"Марлон Брандо",
					L"Мартин Фримен", L"Маршалл Оллмэн", L"Махершала Али", L"Мелисса Ройч", L"Михаэль Мосли", L"Михиль Хаусман", L"Мишель Монаган",
					L"Мишель Фэйрли", L"Морган Фриман", L"Мэйси Уильямс", L"Мэтт Леблан", L"Мэттью Макконахи", L"Мэттью Перри", L"Натали Дормер",
					L"Натали Эммануэль", L"Николай Костер-Вальда", L"Нил Патрик Харрис", L"Нил Флинн", L"Одетт Эннэйбл", L"Оливия Уайлд", L"Омар Эппс",
					L"Орландо Блум", L"Петер Стормаре", L"Питер Джейкобсон", L"Питер Динклэйдж", L"Пол Адельштейн", L"Ричард Мэдден", L"Роберт Айлер",
					L"Роберт Де Ниро", L"Роберт Дюваль", L"Роберт Неппер", L"Роберт Уиздом", L"Роберт Шон Леонард", L"Робин Райт", L"Робин Танни",
					L"Рокмонд Данбар", L"Рори Макканн", L"Роуз Лесли", L"Рэй Фишер", L"Рэйф Файнс", L"Рэйчел Макадамс", L"Саймон Хелберг", L"Салли Филд",
					L"Сара Гилберт", L"Сара Уэйн Кэллис", L"Сара Чок", L"Сибель Кекилли", L"Скут Макнэйри", L"Софи Тёрнер", L"Стивен Ван Зандт",
					L"Стивен Диллэйн", L"Стивен Дорфф", L"Сэмюэл Л. Джексон", L"Тейлор Китч", L"Тим Роббинс", L"Том Влашиха", L"Том Хэнкс", L"Тони Сирико",
					L"Тори Киттлз", L"Уильям Фихтнер", L"Ума Турман", L"Уна Чаплин", L"Уэйд Уильямс", L"Уэнтуорт Миллер", L"Ханна Мюррей", L"Хелена Бонэм Картер",
					L"Хит Леджер", L"Хью Лори", L"Чарльз Дэнс", L"Шарлин И", L"Шон Астин", L"Шон Бин", L"Эдвард Нортон", L"Эди Фалко", L"Эйдан Гиллен",
					L"Элайджа Вуд", L"Элиза Коуп", L"Элисон Ханниган", L"Эмбер Тэмблин", L"Эмилия Кларк", L"Энди Серкис"
			});
			this->actorComboBox3->Location = System::Drawing::Point(438, 93);
			this->actorComboBox3->Name = L"actorComboBox3";
			this->actorComboBox3->Size = System::Drawing::Size(155, 21);
			this->actorComboBox3->Sorted = true;
			this->actorComboBox3->TabIndex = 17;
			this->actorComboBox3->Visible = false;
			// 
			// plusactorButton
			// 
			this->plusactorButton->Location = System::Drawing::Point(91, 92);
			this->plusactorButton->Name = L"plusactorButton";
			this->plusactorButton->Size = System::Drawing::Size(19, 21);
			this->plusactorButton->TabIndex = 18;
			this->plusactorButton->Text = L"+";
			this->plusactorButton->UseVisualStyleBackColor = true;
			this->plusactorButton->Click += gcnew System::EventHandler(this, &MyForm::PlusactorButton_Click);
			// 
			// yearComboBox
			// 
			this->yearComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->yearComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->yearComboBox->FormattingEnabled = true;
			this->yearComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"nope", L"70-80", L"80-90", L"90-00", L"00-10",
					L"10-20"
			});
			this->yearComboBox->Location = System::Drawing::Point(116, 120);
			this->yearComboBox->Name = L"yearComboBox";
			this->yearComboBox->Size = System::Drawing::Size(155, 21);
			this->yearComboBox->TabIndex = 19;
			// 
			// themeComboBox1
			// 
			this->themeComboBox1->FormattingEnabled = true;
			this->themeComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"nope", L"Бизнес", L"Видеоигры", L"Информационные технологии",
					L"Медицина", L"Молодёжный", L"Наука", L"О студентах", L"О юристах", L"Об офисных служащих", L"Спорт", L"Тюрьма"
			});
			this->themeComboBox1->Location = System::Drawing::Point(116, 147);
			this->themeComboBox1->Name = L"themeComboBox1";
			this->themeComboBox1->Size = System::Drawing::Size(155, 21);
			this->themeComboBox1->Sorted = true;
			this->themeComboBox1->TabIndex = 20;
			// 
			// themeComboBox2
			// 
			this->themeComboBox2->FormattingEnabled = true;
			this->themeComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"nope", L"Бизнес", L"Видеоигры", L"Информационные технологии",
					L"Медицина", L"Молодёжный", L"Наука", L"О студентах", L"О юристах", L"Об офисных служащих", L"Спорт", L"Тюрьма"
			});
			this->themeComboBox2->Location = System::Drawing::Point(277, 147);
			this->themeComboBox2->Name = L"themeComboBox2";
			this->themeComboBox2->Size = System::Drawing::Size(155, 21);
			this->themeComboBox2->Sorted = true;
			this->themeComboBox2->TabIndex = 21;
			this->themeComboBox2->Visible = false;
			// 
			// themeComboBox3
			// 
			this->themeComboBox3->FormattingEnabled = true;
			this->themeComboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"nope", L"Бизнес", L"Видеоигры", L"Информационные технологии",
					L"Медицина", L"Молодёжный", L"Наука", L"О студентах", L"О юристах", L"Об офисных служащих", L"Спорт", L"Тюрьма"
			});
			this->themeComboBox3->Location = System::Drawing::Point(438, 147);
			this->themeComboBox3->Name = L"themeComboBox3";
			this->themeComboBox3->Size = System::Drawing::Size(155, 21);
			this->themeComboBox3->Sorted = true;
			this->themeComboBox3->TabIndex = 22;
			this->themeComboBox3->Visible = false;
			// 
			// plusthemeButton
			// 
			this->plusthemeButton->Location = System::Drawing::Point(91, 146);
			this->plusthemeButton->Name = L"plusthemeButton";
			this->plusthemeButton->Size = System::Drawing::Size(19, 21);
			this->plusthemeButton->TabIndex = 23;
			this->plusthemeButton->Text = L"+";
			this->plusthemeButton->UseVisualStyleBackColor = true;
			this->plusthemeButton->Click += gcnew System::EventHandler(this, &MyForm::PlusthemeButton_Click);
			// 
			// featureComboBox1
			// 
			this->featureComboBox1->FormattingEnabled = true;
			this->featureComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"nope", L"Актёр сошёл с ума", L"Герой-рассказчик",
					L"Нелинейный сюжет", L"Основано на реальных событиях", L"С элементами философских рассуждений", L"Снят по книге"
			});
			this->featureComboBox1->Location = System::Drawing::Point(116, 174);
			this->featureComboBox1->Name = L"featureComboBox1";
			this->featureComboBox1->Size = System::Drawing::Size(155, 21);
			this->featureComboBox1->Sorted = true;
			this->featureComboBox1->TabIndex = 24;
			// 
			// featureComboBox2
			// 
			this->featureComboBox2->FormattingEnabled = true;
			this->featureComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"nope", L"Актёр сошёл с ума", L"Герой-рассказчик",
					L"Нелинейный сюжет", L"Основано на реальных событиях", L"С элементами философских рассуждений", L"Снят по книге"
			});
			this->featureComboBox2->Location = System::Drawing::Point(277, 174);
			this->featureComboBox2->Name = L"featureComboBox2";
			this->featureComboBox2->Size = System::Drawing::Size(155, 21);
			this->featureComboBox2->Sorted = true;
			this->featureComboBox2->TabIndex = 25;
			this->featureComboBox2->Visible = false;
			// 
			// featureComboBox3
			// 
			this->featureComboBox3->FormattingEnabled = true;
			this->featureComboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"nope", L"Актёр сошёл с ума", L"Герой-рассказчик",
					L"Нелинейный сюжет", L"Основано на реальных событиях", L"С элементами философских рассуждений", L"Снят по книге"
			});
			this->featureComboBox3->Location = System::Drawing::Point(438, 174);
			this->featureComboBox3->Name = L"featureComboBox3";
			this->featureComboBox3->Size = System::Drawing::Size(155, 21);
			this->featureComboBox3->Sorted = true;
			this->featureComboBox3->TabIndex = 26;
			this->featureComboBox3->Visible = false;
			// 
			// plusfeatureButton
			// 
			this->plusfeatureButton->Location = System::Drawing::Point(91, 173);
			this->plusfeatureButton->Name = L"plusfeatureButton";
			this->plusfeatureButton->Size = System::Drawing::Size(19, 21);
			this->plusfeatureButton->TabIndex = 27;
			this->plusfeatureButton->Text = L"+";
			this->plusfeatureButton->UseVisualStyleBackColor = true;
			this->plusfeatureButton->Click += gcnew System::EventHandler(this, &MyForm::PlusfeatureButton_Click);
			// 
			// creatorComboBox
			// 
			this->creatorComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->creatorComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->creatorComboBox->FormattingEnabled = true;
			this->creatorComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"nope", L"Билл Лоуренс", L"Билл Прэди",
					L"Винс Гиллиган", L"Д. Б. Уайсс", L"Дэвид Бениофф", L"Дэвид Крейн", L"Дэвид Чейз", L"Дэвид Шор", L"Картер Бейз", L"Крейг Томас",
					L"Марк Гэтисс", L"Марта Кауффман", L"Ник Пиццолатто", L"Пол Шойринг", L"Стивен Моффат", L"Чак Лорри", L"Чарли Брукер"
			});
			this->creatorComboBox->Location = System::Drawing::Point(116, 66);
			this->creatorComboBox->Name = L"creatorComboBox";
			this->creatorComboBox->Size = System::Drawing::Size(155, 21);
			this->creatorComboBox->Sorted = true;
			this->creatorComboBox->TabIndex = 28;
			this->creatorComboBox->Visible = false;
			// 
			// randomButton
			// 
			this->randomButton->Location = System::Drawing::Point(15, 265);
			this->randomButton->Name = L"randomButton";
			this->randomButton->Size = System::Drawing::Size(75, 23);
			this->randomButton->TabIndex = 29;
			this->randomButton->Text = L"Удивить!";
			this->randomButton->UseVisualStyleBackColor = true;
			this->randomButton->Click += gcnew System::EventHandler(this, &MyForm::RandomButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Location = System::Drawing::Point(177, 236);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(75, 23);
			this->clearButton->TabIndex = 30;
			this->clearButton->Text = L"Очистить";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::ClearButton_Click);
			// 
			// posterPictureBox
			// 
			this->posterPictureBox->ImageLocation = L"";
			this->posterPictureBox->Location = System::Drawing::Point(15, 317);
			this->posterPictureBox->Name = L"posterPictureBox";
			this->posterPictureBox->Size = System::Drawing::Size(273, 327);
			this->posterPictureBox->TabIndex = 31;
			this->posterPictureBox->TabStop = false;
			// 
			// percentLabel
			// 
			this->percentLabel->AutoSize = true;
			this->percentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->percentLabel->Location = System::Drawing::Point(294, 330);
			this->percentLabel->Name = L"percentLabel";
			this->percentLabel->Size = System::Drawing::Size(50, 13);
			this->percentLabel->TabIndex = 32;
			this->percentLabel->Text = L"Процент";
			this->percentLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// describeLabel
			// 
			this->describeLabel->AutoSize = true;
			this->describeLabel->Location = System::Drawing::Point(294, 353);
			this->describeLabel->MaximumSize = System::Drawing::Size(250, 0);
			this->describeLabel->Name = L"describeLabel";
			this->describeLabel->Size = System::Drawing::Size(57, 13);
			this->describeLabel->TabIndex = 33;
			this->describeLabel->Text = L"Описание";
			this->describeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 683);
			this->Controls->Add(this->describeLabel);
			this->Controls->Add(this->percentLabel);
			this->Controls->Add(this->posterPictureBox);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->randomButton);
			this->Controls->Add(this->creatorComboBox);
			this->Controls->Add(this->plusfeatureButton);
			this->Controls->Add(this->featureComboBox3);
			this->Controls->Add(this->featureComboBox2);
			this->Controls->Add(this->featureComboBox1);
			this->Controls->Add(this->plusthemeButton);
			this->Controls->Add(this->themeComboBox3);
			this->Controls->Add(this->themeComboBox2);
			this->Controls->Add(this->themeComboBox1);
			this->Controls->Add(this->yearComboBox);
			this->Controls->Add(this->plusactorButton);
			this->Controls->Add(this->actorComboBox3);
			this->Controls->Add(this->actorComboBox2);
			this->Controls->Add(this->actorComboBox1);
			this->Controls->Add(this->producerComboBox);
			this->Controls->Add(this->genreComboBox3);
			this->Controls->Add(this->genreComboBox2);
			this->Controls->Add(this->plusgenreButton);
			this->Controls->Add(this->genreComboBox1);
			this->Controls->Add(this->typeComboBox);
			this->Controls->Add(this->featureLabel);
			this->Controls->Add(this->themeLabel);
			this->Controls->Add(this->yearLabel);
			this->Controls->Add(this->actorLabel);
			this->Controls->Add(this->producerLabel);
			this->Controls->Add(this->genreLabel);
			this->Controls->Add(this->typeLabel);
			this->Controls->Add(this->recommendLabel);
			this->Controls->Add(this->findButton);
			this->Name = L"MyForm";
			this->Text = L"Фильм на вечер";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posterPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FindButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (typeComboBox->SelectedItem == nullptr) {
			typeComboBox->SelectedItem = "nope";
			typeComboBox->Text = typeComboBox->SelectedItem->ToString();
		}
		if (genreComboBox1->SelectedItem == nullptr) {
			genreComboBox1->SelectedItem = "nope";
			genreComboBox1->Text = genreComboBox1->SelectedItem->ToString();
		}
		if (genreComboBox2->SelectedItem == nullptr) {
			genreComboBox2->SelectedItem = "nope";
			genreComboBox2->Text = genreComboBox2->SelectedItem->ToString();
		}
		if (genreComboBox3->SelectedItem == nullptr) {
			genreComboBox3->SelectedItem = "nope";
			genreComboBox3->Text = genreComboBox3->SelectedItem->ToString();
		}
		if (producerComboBox->SelectedItem == nullptr) {
			producerComboBox->SelectedItem = "nope";
			producerComboBox->Text = producerComboBox->SelectedItem->ToString();
		}
		if (creatorComboBox->SelectedItem == nullptr) {
			creatorComboBox->SelectedItem = "nope";
			creatorComboBox->Text = creatorComboBox->SelectedItem->ToString();
		}
		if (actorComboBox1->SelectedItem == nullptr) {
			actorComboBox1->SelectedItem = "nope";
			actorComboBox1->Text = actorComboBox1->SelectedItem->ToString();
		}
		if (actorComboBox2->SelectedItem == nullptr) {
			actorComboBox2->SelectedItem = "nope";
			actorComboBox2->Text = actorComboBox2->SelectedItem->ToString();
		}
		if (actorComboBox3->SelectedItem == nullptr) {
			actorComboBox3->SelectedItem = "nope";
			actorComboBox3->Text = actorComboBox3->SelectedItem->ToString();
		}
		if (yearComboBox->SelectedItem == nullptr) {
			yearComboBox->SelectedItem = "nope";
			yearComboBox->Text = yearComboBox->SelectedItem->ToString();
		}
		if (themeComboBox1->SelectedItem == nullptr) {
			themeComboBox1->SelectedItem = "nope";
			themeComboBox1->Text = themeComboBox1->SelectedItem->ToString();
		}
		if (themeComboBox2->SelectedItem == nullptr) {
			themeComboBox2->SelectedItem = "nope";
			themeComboBox2->Text = themeComboBox2->SelectedItem->ToString();
		}
		if (themeComboBox3->SelectedItem == nullptr) {
			themeComboBox3->SelectedItem = "nope";
			themeComboBox3->Text = themeComboBox3->SelectedItem->ToString();
		}
		if (featureComboBox1->SelectedItem == nullptr) {
			featureComboBox1->SelectedItem = "nope";
			featureComboBox1->Text = featureComboBox1->SelectedItem->ToString();
		}
		if (featureComboBox2->SelectedItem == nullptr) {
			featureComboBox2->SelectedItem = "nope";
			featureComboBox2->Text = featureComboBox2->SelectedItem->ToString();
		}
		if (featureComboBox3->SelectedItem == nullptr) {
			featureComboBox3->SelectedItem = "nope";
			featureComboBox3->Text = featureComboBox3->SelectedItem->ToString();
		}
		string atype = marshal_as<string>(typeComboBox->SelectedItem->ToString());
		vector <string> agenre;
		agenre.push_back(marshal_as<string>(genreComboBox1->SelectedItem->ToString()));
		agenre.push_back(marshal_as<string>(genreComboBox2->SelectedItem->ToString()));
		agenre.push_back(marshal_as<string>(genreComboBox3->SelectedItem->ToString()));
		string aproducer;
		if (atype == "Фильм") {
			aproducer = marshal_as<string>(producerComboBox->SelectedItem->ToString());
		}
		else if (atype == "Сериал") {
			aproducer = marshal_as<string>(creatorComboBox->SelectedItem->ToString());
		}
		vector <string> anactor;
		anactor.push_back(marshal_as<string>(actorComboBox1->SelectedItem->ToString()));
		anactor.push_back(marshal_as<string>(actorComboBox2->SelectedItem->ToString()));
		anactor.push_back(marshal_as<string>(actorComboBox3->SelectedItem->ToString()));
		string ayear = marshal_as<string>(yearComboBox->SelectedItem->ToString());
		vector <string> atheme;
		atheme.push_back(marshal_as<string>(themeComboBox1->SelectedItem->ToString()));
		atheme.push_back(marshal_as<string>(themeComboBox2->SelectedItem->ToString()));
		atheme.push_back(marshal_as<string>(themeComboBox3->SelectedItem->ToString()));
		vector <string> afeature;
		afeature.push_back(marshal_as<string>(featureComboBox1->SelectedItem->ToString()));
		afeature.push_back(marshal_as<string>(featureComboBox2->SelectedItem->ToString()));
		afeature.push_back(marshal_as<string>(featureComboBox3->SelectedItem->ToString()));
		user.input(atype, &agenre, aproducer, &anactor, ayear, &atheme, &afeature);
		user.findmovie();
		recommendLabel->Text = marshal_as<String^>(user.recommendation);
		recommendLabel->Visible = true;
		if (user.percent != -1) {
			percentLabel->Text = marshal_as<String^>("Подходит вам на " + to_string(user.percent) + "%");
			percentLabel->Visible = true;
		}
		else if (user.percent == -1) {
			percentLabel->Visible = false;
		}
		posterPictureBox->ImageLocation = "C:\\Users\\Dell XPS 9570\\source\\repos\\dvornikov-d-a\\MovieFinder\\MovieFinder\\posters\\" + marshal_as<String^>(user.recommendation) + ".jpg";
		posterPictureBox->Visible = true;
		if (user.recommendation != "Ничего не найдено") {
			describeLabel->Text = File::ReadAllText(L"C:\\Users\\Dell XPS 9570\\source\\repos\\dvornikov-d-a\\MovieFinder\\MovieFinder\\describes\\" + marshal_as<String^>(user.recommendation) + ".txt", Encoding::Default);
			describeLabel->Visible = true;
		}
		else {
			describeLabel->Visible = false;
		}
		user.clear();

	}
	private: System::Void PlusgenreButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (genreComboBox2->Visible == false) {
			genreComboBox2->Visible = true;
		}
		else if (genreComboBox3->Visible == false) {
			genreComboBox3->Visible = true;
		}
	}
private: System::Void PlusactorButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (actorComboBox2->Visible == false) {
		actorComboBox2->Visible = true;
	}
	else if (actorComboBox3->Visible == false) {
		actorComboBox3->Visible = true;
	}
}
private: System::Void PlusthemeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (themeComboBox2->Visible == false) {
		themeComboBox2->Visible = true;
	}
	else if (themeComboBox3->Visible == false) {
		themeComboBox3->Visible = true;
	}
}
private: System::Void PlusfeatureButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (featureComboBox2->Visible == false) {
		featureComboBox2->Visible = true;
	}
	else if (featureComboBox3->Visible == false) {
		featureComboBox3->Visible = true;
	}
}
private: System::Void TypeComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (typeComboBox->SelectedItem == "Фильм") {
		producerLabel->Text = "Режиссёр";
		producerComboBox->SelectedItem = "nope";
		creatorComboBox->SelectedItem = "nope";
		producerComboBox->Visible = true;
		creatorComboBox->Visible = false;
	}
	else if (typeComboBox->SelectedItem == "Сериал") {
		producerLabel->Text = "Создатель";
		producerComboBox->SelectedItem = "nope";
		creatorComboBox->SelectedItem = "nope";
		producerComboBox->Visible = false;
		creatorComboBox->Visible = true;
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	typeComboBox->SelectedItem = "Фильм";
	genreComboBox1->SelectedItem = "nope";
	genreComboBox2->SelectedItem = "nope";
	genreComboBox3->SelectedItem = "nope";
	producerComboBox->SelectedItem = "nope";
	creatorComboBox->SelectedItem = "nope";
	actorComboBox1->SelectedItem = "nope";
	actorComboBox2->SelectedItem = "nope";
	actorComboBox3->SelectedItem = "nope";
	yearComboBox->SelectedItem = "nope";
	themeComboBox1->SelectedItem = "nope";
	themeComboBox2->SelectedItem = "nope";
	themeComboBox3->SelectedItem = "nope";
	featureComboBox1->SelectedItem = "nope";
	featureComboBox2->SelectedItem = "nope";
	featureComboBox3->SelectedItem = "nope";
	recommendLabel->Visible = false;
	percentLabel->Visible = false;
	describeLabel->Visible = false;
	posterPictureBox->Visible = false;
}
private: System::Void RandomButton_Click(System::Object^ sender, System::EventArgs^ e) {
	user.input(marshal_as<string>(typeComboBox->SelectedItem->ToString()));
	user.findmovie();
	recommendLabel->Text = marshal_as<String^>(user.recommendation);
	recommendLabel->Visible = true;
	if (user.percent != -1) {
		percentLabel->Text = marshal_as<String^>("Подходит вам на " + to_string(user.percent) + "%");
		percentLabel->Visible = true;
	}
	else if (user.percent == -1) {
		percentLabel->Visible = false;
	}
	posterPictureBox->ImageLocation = "C:\\Users\\Dell XPS 9570\\source\\repos\\dvornikov-d-a\\MovieFinder\\MovieFinder\\posters\\" + marshal_as<String^>(user.recommendation) + ".jpg";
	posterPictureBox->Visible = true;
	if (user.recommendation != "Ничего не найдено") {
		describeLabel->Text = File::ReadAllText(L"C:\\Users\\Dell XPS 9570\\source\\repos\\dvornikov-d-a\\MovieFinder\\MovieFinder\\describes\\" + marshal_as<String^>(user.recommendation) + ".txt", Encoding::Default);
		describeLabel->Visible = true;
	}
	else {
		describeLabel->Visible = false;
	}
	user.clear();
}
private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	typeComboBox->SelectedItem = "Фильм";
	genreComboBox1->SelectedItem = "nope";
	genreComboBox2->SelectedItem = "nope";
	genreComboBox3->SelectedItem = "nope";
	producerComboBox->SelectedItem = "nope";
	creatorComboBox->SelectedItem = "nope";
	actorComboBox1->SelectedItem = "nope";
	actorComboBox2->SelectedItem = "nope";
	actorComboBox3->SelectedItem = "nope";
	yearComboBox->SelectedItem = "nope";
	themeComboBox1->SelectedItem = "nope";
	themeComboBox2->SelectedItem = "nope";
	themeComboBox3->SelectedItem = "nope";
	featureComboBox1->SelectedItem = "nope";
	featureComboBox2->SelectedItem = "nope";
	featureComboBox3->SelectedItem = "nope";
	recommendLabel->Visible = false;
	percentLabel->Visible = false;
	describeLabel->Visible = false;
	posterPictureBox->Visible = false;
}
private: System::Void DescribeLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GenreComboBox1_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
