#ifndef _VECTOR_H_
#define _VECTOR_H_ 
#include "IndexOutofBounds.h"
template <class T>
class Vector {
public:
	Vector(){
		m_pElements=0;
		m_nSize=0;
	}	//cannot be put into Vector.cpp due to the "undefined reference to" compiling error.
	Vector(int size){
		m_pElements=new T[size];
		m_nSize=size;
	}	// create a vector of size elements
	Vector(const Vector& r){
		m_nSize=r.size();
		m_pElements=new T[m_nSize];
		for (int i = 0; i < m_nSize; ++i){
			m_pElements[i]=r[i];
		}
	}	// copy ctor
	virtual ~Vector(){
		delete[] m_pElements;
	}//cannot be put into Vector.cpp due to the "undefined reference to" compiling error.
	T& operator[](int index) const{
		if(index<0 || index>=m_nSize){
			throw IndexOutofBounds(index);
		}
		return m_pElements[index];
	}
		// return the specified element, throws exception when index <0 or >=m_nSize
	int size() const {
		return m_nSize;
	}		// return the size of the vector
	int inflate(int addSize){
		T* new_m_pElements;

		new_m_pElements=new T[m_nSize+addSize];
		
		for (int i = 0; i < m_nSize; ++i){
			new_m_pElements[i]=m_pElements[i];
		}
		
		delete[] m_pElements;
		
		m_pElements=new_m_pElements;
		m_nSize+=addSize;

		return m_nSize;
	}	// expand the storage to m_nSize+addSize, return the new size
private:
	T *m_pElements;
	int m_nSize;
};
#endif
//See http://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor 
//and http://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file?noredirect=1