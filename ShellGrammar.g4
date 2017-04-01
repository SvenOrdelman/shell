grammar ShellGrammar;

line: command (WS PIPELINE WS command)*;
command: program ((WS (flag | parameter)) | (WS (INPUT | OUTPUT) WS parameter))*;
program: LOWERCASE+;
flag: '-' (LOWERCASE | UPPERCASE | NUMBER)+;
parameter: (LOWERCASE | UPPERCASE | NUMBER | OTHER)+;

WS: ' '+;

INPUT: '<';
OUTPUT: '>' | '2>' | '>>';

PIPELINE: '|';
LOWERCASE: [a-z];
UPPERCASE: [A-Z];
NUMBER: [0-9];
OTHER: '.' | '(' | ')' | '"' | '-' | '+' | '[' | ']' | ':' | '/';