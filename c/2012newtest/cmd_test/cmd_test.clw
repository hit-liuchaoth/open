; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCmd_testDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "cmd_test.h"

ClassCount=3
Class1=CCmd_testApp
Class2=CCmd_testDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_CMD_TEST_DIALOG

[CLS:CCmd_testApp]
Type=0
HeaderFile=cmd_test.h
ImplementationFile=cmd_test.cpp
Filter=N

[CLS:CCmd_testDlg]
Type=0
HeaderFile=cmd_testDlg.h
ImplementationFile=cmd_testDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CCmd_testDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=cmd_testDlg.h
ImplementationFile=cmd_testDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_CMD_TEST_DIALOG]
Type=1
Class=CCmd_testDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTON1,button,1342242816
Control4=IDC_EDIT1,edit,1352728772

