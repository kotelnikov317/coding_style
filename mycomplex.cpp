/*!
    @file mycomplex.cpp
    @brief Файл с описанием методов класса Complex
*/
//Файл изменен
#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

/*!
    @brief Конструктор класса
    @param aRe Действительная составляющая
    @param aIm Мнимая составляющая
*/
Complex::Complex(double aRe, double aIm){
    Re = aRe;
    Im = aIm;
}

/*!
    @brief Конструктор копирования класса Complex
    @param aRval Комплексное число
*/
Complex::Complex(const Complex &aRval){
    Re = aRval.Re;
    Im = aRval.Im;
}

/*!
    @brief Деструктор класса
*/
Complex::~Complex(){
    Re = 0.0;
    Im = 0.0;
}

/*!
    @brief Ввод комплексого числа
    @param aRe Действительная часть
    @param aIm Мнимая часть
*/
void Complex::Set(double aRe,double aIm){
    Re = aRe;
    Im = aIm;
}

/*!
    @brief Возвращает модуль комплексного числа
    @return Модуль комплексного числа
*/
Complex::operator double(){
    return abs();
}

/*!
    @brief Возвращает модуль комплексного числа
*/
double Complex::abs(){
    return sqrt(Re * Re + Im * Im);
}

/*!
    @brief Оператор сложения
    @param aRval Комплесное число
    @result Результат сложения
*/
Complex Complex::operator+(const Complex &aRval){
    Complex Result;
    Result.Re = Re + aRval.Re;
    Result.Im = Im + aRval.Im;
    return Result;
}

/*!
    @brief Оператор вычитания
    @param aRval Комплесное число
    @result Результат вычитания
*/
Complex Complex::operator-(const Complex &aRval){
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}

/*!
    @brief Оператор сложения действительной части
    @param aval Действительная часть
    @result Результат сложения
*/
Complex Complex::operator+(const double &aval){
    Complex result;
    result.Re = Re + aval;
    result.Im = Im;
    return result;
}

/*!
    @brief Оператор вычитания
    @param aRval Действительная часть
    @result Результат вычитания
*/
Complex Complex::operator-(const double &aRval){
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}

/*!
    @brief Оператор умножения
    @param aRval Комплексное число
    @result Результат умножения
*/
Complex Complex::operator*(const Complex &aRval ){
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;
}

/*!
    @brief Оператор умножения
    @param aRval Действительная часть
    @result Результат умножения
*/
Complex Complex::operator*(const double &aRval){
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}

/*!
    @brief Оператор деления
    @param aRval Действительная часть
    @result Результат деления
*/
Complex Complex::operator/(const double &aRval){
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;
}

/*!
    @brief Оператор сложения
    @param arval Комплексное число
    @result Результат сложения
*/
Complex &Complex::operator+=(const Complex &arval){
    Re += arval.Re;
    Im += arval.Im;
    return *this;
}

/*!
    @brief Оператор вычитания
    @param aRval Комплексное число
    @result Результат вычитания
*/
Complex &Complex::operator-=(const Complex &aRval){
    Re -= aRval.Re;
    Im -= aRval.Im;
    return *this;
}

/*!
    @brief Оператор умножения
    @param aRval Комплексное число
    @result Результат умножения
*/
Complex &Complex::operator*=(const Complex &aRval){
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return *this;
}

/*!
    @brief Оператор сложения
    @param aRval Действительная часть
    @result Результат сложения
*/
Complex &Complex::operator+=(const double &aRval){
    Re += aRval;
    return *this;
}

/*!
    @brief Оператор вычитания
    @param aRval Действительная часть
    @result Результат вычитания
*/
Complex &Complex::operator-=(const double &aRval){
    Re -= aRval;
    return *this;
}

/*!
    @brief Оператор умножения
    @param aRval Действительная часть
    @result Результат умножения
*/
Complex &Complex::operator*=(const  double  &aRval){
    Re *= aRval;
    Im *= aRval;
    return *this;
}

/*!
    @brief Оператор деления
    @param aRval Действительная часть
    @result Результат деления
*/
Complex &Complex::operator/=(const double &aRval){
    Re /= aRval;
    Im /= aRval;
    return *this;
}

/*!
    @brief Оператор присвоения
    @param aRval Комплексное число
    @result Результат присвоения
*/
Complex &Complex::operator=(const Complex& aRval){
    Re = aRval.Re;
    Im = aRval.Im;
    return *this;
}

/*!
    @brief Оператор присвоения
    @param aRval Действительная часть
    @result Результат присвоения
*/
Complex &Complex::operator=(const double& aRval){
    Re = aRval;
    Im = 0.0;
    return *this;
}

/*!
    @brief Оператор ввода комплексного чилса в поток
    @param stream Входной поток
    @param a Комплексное число для ввода
    @result Входной поток после операции ввода
*/
istream &operator>>(istream &stream, Complex&a){
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}

/*!
    @brief Оператор вывода комплексного чилса из потока
    @param stream Выходной поток
    @param a Комплексное число для вывода
    @result Выходной поток после операции вывода
*/
ostream &operator<<(ostream &stream, Complex&a){
    stream << a.Re;
    if(!(a.Im < 0))
        stream << '+';
    stream << a.Im << 'i';
    return stream;
}

/*!
    @brief Оператор сложения
    @param aLval Действительная часть
    @param aRval Комплексное число
    @result Результат сложения
*/
Complex operator+(const double &aLval,const Complex &aRval){
    Complex Result;
    Result.Re = aLval + aRval.Re;
    Result.Im = aRval.Im;
    return Result;
}

/*!
    @brief Оператор вычитания
    @param aLval Действительная часть
    @param aRval Комплексное число
    @result Результат вычитания
*/
Complex operator-(const double &aLval,const Complex&aRval){
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im =- aRval.Im;
    return Result;
}

/*!
    @brief Оператор умножения
    @param aLval Действительная часть
    @param aRval Комплексное число
    @result Результат умножения
*/
Complex operator*(const double &aLval,const Complex &a){
    Complex Result;
    Result.Re = aLval * a.Re;
    Result.Im = aLval * a.Im;
    return Result;
}
