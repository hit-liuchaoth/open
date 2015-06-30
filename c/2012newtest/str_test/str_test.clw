; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CStr_testDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "str_test.h"

ClassCount=4
Class1=CStr_testApp
Class2=CStr_testDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_STR_TEST_DIALOG
Class4=NewDialog
Resource4=IDD_DIALOG1

[CLS:CStr_testApp]
Type=0
HeaderFile=str_test.h
ImplementationFile=str_test.cpp
Filter=N

[CLS:CStr_testDlg]
Type=0
HeaderFile=str_testDlg.h
ImplementationFile=str_testDlg.cpp
Filter=D
LastObject=CStr_testDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=str_testDlg.h
ImplementationFile=str_testDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_STR_TEST_DIALOG]
Type=1
Class=CStr_testDlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_EDIT2,edit,1484849280
Control5=IDC_EDIT3,edit,1484849280
Control6=IDC_BUTTON1,button,1342242816
Control7=IDC_EDIT4,edit,1350631552
Control8=IDC_BUTTON2,button,1342242816
Control9=IDC_BUTTON3,button,1342242816
Control10=IDC_EDIT5,edit,1350631552

[DLG:IDD_DIALOG1]
Type=1
Class=NewDialog
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:NewDialog]
Type=0
HeaderFile=NewDialog.h
ImplementationFile=NewDialog.cpp
BaseClass=CDialog
Filter=D

