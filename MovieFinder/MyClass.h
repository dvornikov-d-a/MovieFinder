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

	vector <string> movies;   //��� �������
	vector <float> movierate; //� �� ��������
	string recommendation;    //�������� ���������� �����
	int percent;              //� ��� �������

	struct preferences //������������
	{
		string type;             //����� ��� ������
		vector <string> genre;   //�����
		string producer;         //�������(��� ������) � ���������(��� �������)
		vector <string> actor;   //�����
		string year;             //���
		vector <string> theme;   //��������
		vector <string> feature; //"��������"
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

	} //���� ������ ������������

	void findmovie() {
		if (nopref()) {
			lucky();
		}
		else {
			search();
			if (movies.empty()) {
				recommendation = "������ �� �������";
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
		if (ofUser.type == "�����") {
			while (buff != "������") {
				getline(db, buff);
			}
		}
		else if (ofUser.type == "������") {
			while (buff != "�������") {
				getline(db, buff);
			}
		}
		while (buff != "�����") {
			if (buff == "�����") {
				countmovie++;
				getline(db, buff);
				randmovie.push_back(buff);
			}
			getline(db, buff);
		}
		recommendation = randmovie[(rand() % countmovie)];
		percent = -1;
	}

	void clear() { //�������� ��������
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

	void search() { //����� � ���������� � ������ ������� � ��������� ���� 70%
		string buff; //������� ������
		ifstream db("MovieDB.txt"); //����������� ���� ������
		getline(db, buff);
		if (ofUser.type == "�����") {
			while (buff != "������") {
				getline(db, buff);
			}
		}
		else if (ofUser.type == "������") {
			while (buff != "�������") {
				getline(db, buff);
			}
		}
		while (buff != "�����") { //���� ������������ �������� �������
			while (buff != "�����") {
				getline(db, buff);
			}
			getline(db, buff);
			string buffmovie = buff; //��������� �������� �������� ������
			float buffrate = 0; //������� �������� ������
			int countpar = 0; //������� �������� ����������
			if (!ofUser.genre.empty()) { //���� ���� �����
				countpar += ofUser.genre.size(); //���������� ���������� �������� ����������
				while (buff != "����") { //������� ������ ����
					getline(db, buff);
				}
				while (buff != "�����") { //�� ����� �������
					getline(db, buff);
					for (int i = 0; i < ofUser.genre.size(); i++) { //���� ���������� � ��������������
						if (buff == ofUser.genre[i]) { //������� ����������
							buffrate++; //������� �������������
						}
						else { //�� ������� ����������
							//������� �� ����������
						}
					}
				}
			}
			if (ofUser.producer != "nope") { //���� ������� �����
				countpar++;
				if (ofUser.type == "�����") {
					while (buff != "�����Ѩ�") {
						getline(db, buff);
					}
				}
				else if (ofUser.type == "������") {
					while (buff != "���������") {
						getline(db, buff);
					}
				}
				while ((buff != ofUser.producer) && (buff != "������Ѩ�") && (buff != "����������")) { //������� �������� ��� �������� � ����� ������
					getline(db, buff);
				}
				if (buff == ofUser.producer) { //������� ������
					buffrate++; //���������� �������� �� 1
				}
				else { //�� ������
					//������� �� ����������
				}
				if (ofUser.type == "�����") {
					while (buff != "������Ѩ�") {
						getline(db, buff);
					}
				}
				else if (ofUser.type == "������") {
					while (buff != "����������") {
						getline(db, buff);
					}
				}
			}
			if (!ofUser.actor.empty()) { //���� ���� �����
				countpar += ofUser.actor.size(); //���������� ���������� �������� ����������
				while (buff != "��Ҩ�") { //����� ������� ��Ҩ�
					getline(db, buff);
				}
				while (buff != "���Ҩ�") { //�� ����� �������
					getline(db, buff);
					for (int i = 0; i < ofUser.actor.size(); i++) { //���� ���������� � ��������������
						if (buff == ofUser.actor[i]) { //���������� �������
							buffrate++; //������� ����������
						}
						else { //���������� �� �������
							//������� �� ����������
						}
					}
				}
			}
			if (ofUser.year != "nope") { //���� ��� �����
				countpar++;
				while (buff != "���") { //����� ������� ���
					getline(db, buff);
				}
				while ((buff != ofUser.year) && (buff != "����")) { //������� ��� ��� ������� �� ����� �������
					getline(db, buff);
				}
				if (buff == ofUser.year) { //������ ���
					buffrate++; //������� ���������� �� 1
				}
				else { //��� �� ������
					//������� �� ����������
				}
				while (buff != "����") {
					getline(db, buff);
				} //����������� � ����� �������
			}
			if (!ofUser.theme.empty()) {
				countpar += ofUser.theme.size(); //���������� ���������� �������� ����������
				while (buff != "��������") { //���� ������ �������
					getline(db, buff);
				}
				while (buff != "���������") { //���� �� ����� �������
					getline(db, buff); //��������� ��������� ��������
					for (int i = 0; i < ofUser.theme.size(); i++) { //����� ���������� � �������������� ���������
						if (buff == ofUser.theme[i]) { //���������� �������
							buffrate++; //������� ����������
						}
						else { //���������� �� �������
							//������� �� ����������
						}
					}
				}
			}
			if (!ofUser.feature.empty()) { //���� "��������" ������
				countpar += ofUser.feature.size(); //���������� ���������� �������� ����������
				while (buff != "��������") { //����� ������� ��������
					getline(db, buff);
				}
				while (buff != "���������") { //���� �� ����� �������
					getline(db, buff); //��������� �������� "��������"
					for (int i = 0; i < ofUser.feature.size(); i++) { //���� ���������� � ��������������
						if (buff == ofUser.feature[i]) { //���������� �������
							buffrate++; //������� ����������
						}
						else { //���������� �� �������
							//������� �� ����������
						}
					}
				}
			}
			while (buff != "������") { //����� ����� �������������� ������
				getline(db, buff);
			}
			buffrate = buffrate / countpar; //������� �������������� ��������
			if (buffrate >= 0.7) { //���� ������������� ������� ������ 70%
				movies.push_back(buffmovie);   //���������� ������ � ����� ������������
				movierate.push_back(buffrate); //� ���������� ��� �������� 
			}
			getline(db, buff); //����������� ������ ������, ����������� ������, ��� ������ "�����", ������������ ����� ������ �������
		}
		if (db.is_open()) { //�������� ���� ������
			db.close();
		}
	}

	void sort() { //���������� �� �������� (����������� ����)
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