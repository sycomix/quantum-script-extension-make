//
// Quantum Script Extension Make
//
// Copyright (c) 2018 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE_VERSION_HPP
#define QUANTUM_SCRIPT_EXTENSION_MAKE_VERSION_HPP

#define QUANTUM_SCRIPT_EXTENSION_MAKE_VERSION_ABCD                 1,0,0,139
#define QUANTUM_SCRIPT_EXTENSION_MAKE_VERSION_STR                 "1.0.0"
#define QUANTUM_SCRIPT_EXTENSION_MAKE_VERSION_STR_BUILD           "139"
#define QUANTUM_SCRIPT_EXTENSION_MAKE_VERSION_STR_DATETIME        "2018-04-08 04:41:41"

#ifndef XYO_RC

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE__EXPORT_HPP
#include "quantum-script-extension-make--export.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Make {

				class Version {
					public:
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *getVersion();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *getBuild();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *getVersionWithBuild();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *getDatetime();
				};

			};
		};
	};
};

#endif
#endif

