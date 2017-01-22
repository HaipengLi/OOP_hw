#include "Fraction.h"
using namespace std;
//	int Numerator;
//	cint Denominator;
const Fraction Fraction::operator+(const Fraction& n){
	return Fraction(Numerator*n.Denominator+Denominator*n.Numerator,Denominator*n.Denominator);
}
const Fraction Fraction::operator-(const Fraction& n){
	return Fraction(Numerator*n.Denominator-Denominator*n.Numerator,Denominator*n.Denominator);	
}
const Fraction Fraction::operator*(const Fraction& n){
	return Fraction(Numerator*n.Numerator,Denominator*n.Denominator);
}
const Fraction Fraction::operator/(const Fraction& n){
	return Fraction(Numerator*n.Denominator,Denominator*n.Numerator);
}
const bool Fraction::operator<(const Fraction& n){
	return ((double)Numerator/Denominator<(double)n.Numerator/n.Denominator);
}
const bool Fraction::operator<=(const Fraction& n){
	return ((double)Numerator/Denominator<=(double)n.Numerator/(double)n.Denominator);
}
const bool Fraction::operator==(const Fraction& n){
	return ((double)Numerator/Denominator==(double)n.Numerator/n.Denominator);
}
const bool Fraction::operator!=(const Fraction& n){
	return !(*this==n);
}
const bool Fraction::operator>=(const Fraction& n){
	return !(*this<n);
}
const bool Fraction::operator>(const Fraction& n){
	return !(*this<=n);
}

const std::string  Fraction::toString(){
	std::string Result;
	Result.append(to_string(Numerator));
	Result.append("/");
	Result.append(to_string(Denominator));
	return Result;
}
Fraction::Fraction(const Fraction& n){
	Numerator=n.Numerator;
	Denominator=n.Denominator;
}
