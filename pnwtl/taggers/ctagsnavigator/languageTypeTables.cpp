/**
 * @file languageTypeTables.cpp
 * @brief Type mappings.
 * @author Simon Steele
 * @note Copyright (c) 2004 Simon Steele <s.steele@pnotepad.org>
 *
 * Programmers Notepad 2 : The license file (license.[txt|html]) describes 
 * the conditions under which this source may be modified / distributed.
 */
#include "stdafx.h"
#include "languageTypeTables.h"
#include "../tagtypes.h"

/*
static kindOption CKinds [] = {
    { TRUE,  'c', "class",      "classes"},
    { TRUE,  'd', "macro",      "macro definitions"},
    { TRUE,  'e', "enumerator", "enumerators (values inside an enumeration)"},
    { TRUE,  'f', "function",   "function definitions"},
    { TRUE,  'g', "enum",       "enumeration names"},
    { FALSE, 'l', "local",      "local variables"},
    { TRUE,  'm', "member",     "class, struct, and union members"},
    { TRUE,  'n', "namespace",  "namespaces"},
    { FALSE, 'p', "prototype",  "function prototypes"},
    { TRUE,  's', "struct",     "structure names"},
    { TRUE,  't', "typedef",    "typedefs"},
    { TRUE,  'u', "union",      "union names"},
    { TRUE,  'v', "variable",   "variable definitions"},
    { FALSE, 'x', "externvar",  "external variable declarations"},
};
 */

int lCTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ TAG_CLASS,	/*d*/ TAG_MACRO,
	/*e*/ TAG_ENUM,		/*f*/ TAG_FUNCTION,
	/*g*/ TAG_ENUMNAME,	/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ TAG_VARIABLE, /*local*/
	/*m*/ TAG_MEMBER,	/*n*/ TAG_NAMESPACE,
	/*o*/ 0,			/*p*/ TAG_PROTOTYPE,
	/*q*/ 0,			/*r*/ 0,
	/*s*/ TAG_STRUCTURE,/*t*/ TAG_TYPEDEF,
	/*u*/ TAG_UNION,	/*v*/ TAG_VARIABLE,
	/*w*/ 0,			/*x*/ TAG_VARIABLE, /*extern*/
	/*y*/ 0,			/*z*/ 0
};

int uCTypes[26] = {
	/*A*/ 0,			/*B*/ 0,
	/*C*/ 0,			/*D*/ 0,
	/*E*/ 0,			/*F*/ TAG_FILENAME,
	/*G*/ 0,			/*H*/ 0,
	/*I*/ 0,			/*J*/ 0,
	/*K*/ 0,			/*L*/ 0,
	/*M*/ 0,			/*N*/ 0,
	/*O*/ 0,			/*P*/ 0,
	/*Q*/ 0,			/*R*/ 0,
	/*S*/ 0,			/*T*/ 0,
	/*U*/ 0,			/*V*/ 0,
	/*W*/ 0,			/*X*/ 0,
	/*Y*/ 0,			/*Z*/ 0
};

/*
static kindOption CsharpKinds [] = {
    { TRUE,  'c', "class",      "classes"},
    { TRUE,  'd', "macro",      "macro definitions"},
    { TRUE,  'e', "enumerator", "enumerators (values inside an enumeration)"},
    { TRUE,  'E', "event",      "events"},
    { TRUE,  'f', "field",      "fields"},
    { TRUE,  'g', "enum",       "enumeration names"},
    { TRUE,  'i', "interface",  "interfaces"},
    { FALSE, 'l', "local",      "local variables"},
    { TRUE,  'm', "method",     "methods"},
    { TRUE,  'n', "namespace",  "namespaces"},
    { TRUE,  'p', "property",   "properties"},
    { TRUE,  's', "struct",     "structure names"},
    { TRUE,  't', "typedef",    "typedefs"},
};
*/

int lCSTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ TAG_CLASS,	/*d*/ TAG_MACRO,
	/*e*/ TAG_ENUM,		/*f*/ TAG_MEMBER,
	/*g*/ TAG_ENUMNAME,	/*h*/ 0,
	/*i*/ TAG_INTERFACE,/*j*/ 0,
	/*k*/ 0,			/*l*/ TAG_VARIABLE, /*local*/
	/*m*/ TAG_METHOD,	/*n*/ TAG_NAMESPACE,
	/*o*/ 0,			/*p*/ TAG_PROPERTY,
	/*q*/ 0,			/*r*/ 0,
	/*s*/ TAG_STRUCTURE,/*t*/ TAG_TYPEDEF,
	/*u*/ 0,	/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

int uCSTypes[26] = {
	/*A*/ 0,			/*B*/ 0,
	/*C*/ 0,			/*D*/ 0,
	/*E*/ TAG_EVENT,	/*F*/ TAG_FILENAME,
	/*G*/ 0,			/*H*/ 0,
	/*I*/ 0,			/*J*/ 0,
	/*K*/ 0,			/*L*/ 0,
	/*M*/ 0,			/*N*/ 0,
	/*O*/ 0,			/*P*/ 0,
	/*Q*/ 0,			/*R*/ 0,
	/*S*/ 0,			/*T*/ 0,
	/*U*/ 0,			/*V*/ 0,
	/*W*/ 0,			/*X*/ 0,
	/*Y*/ 0,			/*Z*/ 0
};

/*static kindOption JavaKinds [] = {
    { TRUE,  'c', "class",     "classes"},
    { TRUE,  'f', "field",     "fields"},
    { TRUE,  'i', "interface", "interfaces"},
    { FALSE, 'l', "local",     "local variables"},
    { TRUE,  'm', "method",    "methods"},
    { TRUE,  'p', "package",   "packages"},
};*/

int lJTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ TAG_CLASS,	/*d*/ 0,
	/*e*/ 0,			/*f*/ TAG_MEMBER,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ TAG_INTERFACE,/*j*/ 0,
	/*k*/ 0,			/*l*/ TAG_VARIABLE, /*local*/
	/*m*/ TAG_METHOD,	/*n*/ 0,
	/*o*/ 0,			/*p*/ TAG_NAMESPACE, /*actually a package...*/
	/*q*/ 0,			/*r*/ 0,
	/*s*/ 0,			/*t*/ 0,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

/*static kindOption PerlKinds [] = {
    { TRUE, 'c', "constant",   "constants" },
    { TRUE, 'l', "label",      "labels" },
    { TRUE, 's', "subroutine", "subroutines" }
};*/

int lPerlTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ TAG_CONSTANT,	/*d*/ 0,
	/*e*/ 0,			/*f*/ 0,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ TAG_LABEL,
	/*m*/ 0,			/*n*/ 0,
	/*o*/ 0,			/*p*/ 0,
	/*q*/ 0,			/*r*/ 0,
	/*s*/ TAG_FUNCTION,	/*t*/ 0,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

/*static kindOption PascalKinds [] = {
    { TRUE, 'f', "function",  "functions"},
    { TRUE, 'p', "procedure", "procedures"}
};*/

int lPascalTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ 0,			/*d*/ 0,
	/*e*/ 0,			/*f*/ TAG_FUNCTION,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ 0,
	/*m*/ 0,			/*n*/ 0,
	/*o*/ 0,			/*p*/ TAG_PROCEDURE,
	/*q*/ 0,			/*r*/ 0,
	/*s*/ 0,			/*t*/ 0,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

/*static kindOption RubyKinds [] = {
    { TRUE, 'c', "class",  "classes" },
    { TRUE, 'f', "method", "methods" },
    { TRUE, 'F', "singleton method", "singleton methods" },
    { TRUE, 'm', "mixin",  "mixins" }
};*/

int lRubyTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ TAG_CLASS,	/*d*/ 0,
	/*e*/ 0,			/*f*/ TAG_METHOD,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ 0,
	/*m*/ TAG_MIXIN,	/*n*/ 0,
	/*o*/ 0,			/*p*/ 0,
	/*q*/ 0,			/*r*/ 0,
	/*s*/ 0,			/*t*/ 0,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

int uRubyTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ 0,			/*d*/ 0,
	/*e*/ 0,			/*f*/ TAG_SINGLETON,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ 0,
	/*m*/ 0,			/*n*/ 0,
	/*o*/ 0,			/*p*/ 0,
	/*q*/ 0,			/*r*/ 0,
	/*s*/ 0,			/*t*/ 0,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

/*static kindOption SchemeKinds [] = {
    { TRUE, 'f', "function", "functions" },
    { TRUE, 's', "set",      "sets" }
};*/

int lSchemeTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ 0,			/*d*/ 0,
	/*e*/ 0,			/*f*/ TAG_FUNCTION,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ 0,
	/*m*/ 0,			/*n*/ 0,
	/*o*/ 0,			/*p*/ 0,
	/*q*/ 0,			/*r*/ 0,
	/*s*/ TAG_SET,		/*t*/ 0,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

/*static kindOption SqlKinds [] = {
    { TRUE,  'c', "cursor",    "cursors"	},
    { FALSE, 'd', "prototype", "prototypes"	},
    { TRUE,  'f', "function",  "functions"	},
    { TRUE,  'F', "field",     "record fields"	},
    { FALSE, 'l', "local",     "local variables"},
    { TRUE,  'L', "label",     "block label"    },
    { TRUE,  'P', "package",   "packages"	},
    { TRUE,  'p', "procedure", "procedures"	},
    { TRUE,  'r', "record",    "records"	},
    { TRUE,  's', "subtype",   "subtypes"	},
    { TRUE,  't', "table",     "tables"		},
    { TRUE,  'T', "trigger",   "triggers"	},
    { TRUE,  'v', "variable",  "variables"	},
};*/

int lSQLTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ TAG_CURSOR,	/*d*/ TAG_PROTOTYPE,
	/*e*/ 0,			/*f*/ TAG_FUNCTION,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ TAG_VARIABLE,
	/*m*/ 0,			/*n*/ 0,
	/*o*/ 0,			/*p*/ TAG_PROCEDURE,
	/*q*/ 0,			/*r*/ TAG_RECORD,
	/*s*/ TAG_SUBTYPE,	/*t*/ TAG_TABLE,
	/*u*/ 0,			/*v*/ TAG_VARIABLE,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

int uSQLTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ 0,			/*d*/ 0,
	/*e*/ 0,			/*f*/ TAG_FIELD,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ TAG_LABEL,
	/*m*/ 0,			/*n*/ 0,
	/*o*/ 0,			/*p*/ TAG_MODULE, /* actually package */
	/*q*/ 0,			/*r*/ 0,
	/*s*/ 0,			/*t*/ TAG_TRIGGER,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

/*static kindOption VerilogKinds [] = {
 { TRUE, 'c', "constant",  "constants (define, parameter, specparam)" },
 { TRUE, 'e', "event",     "events" },
 { TRUE, 'f', "function",  "functions" },
 { TRUE, 'm', "module",    "modules" },
 { TRUE, 'n', "net",       "net data types" },
 { TRUE, 'p', "port",      "ports" },
 { TRUE, 'r', "register",  "register data types" },
 { TRUE, 't', "task",      "tasks" }
};*/

int lVerilogTypes[26] = {
	/*a*/ 0,			/*b*/ 0,
	/*c*/ TAG_CONSTANT,	/*d*/ 0,
	/*e*/ TAG_EVENT,	/*f*/ TAG_FUNCTION,
	/*g*/ 0,			/*h*/ 0,
	/*i*/ 0,			/*j*/ 0,
	/*k*/ 0,			/*l*/ 0,
	/*m*/ TAG_MODULE,	/*n*/ TAG_NET,
	/*o*/ 0,			/*p*/ TAG_PORT,
	/*q*/ 0,			/*r*/ TAG_REGISTER,
	/*s*/ 0,			/*t*/ TAG_TASK,
	/*u*/ 0,			/*v*/ 0,
	/*w*/ 0,			/*x*/ 0, 
	/*y*/ 0,			/*z*/ 0
};

/*
the following are satisfied by the c defaults:
php, python, tcl
*/

void getTables(LPCWSTR schemeName, int** lcTypes, int** ucTypes)
{
	// default uppercase - not many use this.
	*ucTypes = uCTypes;

	if(wcscmp(schemeName, L"csharp") == 0)
	{
		*lcTypes = lCSTypes;
		*ucTypes = uCSTypes;
	}
	else if(wcscmp(schemeName, L"java") == 0)
	{
		*lcTypes = lJTypes;
	}
	else if(wcscmp(schemeName, L"pascal") == 0)
	{
		*lcTypes = lPascalTypes;
	}
	else if(wcscmp(schemeName, L"perl") == 0)
	{
		*lcTypes = lPerlTypes;
	}
	else if(wcscmp(schemeName, L"ruby") == 0)
	{
		*lcTypes = lRubyTypes;
		*ucTypes = uRubyTypes;
	}
	else if(wcscmp(schemeName, L"sql") == 0)
	{
		*lcTypes = lSQLTypes;
		*ucTypes = uSQLTypes;
	}
	else if(wcscmp(schemeName, L"verilog") == 0)
	{
		*lcTypes = lVerilogTypes;
	}
	else
	{
		*lcTypes = lCTypes;
	}
}