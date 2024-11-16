//
// Created by Sami on 11/16/24.
//

#include "date.h"
#include <iostream>

//Constructor definition
date::date(int year, int month, int day) : m_year{year}, m_month{month}, m_day{day}{};

void date::print() const {
    std::cout << "Date(" << m_year << ", " << m_month << ", " << m_day << ")\n";
}
