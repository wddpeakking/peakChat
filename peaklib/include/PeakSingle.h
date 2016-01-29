#ifndef _PEAK_SINGLE_H_
#define _PEAK_SINGLE_H_

template<class T>
class CSingleInstance
{
public:
	CSingleInstance(){};
	virtual ~CSingleInstance(){};
	static T* GetInstace()
	{
		if (pInstance == NULL)
		{
			pInstance = new T;
		}
		return pInstance;
	}
private:
	static T* pInstance;
};

template<class T> 
T* CSingleInstance<T>::pInstance = NULL;
#endif