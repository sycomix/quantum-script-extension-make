//
// Quantum Script Extension Make
//
// Copyright (c) 2018 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#include "quantum-script-extension-make-version.hpp"

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Make {

				static const char *versionVersion="%VERSION_VERSION%";
				static const char *versionBuild="%VERSION_BUILD%";
				static const char *versionVersionWithBuild="%VERSION_VERSION%.%VERSION_BUILD%";
				static const char *versionDatetime="%VERSION_DATETIME%";

				const char *Version::getVersion() {
					return versionVersion;
				};
				const char *Version::getBuild() {
					return versionBuild;
				};
				const char *Version::getVersionWithBuild() {
					return versionVersionWithBuild;
				};
				const char *Version::getDatetime() {
					return versionDatetime;
				};

			};
		};
	};
};



