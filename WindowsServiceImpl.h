#pragma once
#include "servicebase.h"
#pragma once
#include "ServiceBase.h"
class CWindowsServiceImpl : public CServiceBase
{
public:
	CWindowsServiceImpl(PWSTR pszServiceName, 
        BOOL fCanStop = TRUE, 
        BOOL fCanShutdown = TRUE, 
        BOOL fCanPauseContinue = FALSE);
	~CWindowsServiceImpl(void);

protected:
	virtual void OnStart(DWORD dwArgc, PWSTR *pszArgv);
	virtual void OnStop();

    void ServiceWorkerThread(void);
private:
    BOOL m_fStopping;
    HANDLE m_hStoppedEvent;
};

