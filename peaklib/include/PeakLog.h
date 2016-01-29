#pragma once
#include "PeakSingle.h"
#include <stdio.h>

class CPeakLog :public CSingleInstance<CPeakLog>
{
public:
	CPeakLog();
	~CPeakLog();
	void LogTrace(const char* pFormat, ...);
	void LogInfo(const char* pFormat, ...);
	void LogDebug(const char* pFormat, ...);
	void LogWarning(const char* pFormat, ...);
	void LogError(const char* pFormat, ...);
private:
	int nLevel;
	FILE* m_pFile;
};

