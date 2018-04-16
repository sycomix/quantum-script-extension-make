//
// Quantum Script Extension Make
//
// Copyright (c) 2018 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE_LICENSE_HPP
#define QUANTUM_SCRIPT_EXTENSION_MAKE_LICENSE_HPP

#ifndef QUANTUM_SCRIPT_EXTENSION_MAKE__EXPORT_HPP
#include "quantum-script-extension-make--export.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Make {

				class License {
					public:
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *content();
						QUANTUM_SCRIPT_EXTENSION_MAKE_EXPORT static const char *shortContent();
				};

			};
		};
	};
};

#endif
