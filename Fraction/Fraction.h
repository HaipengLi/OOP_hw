#ifndef _FRACTION_H_
#define _FRACTION_H_ 

#include <string>
#include <iostream>
#include <istream>
#include <ostream>
class Fraction
{
public:
	Fraction(int Numerator =1,int Denominator=1):Numerator(Numerator),Denominator(Denominator){}//*******"=1"is essential since "no matching function" will happen without it
	Fraction(const Fraction& n);//copy constructor
	const Fraction operator+(const Fraction& n);
	const Fraction operator-(const Fraction& n);
	const Fraction operator*(const Fraction& n);
	const Fraction operator/(const Fraction& n);
	const bool operator<(const Fraction& n);
	const bool operator<=(const Fraction& n);
	const bool operator==(const Fraction& n);
	const bool operator!=(const Fraction& n);
	const bool operator>=(const Fraction& n);
	const bool operator>(const Fraction& n);
	const std::string toString();
	const Fraction A(){}
	operator double() const{return ((double)Numerator/Denominator);}	//type cast to double*******
	friend std::ostream& operator<<(std::ostream &os, const Fraction& n){//"friend" is essential
		return os<<n.Numerator<<"/"<<n.Denominator;
	}
	friend std::istream& operator>>(std::istream &is, Fraction& n){//****no "const" before "Fraction&n"*****"friend" is enssential
			is>>n.Numerator>>n.Denominator;
		return is;
	}
	// std::istream& operator>>(std::istream& is){//exactly one argument (Fraction &n should be omitted in inclass function)
	// 		is>>Numerator>>Denominator;
	// 		return is;
	// 	}
	// std::ostream& operator<<(std::ostream& os){
	// 		os<<Numerator<<"/"<<Denominator;
	// 		return os;
	// 	}
	int Numerator;
	int Denominator;
	
};
#endif