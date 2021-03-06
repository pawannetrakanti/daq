/////////////////////////////////////////////////////////////////////////////
// Name:        drawing_left_canvas.h
// Purpose:     
// Author:      NDA
// Modified by: 
// Created:     10/10/2006 15:55:30
// RCS-ID:      
// Copyright:   CAEN S.p.A All rights reserved.
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 10/10/2006 15:55:30

#ifndef _DRAWING_LEFT_CANVAS_H_
#define _DRAWING_LEFT_CANVAS_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "drawing_left_canvas.h"
#endif

/*!
 * Includes
 */

////@begin includes
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations
class DrawingPanel;
/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_DRAWINGLEFTCANVAS 10038
#define SYMBOL_DRAWINGLEFTCANVAS_STYLE 0
#define SYMBOL_DRAWINGLEFTCANVAS_TITLE _("DrawingLeftCanvas")
#define SYMBOL_DRAWINGLEFTCANVAS_IDNAME ID_DRAWINGLEFTCANVAS
#define SYMBOL_DRAWINGLEFTCANVAS_SIZE wxSize(400, 300)
#define SYMBOL_DRAWINGLEFTCANVAS_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * DrawingLeftCanvas class declaration
 */

class DrawingLeftCanvas: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( DrawingLeftCanvas )
        DECLARE_EVENT_TABLE()

        public:
    /// Constructors
    DrawingLeftCanvas( );
    DrawingLeftCanvas( int scope_index, wxWindow* parent, wxWindowID id = SYMBOL_DRAWINGLEFTCANVAS_IDNAME, const wxPoint& pos = SYMBOL_DRAWINGLEFTCANVAS_POSITION, const wxSize& size = SYMBOL_DRAWINGLEFTCANVAS_SIZE, long style = SYMBOL_DRAWINGLEFTCANVAS_STYLE );
    ~DrawingLeftCanvas();
    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_DRAWINGLEFTCANVAS_IDNAME, const wxPoint& pos = SYMBOL_DRAWINGLEFTCANVAS_POSITION, const wxSize& size = SYMBOL_DRAWINGLEFTCANVAS_SIZE, long style = SYMBOL_DRAWINGLEFTCANVAS_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin DrawingLeftCanvas event handler declarations

    /// wxEVT_SIZE event handler for ID_DRAWINGLEFTCANVAS
    void OnSize( wxSizeEvent& event );

    /// wxEVT_PAINT event handler for ID_DRAWINGLEFTCANVAS
    void OnPaint( wxPaintEvent& event );

    /// wxEVT_ERASE_BACKGROUND event handler for ID_DRAWINGLEFTCANVAS
    void OnEraseBackground( wxEraseEvent& event );

////@end DrawingLeftCanvas event handler declarations

////@begin DrawingLeftCanvas member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end DrawingLeftCanvas member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin DrawingLeftCanvas member variables
////@end DrawingLeftCanvas member variables

public:
    void RefreshBackBitmap( void);
protected:
    void DrawBackground( wxDC &dc);
    void DrawPosition( wxDC &dc);

    wxBitmap *m_p_back_bitmap;
    DrawingPanel *m_parent;
    int m_pix_X, m_pix_Y;
    bool m_first_time;
    int m_scope_index;
};

#endif
// _DRAWING_LEFT_CANVAS_H_
