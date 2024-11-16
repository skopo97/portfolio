//
// Created by Sami on 11/16/24.
//

#ifndef DATE_H
#define DATE_H



class date {
private:
    int m_year{};
    int m_month{};
    int m_day{};
public:
    //constructor declaration
    date(int year, int month, int day);

    //print declaration
    void print() const;
};




#endif //DATE_H
