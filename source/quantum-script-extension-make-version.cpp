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

				static const char *versionVersion="1.0.0";
				static const char *versionBuild="139";
				static const char *versionVersionWithBuild="1.0.0.139";
				static const char *versionDatetime="2018-04-08 04:41:41";

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



