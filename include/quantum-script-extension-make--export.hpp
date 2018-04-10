//
// Quantum Script Extension Make
//
// Copyright (c) 2018 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE__EXPORT_HPP
#define QUANTUM_SCRIPT_EXTENSION_MAKE__EXPORT_HPP

#ifndef XYO_CORE__EXPORT_HPP
#include "xyo-core--export.hpp"
#endif

#ifdef XYO_DYNAMIC_LINK
#   ifdef  QUANTUM_SCRIPT_EXTENSION_MAKE_INTERNAL
#       define QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT XYO_EXPORT
#   else
#       define QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT XYO_IMPORT
#   endif
#else
#   define QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT
#endif

#endif

