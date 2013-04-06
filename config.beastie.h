/* User configurable stuff. */
/*
* Move this many pixels when moving or resizing with keyboard unless
* the window has hints saying otherwise.
*/
#define MOVE_STEP 32
#define MOVE_STEP_SLOW 8
/*
* Modifier key to use with mouse buttons. Default Mod1, Meta on my
* KEYBOARD.
*/
#define MOUSEMODKEY XCB_MOD_MASK_2
/*
* Use this modifier combined with other keys to control wm from
* keyboard. Default is Mod4, which on my keyboard is the Alt key but
* is usually the Windows key on more normal keyboard layouts.
*/
#define MODKEY XCB_MOD_MASK_2
/* Extra modifier for resizing. Default is Shift. */
#define SHIFTMOD XCB_MOD_MASK_SHIFT
#define CONTROLMOD XCB_MOD_MASK_CONTROL
//This new mod will be used for the fast resize
//if ALTMOD == -1 then the GROW and SHRINK will be used only with the MODKEY
//Otherwise the GROW and SHRINK will be used with the ALTMOD and MODKEY (combination)
#define ALTMOD -1
/* Offset when windows are in fullscreen or vert maxed for bars */
#define OFFSETX 0
#define OFFSETY 0
#define MAXWIDTH 0
#define MAXHEIGHT 0
/*
* Start this program when pressing MODKEY + USERKEY_TERMINAL. Needs
* to be in $PATH.
*
* Change to "xterm" if you're feeling conservative.
*
* Can be set from command line with "-t program".
*/
#define TERMINAL "urxvt"
#define MENU ""
/*
* Do we allow windows to be iconified? Set to true if you want this
* behaviour to be default. Can also be set by calling mcwm with -i.
*/
#define ALLOWICONS false
/*
* Start these programs when pressing MODKEY and mouse buttons on root window.
*/
#define MOUSE1 ""
#define MOUSE2 ""
#define MOUSE3 "my_menu.sh"
/*
* Default colour on border for focused windows. Can be set from
* command line with "-f colour".
*/
#define FOCUSCOL "#666666"
/* Ditto for unfocused. Use "-u colour". */
#define UNFOCUSCOL "#333333"
/* Ditto for fixed windows. Use "-x colour". */
#define FIXEDCOL "#526310"
/* Ditto for unkillable windows. */
#define UNKILLCOL "#5c0202"
/* Ditto for unkillable and fixed windows. */
#define FIXED_UNKIL_COL "#cc880e"
/* Ditto for default back, when the WM don't know what to put.
* example: in mplayer when you resize.
* If you put 0 than it's going to be transparent
* If you comile with the double border option, this color
* will be the outer-default color for the window without status
*/
#define EMPTY_COL "#fedd26"
/* Default width of border window, in pixels. Used unless -b width.
* I should remove all those border size because
* it's freaking useless and ugly to have many size (true story)
*
*/
/* outer border size*/
#define OUTER_BORDER 2
/* full border size
* a simple math gives you the inner border size
* Don't forget to enable the border flag when compiling
*/
#define BORDERWIDTH 8
/* Set the Fast and Slow mouse movement via keyboard
* You can set the fast movement to something big so you can
* quickly move your cursor to another monitor.
* Remember that you can move fast with the shifted conterpart of the keys.
*/
#define MOUSE_MOVE_SLOW 15
#define MOUSE_MOVE_FAST 400
/*
* Keysym codes for window operations. Look in X11/keysymdefs.h for
* actual symbols.
* Designed for Colemak.
*
*/
// Window movement
#define USERKEY_TOPLEFT XK_A
#define USERKEY_BOTLEFT XK_R
#define USERKEY_BOTRIGHT XK_S
#define USERKEY_TOPRIGHT XK_T
#define USERKEY_CENTER XK_D
#define USERKEY_RAISE XK_H
#define USERKEY_MOVE_LEFT XK_N
#define USERKEY_MOVE_DOWN XK_E
#define USERKEY_MOVE_UP XK_I
#define USERKEY_MOVE_RIGHT XK_O
// Uses altmod, relative resizing
#define USERKEY_GROW XK_W
#define USERKEY_SHRINK XK_Q
// Spawning stuff
#define USERKEY_TERMINAL XK_Return
#define USERKEY_MENU XK_VoidSymbol
// Maximizing the windows
#define USERKEY_MAX XK_VoidSymbol
#define USERKEY_MAXVERT XK_M
// Cycling between windows
#define USERKEY_CHANGE XK_K
#define USERKEY_BACKCHANGE XK_VoidSymbol
#define USERKEY_CHANGE XK_K
// Next and Previous workspaces and screens
#define USERKEY_PREVWS XK_V
#define USERKEY_NEXTWS XK_B
#define USERKEY_PREVSCREEN XK_VoidSymbol
#define USERKEY_NEXTSCREEN XK_VoidSymbol
// Deletes, Changes the window state to iconified,
// fixed or unkillable
#define USERKEY_ICONIFY XK_VoidSymbol
#define USERKEY_FIX XK_F
#define USERKEY_UNKILLABLE XK_U
#define USERKEY_DELETE XK_X
// Workspace switching
#define USERKEY_WS1 XK_1
#define USERKEY_WS2 XK_2
#define USERKEY_WS3 XK_3
#define USERKEY_WS4 XK_4
#define USERKEY_WS5 XK_5
#define USERKEY_WS6 XK_6
#define USERKEY_WS7 XK_7
#define USERKEY_WS8 XK_8
#define USERKEY_WS9 XK_9
#define USERKEY_WS10 XK_0
// Cursor movement
#define USERKEY_UP XK_Up
#define USERKEY_DOWN XK_Down
#define USERKEY_RIGHT XK_Right
#define USERKEY_LEFT XK_Left
///////////////////////////////////////////////
// Not User defined:///////////////////////////
///////////////////////////////////////////////
// mcwm_exit == controlmod + shrink
// mcwm_restart == controlmod + raise
// movestepslow == controlmod + move
// resizestep == shift + move
// resizestepslow == shift + controlmod + move
// sendtoworkspace == shift + movetoworkspace
// maxverthor == shift + topright//topleft
// maxhor == shift + maxvert
/////////////////////////////////////////////// 