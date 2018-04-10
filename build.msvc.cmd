@echo off
if not exist "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\" goto Error_MSVC
rem ---
if "%1" == "win32" goto Win32
if "%1" == "win64" goto Win64
if "%1" == "clean" goto Clean
goto Error_Unknown_Platform

:Win64
if "%XYO_PLATFORM%" == "win64-msvc" goto Build
set XYO_PLATFORM=win64-msvc
pushd "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build"
call vcvarsall.bat x64
popd
goto Build

:Win32
if "%XYO_PLATFORM%" == "win32-msvc" goto Build
set XYO_PLATFORM=win32-msvc
pushd "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build"
call vcvarsall.bat x86
popd
goto Build

:Clean
rmdir /Q /S bin
rmdir /Q /S lib
rmdir /Q /S build
echo ^> clean done ^<
goto :eof

:Build
if not "%XYO_PATH_REPOSITORY%" == "" goto BuildStep
set XYO_PATH_REPOSITORY=..\.repository\%XYO_PLATFORM%
:BuildStep

set FILE_TO_CS=%XYO_PATH_REPOSITORY%\bin\file-to-cs.exe
set XYO_CC=%XYO_PATH_REPOSITORY%\bin\xyo-cc.exe

set XLIB_STATIC= 
set XLIB_STATIC= %XLIB_STATIC% --use-project=libxyo-core.static
set XLIB_STATIC= %XLIB_STATIC% --use-project=libquantum-script.static

set XLIB= 
set XLIB= %XLIB% --use-project=libxyo-core
set XLIB= %XLIB% --use-project=libquantum-script

echo ^> begin build ^<
%FILE_TO_CS% --touch=source/quantum-script-extension-make.cpp --file-in=source/quantum-script-extension-make.js --file-out=source/quantum-script-extension-make.src --is-string --name=extensionMakeSource
IF ERRORLEVEL 1 goto Error_Build
%XYO_CC% --mode=%2 --lib qse-make --project-base=quantum-script-extension-make --source-is-separate %XLIB_STATIC%
IF ERRORLEVEL 1 goto Error_Build
%XYO_CC% --mode=%2 --dll qse-make --project-base=quantum-script-extension-make --no-version --source-is-separate --def=QUANTUM_SCRIPT_EXTENSION_MAKE_MODULE_DYNAMIC_LINK %XLIB%
IF ERRORLEVEL 1 goto Error_Build
if "%2" == "version" goto :eof
copy /B /Y %XYO_PATH_REPOSITORY%\bin\libxyo-core.dll bin\libxyo-core.dll
copy /B /Y %XYO_PATH_REPOSITORY%\bin\libquantum-script.dll bin\libquantum-script.dll

echo ^> build done ^<
goto :eof

rem ---

:Error_Build
echo Error: build
goto :eof
:Error_MSVC
echo Error: not found - Microsoft Visual Studio 2017 Community
goto :eof
:Error_Unknown_Platform
echo Error: uknown platorm please provide win32 or win64
goto :eof
