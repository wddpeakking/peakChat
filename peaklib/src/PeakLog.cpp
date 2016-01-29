#include "PeakLog.h"
#include <stdarg.h>

CPeakLog::CPeakLog()
{
	m_pFile = fopen("Log.log", "w");
	if (m_pFile)
	{
		fprintf_s(m_pFile, "peakchat = %s", ".log");
		fflush(m_pFile);
	}
}


CPeakLog::~CPeakLog()
{
}

void CPeakLog::LogTrace(const char* pFormat, ...)
{
	char szBuf[1024];
	va_list body;
	va_start(body, pFormat);
	vsprintf_s(szBuf, pFormat, body);
	va_end(body);
	fprintf_s(m_pFile, szBuf);
	fflush(m_pFile);

}
void CPeakLog::LogInfo(const char* pFormat, ...)
{
	char szBuf[1024];
	va_list body;
	va_start(body, pFormat);
	vsprintf_s(szBuf, pFormat, body);
	va_end(body);
	fprintf_s(m_pFile, szBuf);
	fflush(m_pFile);
}
void CPeakLog::LogDebug(const char* pFormat, ...)
{
	char szBuf[1024];
	va_list body;
	va_start(body, pFormat);
	vsprintf_s(szBuf, pFormat, body);
	va_end(body);
	fprintf_s(m_pFile, szBuf);
	fflush(m_pFile);
}
void CPeakLog::LogWarning(const char* pFormat, ...)
{
	char szBuf[1024];
	va_list body;
	va_start(body, pFormat);
	vsprintf_s(szBuf, pFormat, body);
	va_end(body);
	fprintf_s(m_pFile, szBuf);
	fflush(m_pFile);
}
void CPeakLog::LogError(const char* pFormat, ...)
{
	char szBuf[1024];
	va_list body;
	va_start(body, pFormat);
	vsprintf_s(szBuf, pFormat, body);
	va_end(body);
	fprintf_s(m_pFile, szBuf);
	fflush(m_pFile);
}
void CPeakLog::writeFile(const char* szbuf)
{
	fprintf_s(m_pFile, szbuf);
	fflush(m_pFile);
}