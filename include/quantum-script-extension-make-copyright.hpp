//
// Quantum Script Extension Make
//
// Copyright (c) 2018 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE_COPYRIGHT_HPP
#define QUANTUM_SCRIPT_EXTENSION_MAKE_COPYRIGHT_HPP

#define QUANTUM_SCRIPT_EXTENSION_MAKE_COPYRIGHT            "Copyright (c) Grigore Stefan"
#define QUANTUM_SCRIPT_EXTENSION_MAKE_PUBLISHER            "Grigore Stefan"
#define QUANTUM_SCRIPT_EXTENSION_MAKE_COMPANY              QUANTUM_SCRIPT_EXTENSION_MAKE_PUBLISHER
#define QUANTUM_SCRIPT_EXTENSION_MAKE_CONTACT              "g_stefan@yahoo.com"
#define QUANTUM_SCRIPT_EXTENSION_MAKE_FULL_COPYRIGHT       QUANTUM_SCRIPT_EXTENSION_MAKE_COPYRIGHT " <" QUANTUM_SCRIPT_EXTENSION_MAKE_CONTACT ">"

#ifndef XYO_RC

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE__EXPORT_HPP
#include "quantum-script-extension-make--export.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Make {
				class Copyright {
					public:
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *copyright();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *publisher();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *company();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *contact();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *fullCopyright();

				};
			};
		};
	};
};

#endif
#endif
