
This repository contains full source code and build system setup to reproduce a compiler bug which happens on Windows 11 + VS2022 + CMake.

It seems that error caused by "heavy" templating somehow doesn't play very nice with module files


# Building
just run Generate.bat file or invoke cmake yourself. Nothing special is required

# Output
```
Build started at 05:26...
1>------ Build started: Project: ZERO_CHECK, Configuration: Debug x64 ------
1>1>Checking Build System
2>------ Build started: Project: ModuleTest, Configuration: Debug x64 ------
2>Building Custom Rule D:/DEV/Github/ModuleTest/CMakeLists.txt
2>Scanning sources for module dependencies...
2>test.ixx
2>other_test.cpp
2>main.cpp
2>std.ixx
2>Compiling...
2>test.ixx
2>std.ixx
2>main.cpp
2>other_test.cpp
2>ModuleTest.vcxproj -> D:\DEV\Github\ModuleTest\out\Debug\ModuleTest.exe
========== Build: 2 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
========== Build completed at 05:26 and took 03.301 seconds ==========
```

# System info
Edition	Windows 11 Pro
Version	23H2
Installed on	19/01/2023
OS build	22631.4169
Experience	Windows Feature Experience Pack 1000.22700.1034.0

# Compiler info
Microsoft (R) C/C++ Optimizing Compiler Version 19.36.32546 for x64

# Visual Studio info
Microsoft Visual Studio Community 2022
Version 17.11.5
VisualStudio.17.Release/17.11.5+35327.3
Microsoft .NET Framework
Version 4.8.09032

Installed Version: Community

Visual C++ 2022   00482-90000-00000-AA201
Microsoft Visual C++ 2022

ASP.NET and Web Tools   17.11.231.19466
ASP.NET and Web Tools

Azure App Service Tools v3.0.0   17.11.231.19466
Azure App Service Tools v3.0.0

C# Tools   4.11.0-3.24460.3+5649376e0e5f5db3743a94a62b073f2cce4be5d9
C# components used in the IDE. Depending on your project type and settings, a different version of the compiler may be used.

Cookiecutter   17.0.24138.2
Provides tools for finding, instantiating and customizing templates in cookiecutter format.

Extensibility Message Bus   1.4.39 (main@e8108eb)
Provides common messaging-based MEF services for loosely coupled Visual Studio extension components communication and integration.

GitHub Copilot   0.2.1657.32929
GitHub Copilot is an AI pair programmer that helps you write code faster and with less work.

Linux Core Dump Debugging   1.0.9.35103
Enables debugging of Linux core dumps.

Microsoft JVM Debugger   1.0
Provides support for connecting the Visual Studio debugger to JDWP compatible Java Virtual Machines

Mono Debugging for Visual Studio   17.11.3 (ba13144)
Support for debugging Mono processes with Visual Studio.

NuGet Package Manager   6.11.1
NuGet Package Manager in Visual Studio. For more information about NuGet, visit https://docs.nuget.org/

NVIDIA CUDA 12.5 Wizards   12.5
Wizards to create new NVIDIA CUDA projects and source files.

NVIDIA CUDA 12.6 Wizards   12.6
Wizards to create new NVIDIA CUDA projects and source files.

NVIDIA Nsight Visual Studio Edition   2024.3.0.24164
NVIDIA Nsight Visual Studio Edition provides tools for GPGPU and graphics development.  Copyright © NVIDIA 2010 - 2024.
•Direct3D® and DirectX® are registered trademarks of Microsoft Corporation in the United States and/or other countries.
•Microsoft Detours is used under the Professional license (http://research.microsoft.com/en-us/projects/detours/).
•Gardens Point Parser Generator Copyright 2005 Queensland University of Technology (QUT). All rights reserved.
•Icons from Axialis Software used under the licensing terms found here: www.axialis.com
•NLog Copyright © 2004-2006 Jaroslaw Kowalski (jaak@jkowalski.net)
•zlib and libpng used under the zlib/libpnc license (http://opensource.org/licenses/Zlib) 
•Breakpad Copyright ©2006, Google Inc. All rights reserved.
•The OpenGL Extension Wrangler Library
Copyright ©2008-2016, Nigel Stewart (nigels@users.sourceforge.net), Copyright ©2002-2008, Milan Ikits (milan.ikits@ieee.org), Copyright ©2002-2008, Marcelo E. Magallon (mmagallo@debian.org), Copyright ©2002, Lev Povalahev. 
All rights reserved. 
•LIBSSH2 Copyright ©2004-2007 Sara Golemon (sarag@libssh2.org), Copyright ©2005,2006 Mikhail Gusarov (dottedmag@dottedmag.net),Copyright ©2006-2007 The Written Word, Inc.,Copyright ©2007 Eli Fant (elifantu@mail.ru),Copyright ©2009-2014 Daniel Stenberg., Copyright ©2008, 2009 Simon Josefsson.
All rights reserved. 
•xxHASH Library Copyright ©2012-2014, Yann Collet. All rights reserved. 
•FMT Copyright ©2012 - 2016, Victor Zverovich 
•Font Awesome Copyright 2018 Fonticons, Inc. 
•ELF Definitions Copyright (c) 2010 Joseph Koshy, All rights reserved.
•expected, used under the Creative Commons 1.0 Universal License (http://creativecommons.org/publicdomain/zero/1.0/)
•Boost, used under the  Boost Software License (https://www.boost.org/users/license.html)
•gsl-lite, The MIT License (MIT), Copyright (c) 2015 Martin Moene, Copyright (c) 2015 Microsoft Corporation. All rights reserved. 
•Protocol Buffer, Copyright 2008 Google Inc.  All rights reserved.
•ThreadPool, Copyright (c) 2012 Jakob Progsch, Václav Zeman

The full text of the license for the OSS components used in this product is available as part of the Nsight Visual Studio Edition EULA (https://docs.nvidia.com/nsight-visual-studio-edition/eula/index.html).

Warning: This computer program is protected by copyright law and international treaties. Unauthorized reproduction or distribution of this program, or any portion of it, may result in severe civil and criminal penalties, and will be prosecuted to the maximum extent possible under the law.

NVIDIA Nsight Visual Studio Edition - CUDA support   2024.3.0.24164
NVIDIA Nsight Visual Studio Edition - CUDA support provides tools for CUDA development and debugging.

OptionsPagePackage Extension   1.0
OptionsPagePackage Visual Studio Extension Detailed Info

Python - Profiling support   17.0.24138.2
Profiling support for Python projects.

Python with Pylance   17.0.24138.2
Provides IntelliSense, projects, templates, debugging, interactive windows, and other support for Python developers.

Razor (ASP.NET Core)   17.11.3.2442001+68650a7d94261bc56a1f4bc522c2ee35314b1abb
Provides languages services for ASP.NET Core Razor.

TypeScript Tools   17.0.30715.2002
TypeScript Tools for Microsoft Visual Studio

Visual Basic Tools   4.11.0-3.24460.3+5649376e0e5f5db3743a94a62b073f2cce4be5d9
Visual Basic components used in the IDE. Depending on your project type and settings, a different version of the compiler may be used.

Visual C++ for Cross Platform Mobile Development (Android)   15.0.35103.136
Visual C++ for Cross Platform Mobile Development (Android)

Visual C++ for Cross Platform Mobile Development (iOS)   15.0.35103.136
Visual C++ for Cross Platform Mobile Development (iOS)

Visual C++ for Linux Development   1.0.9.35103
Visual C++ for Linux Development

Visual F# Tools   17.11.0-beta.24421.7+af2f522de602281d4ef5a7b71507c428e814c5c1
Microsoft Visual F# Tools

Visual Studio IntelliCode   2.2
AI-assisted development for Visual Studio.

VisualStudio.DeviceLog   1.0
Information about my package

VisualStudio.Mac   1.0
Mac Extension for Visual Studio

VSPackage Extension   1.0
VSPackage Visual Studio Extension Detailed Info

Xamarin   17.11.0.98 (d17-11@86652fe)
Visual Studio extension to enable development for Xamarin.iOS and Xamarin.Android.

Xamarin Designer   17.11.3.11 (remotes/origin/d17-11@cdbb0a4fdd)
Visual Studio extension to enable Xamarin Designer tools in Visual Studio.

Xamarin.Android SDK   13.2.2.0 (d17-5/45b0e14)
Xamarin.Android Reference Assemblies and MSBuild support.
    Mono: d9a6e87
    Java.Interop: xamarin/java.interop/d17-5@149d70fe
    SQLite: xamarin/sqlite/3.40.1@68c69d8
    Xamarin.Android Tools: xamarin/xamarin-android-tools/d17-5@ca1552d
