# Microsoft Developer Studio Project File - Name="pn" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=pn - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "pn.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "pn.mak" CFG="pn - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "pn - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "pn - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "pn - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "bin"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "DockingFramework" /I "TabbingFramework" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "STRICT" /Yu"stdafx.h" /FD /Zm200 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib /nologo /subsystem:windows /machine:I386 /libpath:"lib"

!ELSEIF  "$(CFG)" == "pn - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "bin"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "TabbingFramework" /I "DockingFramework" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "STRICT" /FR /Yu"stdafx.h" /FD /GZ /Zm200 /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept /libpath:"lib"

!ENDIF 

# Begin Target

# Name "pn - Win32 Release"
# Name "pn - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\childfrm.cpp
# End Source File
# Begin Source File

SOURCE=.\exporters.cpp
# End Source File
# Begin Source File

SOURCE=.\Files.cpp
# End Source File
# Begin Source File

SOURCE=.\findinfiles.cpp
# End Source File
# Begin Source File

SOURCE=.\findinfilesview.cpp
# End Source File
# Begin Source File

SOURCE=.\jumpto.cpp
# End Source File
# Begin Source File

SOURCE=.\JumpToDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\MagicFolderWiz.cpp
# End Source File
# Begin Source File

SOURCE=.\mainfrm.cpp
# End Source File
# Begin Source File

SOURCE=.\optionscontrols.cpp
# End Source File
# Begin Source File

SOURCE=.\OptionsDialogs.cpp
# End Source File
# Begin Source File

SOURCE=.\OptionsIni.cpp
# End Source File
# Begin Source File

SOURCE=.\OptionsManager.cpp
# End Source File
# Begin Source File

SOURCE=.\OptionsPages.cpp
# End Source File
# Begin Source File

SOURCE=.\OptionsRegistry.cpp
# End Source File
# Begin Source File

SOURCE=.\outputscintilla.cpp
# End Source File
# Begin Source File

SOURCE=.\outputview.cpp
# End Source File
# Begin Source File

SOURCE=.\pn.cpp
# End Source File
# Begin Source File

SOURCE=.\pn.rc
# End Source File
# Begin Source File

SOURCE=.\pndialogs.cpp
# End Source File
# Begin Source File

SOURCE=.\pnutils.cpp
# End Source File
# Begin Source File

SOURCE=.\project.cpp
# End Source File
# Begin Source File

SOURCE=.\projectmeta.cpp
# End Source File
# Begin Source File

SOURCE=.\projectprops.cpp
# End Source File
# Begin Source File

SOURCE=.\projectview.cpp
# End Source File
# Begin Source File

SOURCE=.\projpropsview.cpp
# End Source File
# Begin Source File

SOURCE=.\scaccessor.cpp
# End Source File
# Begin Source File

SOURCE=.\SchemeCompiler.cpp
# End Source File
# Begin Source File

SOURCE=.\SchemeConfig.cpp
# End Source File
# Begin Source File

SOURCE=.\Schemes.cpp
# End Source File
# Begin Source File

SOURCE=.\scintillaif.cpp
# End Source File
# Begin Source File

SOURCE=.\ScintillaImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\smartstart.cpp
# End Source File
# Begin Source File

SOURCE=.\ssmenus.cpp
# End Source File
# Begin Source File

SOURCE=.\ssreg.cpp
# End Source File
# Begin Source File

SOURCE=.\stdafx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StyleTabPages.cpp
# End Source File
# Begin Source File

SOURCE=.\textclipsview.cpp
# End Source File
# Begin Source File

SOURCE=.\textview.cpp
# End Source File
# Begin Source File

SOURCE=.\tools.cpp
# End Source File
# Begin Source File

SOURCE=.\xmlparser.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\aboutdlg.h
# End Source File
# Begin Source File

SOURCE=.\callback.h
# End Source File
# Begin Source File

SOURCE=.\ChildFrm.h
# End Source File
# Begin Source File

SOURCE=.\CustomAutoComplete.h
# End Source File
# Begin Source File

SOURCE=.\finddlg.h
# End Source File
# Begin Source File

SOURCE=.\fromhandle.h
# End Source File
# Begin Source File

SOURCE=.\mainfrm.h
# End Source File
# Begin Source File

SOURCE=.\OptionsPages.h
# End Source File
# Begin Source File

SOURCE=.\pn.h
# End Source File
# Begin Source File

SOURCE=.\pndialogs.h
# End Source File
# Begin Source File

SOURCE=.\pntabs.h
# End Source File
# Begin Source File

SOURCE=.\pntypes.h
# End Source File
# Begin Source File

SOURCE=.\pnutils.h
# End Source File
# Begin Source File

SOURCE=.\resource.h
# End Source File
# Begin Source File

SOURCE=.\SchemeCompiler.h
# End Source File
# Begin Source File

SOURCE=.\Schemes.h
# End Source File
# Begin Source File

SOURCE=.\Scintilla.h
# End Source File
# Begin Source File

SOURCE=.\scintillaif.h
# End Source File
# Begin Source File

SOURCE=.\scintillaimpl.h
# End Source File
# Begin Source File

SOURCE=.\ScintillaWTL.h
# End Source File
# Begin Source File

SOURCE=.\smartstart.h
# End Source File
# Begin Source File

SOURCE=.\ssmenus.h
# End Source File
# Begin Source File

SOURCE=.\ssreg.h
# End Source File
# Begin Source File

SOURCE=.\stdafx.h
# End Source File
# Begin Source File

SOURCE=.\textview.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\editor.bmp
# End Source File
# Begin Source File

SOURCE=.\res\pn.ico
# End Source File
# Begin Source File

SOURCE=.\res\pndoc.ico
# End Source File
# Begin Source File

SOURCE=.\res\toolbar.bmp
# End Source File
# Begin Source File

SOURCE=.\res\toolbar1.bmp
# End Source File
# End Group
# Begin Group "include"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\include\ColorButton.cpp
# End Source File
# Begin Source File

SOURCE=.\include\pcreplus.cpp
# End Source File
# Begin Source File

SOURCE=.\include\Utf8_16.cpp
# End Source File
# End Group
# End Target
# End Project
