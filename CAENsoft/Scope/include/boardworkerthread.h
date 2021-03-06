/////////////////////////////////////////////////////////////////////////////
// Name:        boardworkerthread.h
// Purpose:     
// Author:      NDA
// Modified by: 
// Created:     12/07/05 14:41:59
// RCS-ID:      
// Copyright:   CAEN S.p.A. All rights reserved
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 11/24/05 17:41:59

#ifndef _BOARDWORKERTHREAD_H_
#define _BOARDWORKERTHREAD_H_

#if defined(__GNUG__) && !defined(__APPLE__)
#pragma interface "boardworkerthread.h"
#endif

/*!
 * Includes
 */
#include "wx/datetime.h"
#include "wx/thread.h"

class GenericBoard;

class BoardWorkerThread :public wxThread
{
public:
    BoardWorkerThread ( GenericBoard* parent);
    ~BoardWorkerThread (void);
    ExitCode Entry( void);
protected:
    GenericBoard* m_parent;
    wxDateTime m_next_sw_trigger;
};


#endif


