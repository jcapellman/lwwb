#pragma once

// FLTK Headers
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Help_View.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_Button.H>

// Curl Headers
#include "curl/curl.h"

// Standard C++ Headers
#include <string>
#include <stack>
#include <sstream>

// Libraries
#pragma comment(lib, "fltk.lib")
#pragma comment(lib, "fltkzlib.lib")
#pragma comment(lib, "fltkimages.lib")
#pragma comment(lib, "fltkpng.lib")
#pragma comment(lib, "libcurl_a.lib")

using namespace std;

static string APP_NAME = "jcWB";
static string APP_VERSION = "0.1.0.090917";

#define STATUS_BAR_MSG_DOCUMENT_DONE "Document Done"
