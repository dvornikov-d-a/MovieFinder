#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class User
{
public:
	User();

	vector <string> movies;   //ТОП фильмов
	vector <float> movierate; //и их рейтинги
	string recommendation;    //наиболее подходящий фильм
	int percent;              //и его рейтинг

	struct preferences //предпочтения
	{
		string type;             //фильм или сериал
		vector <string> genre;   //жанры
		string producer;         //режиссёр(для фильма) и создатель(для сериала)
		vector <string> actor;   //актёры
		string year;             //год
		vector <string> theme;   //тематики
		vector <string> feature; //"изюминки"
	} ofUser;

	void input(string atype) {
		ofUser.type = atype;
		ofUser.genre.clear();
		ofUser.producer = "nope";
		ofUser.actor.clear();
		ofUser.year = "nope";
		ofUser.theme.clear();
		ofUser.feature.clear();
	}
	void input(string atype, vector <string> *agenre, string aproducer, vector <string> *anactor, string ayear, vector <string> *atheme, vector <string> *afeature) {
		ofUser.type = atype;
		nonope(agenre);
		ofUser.genre = *agenre;
		ofUser.producer = aproducer;
		nonope(anactor);
		ofUser.actor = *anactor;
		ofUser.year = ayear;
		nonope(atheme);
		ofUser.theme = *atheme;
		nonope(afeature);
		ofUser.feature = *afeature;

	} //ввод данных пользователя

	void findmovie() {
		if (nopref()) {
			lucky();
		}
		else {
			search();
			if (movies.empty()) {
				recommendation = "Ничего не найдено";
				percent = -1;
			}
			else {
				sort();
				recommendation = movies[0];
				percent = movierate[0] * 100;
			}
		}
	}

	void lucky() {
		vector <string> randmovie;
		int countmovie = 0;
		ifstream db("MovieDB.txt");
		string buff;
		getline(db, buff);
		if (ofUser.type == "Фильм") {
			while (buff != "ФИЛЬМЫ") {
				getline(db, buff);
			}
		}
		else if (ofUser.type == "Сериал") {
			while (buff != "СЕРИАЛЫ") {
				getline(db, buff);
			}
		}
		while (buff != "КОНЕЦ") {
			if (buff == "ФИЛЬМ") {
				countmovie++;
				getline(db, buff);
				randmovie.push_back(buff);
			}
			getline(db, buff);
		}
		recommendation = randmovie[(rand() % countmovie)];
		percent = -1;
	}

	void clear() { //очищение подборки
		movies.clear();
		movierate.clear();
		ofUser.type.clear();
		ofUser.genre.clear();
		ofUser.producer.clear();
		ofUser.actor.clear();
		ofUser.year.clear();
		ofUser.theme.clear();
		ofUser.feature.clear();
	}

private:

	void search() { //поиск и добавление в вектор фильмов с рейтингом выше 70%
		string buff; //текущая строка
		ifstream db("MovieDB.txt"); //подключение базы данных
		getline(db, buff);
		if (ofUser.type == "Фильм") {
			while (buff != "ФИЛЬМЫ") {
				getline(db, buff);
			}
		}
		else if (ofUser.type == "Сериал") {
			while (buff != "СЕРИАЛЫ") {
				getline(db, buff);
			}
		}
		while (buff != "КОНЕЦ") { //цикл расставления рейтинга фильмам
			while (buff != "ФИЛЬМ") {
				getline(db, buff);
			}
			getline(db, buff);
			string buffmovie = buff; //сохраняем название текущего фильма
			float buffrate = 0; //рейтинг текущего фильма
			int countpar = 0; //счётчик заданных параметров
			if (!ofUser.genre.empty()) { //если жанр задан
				countpar += ofUser.genre.size(); //прибавляем количество заданных параметров
				while (buff != "ЖАНР") { //находим раздел ЖАНР
					getline(db, buff);
				}
				while (buff != "ЖЖАНР") { //не конец раздела
					getline(db, buff);
					for (int i = 0; i < ofUser.genre.size(); i++) { //ищем совпадения с предпочтениями
						if (buff == ofUser.genre[i]) { //найдено совпадение
							buffrate++; //рейтинг увеличивается
						}
						else { //не найдено совпадение
							//рейтинг не изменяется
						}
					}
				}
			}
			if (ofUser.producer != "nope") { //если режиссёр задан
				countpar++;
				if (ofUser.type == "Фильм") {
					while (buff != "РЕЖИССЁР") {
						getline(db, buff);
					}
				}
				else if (ofUser.type == "Сериал") {
					while (buff != "СОЗДАТЕЛЬ") {
						getline(db, buff);
					}
				}
				while ((buff != ofUser.producer) && (buff != "РРЕЖИССЁР") && (buff != "ССОЗДАТЕЛЬ")) { //находим режиссёра или приходим к концу списка
					getline(db, buff);
				}
				if (buff == ofUser.producer) { //режиссёр найден
					buffrate++; //увеличение рейтинга на 1
				}
				else { //не найден
					//рейтинг не изменяется
				}
				if (ofUser.type == "Фильм") {
					while (buff != "РРЕЖИССЁР") {
						getline(db, buff);
					}
				}
				else if (ofUser.type == "Сериал") {
					while (buff != "ССОЗДАТЕЛЬ") {
						getline(db, buff);
					}
				}
			}
			if (!ofUser.actor.empty()) { //если актёр задан
				countpar += ofUser.actor.size(); //прибавляем количество заданных параметров
				while (buff != "АКТЁР") { //поиск раздела АКТЁР
					getline(db, buff);
				}
				while (buff != "ААКТЁР") { //не конец раздела
					getline(db, buff);
					for (int i = 0; i < ofUser.actor.size(); i++) { //ищем совпадение с предпочтениями
						if (buff == ofUser.actor[i]) { //совпадение найдено
							buffrate++; //рейтинг повышается
						}
						else { //совпадение не найдено
							//рейтинг не изменяется
						}
					}
				}
			}
			if (ofUser.year != "nope") { //если год задан
				countpar++;
				while (buff != "ГОД") { //поиск раздела ГОД
					getline(db, buff);
				}
				while ((buff != ofUser.year) && (buff != "ГГОД")) { //находим год или доходим до конца раздела
					getline(db, buff);
				}
				if (buff == ofUser.year) { //найден год
					buffrate++; //рейтинг повышается на 1
				}
				else { //год не найден
					//рейтинг не изменяется
				}
				while (buff != "ГГОД") {
					getline(db, buff);
				} //проматываем в конец раздела
			}
			if (!ofUser.theme.empty()) {
				countpar += ofUser.theme.size(); //прибавляем количество заданных параметров
				while (buff != "ТЕМАТИКА") { //ищем начало раздела
					getline(db, buff);
				}
				while (buff != "ТТЕМАТИКА") { //пока не конец раздела
					getline(db, buff); //считываем называние тематики
					for (int i = 0; i < ofUser.theme.size(); i++) { //поиск совпадения с предпочитаемой тематикой
						if (buff == ofUser.theme[i]) { //совпадение найдено
							buffrate++; //рейтинг повышается
						}
						else { //совпадение не найдено
							//рейтинг не изменяется
						}
					}
				}
			}
			if (!ofUser.feature.empty()) { //если "изюминка" задана
				countpar += ofUser.feature.size(); //прибавляем количество заданных параметров
				while (buff != "ИЗЮМИНКА") { //поиск раздела ИЗЮМИНКА
					getline(db, buff);
				}
				while (buff != "ИИЗЮМИНКА") { //пока не конец раздела
					getline(db, buff); //считываем название "изюминки"
					for (int i = 0; i < ofUser.feature.size(); i++) { //ищем совпадение с предпочтениями
						if (buff == ofUser.feature[i]) { //совпадение найдено
							buffrate++; //рейтинг повышается
						}
						else { //совпадение не найдено
							//рейтинг не изменяется
						}
					}
				}
			}
			while (buff != "ФФИЛЬМ") { //поиск конца характеристики фильма
				getline(db, buff);
			}
			buffrate = buffrate / countpar; //подсчёт относительного рейтинга
			if (buffrate >= 0.7) { //если относительный рейтинг больше 70%
				movies.push_back(buffmovie);   //добавление фильма в число рекомедуемых
				movierate.push_back(buffrate); //и сохранение его рейтинга 
			}
			getline(db, buff); //считываение пустой строки, разделяющей фильмы, или строки "КОНЕЦ", обозначающей конец списка фильмов
		}
		if (db.is_open()) { //закрытие базы данных
			db.close();
		}
	}

	void sort() { //сортировка по убыванию (составление ТОПа)
		for (int i = 0; i < movierate.size(); i++) {
			int numbermax = i;
			for (int j = i + 1; j < movierate.size(); j++) {
				if (movierate[j] > movierate[numbermax]) {
					numbermax = j;
				}
			}
			float temprate = movierate[i];
			string tempmovie = movies[i];
			movierate[i] = movierate[numbermax];
			movies[i] = movies[numbermax];
			movierate[numbermax] = temprate;
			movies[numbermax] = tempmovie;
		}
	}

	void nonope(vector <string> *a) {
		auto begin = a->cbegin();
		for (int i = 0; i < a->size(); i++) {
			if ((*a)[i] == "nope") {
				a->erase(begin + i);
				i--;
				begin = a->cbegin();
			}
		}
	}

	bool nopref() {
		if (ofUser.genre.empty()) {
			if (ofUser.producer == "nope") {
				if (ofUser.actor.empty()) {
					if (ofUser.year == "nope") {
						if (ofUser.theme.empty()) {
							if (ofUser.feature.empty()) {
								return 1;
							}
							return 0;
						}
						return 0;
					}
					return 0;
				}
				return 0;
			}
			return 0;
		}
		return 0;
	}
};

User::User()
{

}

User user;