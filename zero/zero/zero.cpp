#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Publication {
private:
    string name;
    int year;
public:
    string getName() {
        return name;
    };
    void setName(string a) {
        if (a == "" or a == " ") {
            cout << "Error parametr";
        }
        else {
            name = a;
        }
    }
    int getYear() {
        cout << year << endl;
        return 0;
    }
    void setYear(int a) {
        if (a < 0 and a > 2023) {
            cout << "Error parametr";
        }
        else {
            year = a;
        }
    }
};


class book : Publication {
private:
    string ISBN;
    string Izd;
    string Author;
    int NumberPub;
public:
    void setISBN(string a) {
        if (a == "" or a == " ") {
            cout << "Error parametr";
        }
        else {
            ISBN = a;
        }
    }
    string getISBN() {
        return ISBN;
    };
    string getIzd() {
        return Izd;
    };
    void setIzd(string a) {
        Izd = a;
    }
    string getAuthor() {
        return Author;
    };
    void setAuthor(string a) {
        if (a == "" or a == " ") {
            cout << "Invalid param";
        }
        else {
            Author = a;
        }
    }
    int getPubCount() {
        return NumberPub;
    };
    void setPubCount(int a) {
        if (a < 0 or a > 100) {
            cout << "Invalid param";
        }
        else {
            NumberPub = a;
        }
    }
};


class Magazine : Publication {
private:
    string ISBN;
    string Izd;
    int Number;
    int Tom;
    int PubCount;
public:
    void setIzd(string a) {
        Izd = a;
    }
    string getIzd() {
        return Izd;
    };
    int getNumber;

    int setNumber;

    int getScoups;
    int setScoups;
    int getWebOfScience;
    int setWebOfScience;
    int getRINC;
    int setRINC;
    string getISBN() {
        return ISBN;
    };
};


class Article : Magazine {
private:
    string Author;
    int Pstart;
    int Pend;
public:
    void setAuthor(string a) {
        if (a == "" or a == " ") {
            cout << "Invalid param";
        }
        else {
            Author = a;
        }
    }
    string getAuthor() {
        return Author;
    };
    int setPageStart;
    int getPageStart;
    int setPageEnd;
    int getPageEnd;
    int setStatus;
    int getStatus;
};
