grammar ShellGrammar;

line: command (WS PIPELINE WS command)*;
command: program (WS extra)*;
extra: flag | ((input | output) WS)? parameter;
program: LOWERCASE+;
flag: '-' (LOWERCASE | UPPERCASE | NUMBER)+;
parameter: (LOWERCASE | UPPERCASE | NUMBER | OTHER)+;

WS: ' '+;

input: '<';
output: '>'
    | '2>'
    | '>>'
    ;

PIPELINE: '|';
LOWERCASE: [a-z];
UPPERCASE: [A-Z];
NUMBER: [0-9];
OTHER: '.' | '(' | ')' | '"' | '-' | '+' | '[' | ']' | ':' | '/';