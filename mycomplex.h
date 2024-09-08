/*!
    @file mycomplex.h
    @brief Заголовочный файл класса Complex
*/

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/*!
    @brief Класс комплексного числа
*/
class Complex{
        /*!
            @brief Действительная составляющая
        */
        double Re;
        /*!
            @brief Мнимая составляющая
        */
        double Im;
	public:
	    /*!
            @brief Возвращает модуль комплексного числа
        */
        double abs();

	    /*!
            @brief Конструктор класса Complex
            @param aRe Действительная часть
            @param aIm Мнимая часть
	    */
        Complex(double aRe = 0, double aIm = 0);

        /*!
            @brief Конструктор копирования класса Complex
            @param Комплексное число
        */
        Complex(const Complex&);

        /*!
            @brief Деструктор класса
        */
        ~Complex();

        /*!
            @brief Ввод комплексого числа
            @param aRe Действительная часть
            @param aIm Мнимая часть
        */
        void Set(double aRe, double aIm=0);

        /*!
            @brief Возвращает модуль комплексного числа
        */
        operator double();

        /*!
            @brief Оператор ввода комплексного чилса в поток
            @param Входной поток
            @param Комплексное число для ввода
        */
        friend istream &operator>>(istream&, Complex&);

        /*!
            @brief Оператор вывода комплексного чилса из потока
            @param Выходной поток
            @param Комплексное число для вывода
        */
        friend ostream &operator<<(ostream&, Complex&);

        /*!
            @brief Оператор сложения
            @param Действительная часть
            @param Комплексное число
        */
        friend Complex operator+(const double&, const Complex&);

        /*!
            @brief Оператор вычитания
            @param Действительная часть
            @param Комплексное число
        */
        friend Complex operator-(const double&, const Complex&);

        /*!
            @brief Оператор умножения
            @param Действительная часть
            @param Комплексное число
        */
        friend Complex operator*(const double&, const Complex&);

        /*!
            @brief Оператор сложения
            @param Действительная часть
        */
        Complex operator+(const double&);

        /*!
            @brief Оператор вычитания
            @param Действительная часть
        */
        Complex operator-(const double&);

        /*!
            @brief Оператор умножения
            @param Действительная часть
        */
        Complex operator*(const double&);

        /*!
            @brief Оператор деления
            @param Действительная часть
        */
        Complex operator/(const double&);

        /*!
            @brief Оператор сложения
            @param Комплексное число
        */
        Complex operator+(const Complex&);

        /*!
            @brief Оператор вычитания
            @param Комплексное число
        */
        Complex operator-(const Complex&);

        /*!
            @brief Оператор умножения
            @param Комплексное число
        */
        Complex operator*(const Complex&);

        /*!
            @brief Оператор присвоения
            @param Комплексное число
        */
        Complex &operator=(const Complex&);

        /*!
            @brief Оператор сложения
            @param Комплексное число
        */
        Complex &operator+=(const Complex&);

        /*!
            @brief Оператор вычитания
            @param Комплексное число
        */
        Complex &operator-=(const Complex&);

        /*!
            @brief Оператор умножения
            @param Комплексное число
        */
        Complex &operator*=(const Complex&);

        /*!
            @brief Оператор присвоения
            @param Действительная часть
        */
        Complex &operator=(const double&);

        /*!
            @brief Оператор сложения
            @param Действительная часть
        */
        Complex &operator+=(const double&);

        /*!
            @brief Оператор вычитания
            @param Действительная часть
        */
        Complex &operator-=(const double&);

        /*!
            @brief Оператор умножения
            @param Действительная часть
        */
        Complex &operator*=(const double&);

        /*!
            @brief Оператор деления
            @param Действительная часть
        */
        Complex &operator/=(const double&);
};
#endif
