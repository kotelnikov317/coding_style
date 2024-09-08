/*!
    @file mycomplex.h
    @brief ������������ ���� ������ Complex
*/

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/*!
    @brief ����� ������������ �����
*/
class Complex{
        /*!
            @brief �������������� ������������
        */
        double Re;
        /*!
            @brief ������ ������������
        */
        double Im;
	public:
	    /*!
            @brief ���������� ������ ������������ �����
        */
        double abs();

	    /*!
            @brief ����������� ������ Complex
            @param aRe �������������� �����
            @param aIm ������ �����
	    */
        Complex(double aRe = 0, double aIm = 0);

        /*!
            @brief ����������� ����������� ������ Complex
            @param ����������� �����
        */
        Complex(const Complex&);

        /*!
            @brief ���������� ������
        */
        ~Complex();

        /*!
            @brief ���� ����������� �����
            @param aRe �������������� �����
            @param aIm ������ �����
        */
        void Set(double aRe, double aIm=0);

        /*!
            @brief ���������� ������ ������������ �����
        */
        operator double();

        /*!
            @brief �������� ����� ������������ ����� � �����
            @param ������� �����
            @param ����������� ����� ��� �����
        */
        friend istream &operator>>(istream&, Complex&);

        /*!
            @brief �������� ������ ������������ ����� �� ������
            @param �������� �����
            @param ����������� ����� ��� ������
        */
        friend ostream &operator<<(ostream&, Complex&);

        /*!
            @brief �������� ��������
            @param �������������� �����
            @param ����������� �����
        */
        friend Complex operator+(const double&, const Complex&);

        /*!
            @brief �������� ���������
            @param �������������� �����
            @param ����������� �����
        */
        friend Complex operator-(const double&, const Complex&);

        /*!
            @brief �������� ���������
            @param �������������� �����
            @param ����������� �����
        */
        friend Complex operator*(const double&, const Complex&);

        /*!
            @brief �������� ��������
            @param �������������� �����
        */
        Complex operator+(const double&);

        /*!
            @brief �������� ���������
            @param �������������� �����
        */
        Complex operator-(const double&);

        /*!
            @brief �������� ���������
            @param �������������� �����
        */
        Complex operator*(const double&);

        /*!
            @brief �������� �������
            @param �������������� �����
        */
        Complex operator/(const double&);

        /*!
            @brief �������� ��������
            @param ����������� �����
        */
        Complex operator+(const Complex&);

        /*!
            @brief �������� ���������
            @param ����������� �����
        */
        Complex operator-(const Complex&);

        /*!
            @brief �������� ���������
            @param ����������� �����
        */
        Complex operator*(const Complex&);

        /*!
            @brief �������� ����������
            @param ����������� �����
        */
        Complex &operator=(const Complex&);

        /*!
            @brief �������� ��������
            @param ����������� �����
        */
        Complex &operator+=(const Complex&);

        /*!
            @brief �������� ���������
            @param ����������� �����
        */
        Complex &operator-=(const Complex&);

        /*!
            @brief �������� ���������
            @param ����������� �����
        */
        Complex &operator*=(const Complex&);

        /*!
            @brief �������� ����������
            @param �������������� �����
        */
        Complex &operator=(const double&);

        /*!
            @brief �������� ��������
            @param �������������� �����
        */
        Complex &operator+=(const double&);

        /*!
            @brief �������� ���������
            @param �������������� �����
        */
        Complex &operator-=(const double&);

        /*!
            @brief �������� ���������
            @param �������������� �����
        */
        Complex &operator*=(const double&);

        /*!
            @brief �������� �������
            @param �������������� �����
        */
        Complex &operator/=(const double&);
};
#endif
