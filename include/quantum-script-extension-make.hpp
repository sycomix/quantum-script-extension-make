//
// Quantum Script Extension Make
//
// Copyright (c) 2018 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE_HPP
#define QUANTUM_SCRIPT_EXTENSION_MAKE_HPP

#ifndef LIBQUANTUM_SCRIPT_HPP
#include "libquantum-script.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE__EXPORT_HPP
#include "quantum-script-extension-make--export.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Make {

				using namespace Quantum::Script;

				QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT void initExecutive(Executive *executive,void *extensionId);
				QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT void registerInternalExtension(Executive *executive);

			};
		};
	};
};


#ifdef QUANTUM_SCRIPT_EXTENSION_MAKE_MODULE_DYNAMIC_LINK
extern "C" QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT void quantumScriptExtension(Quantum::Script::Executive *executive,void *extensionId);
#endif

#endif

