grammar ShellGrammar;

line: command (WS PIPELINE WS command)*;
command: program (WS argument)*;
program: LOWERCASE+;
argument: '-' flag WS parameter?;
flag: (LOWERCASE | UPPERCASE | NUMBER)+;
parameter: (LOWERCASE | UPPERCASE | NUMBER | OTHER)+;

WS: ' '+;

PIPELINE: '|';
LOWERCASE: [a-z];
UPPERCASE: [A-Z];
NUMBER: [0-9];
OTHER: '.' | '(' | ')' | '"' | '-' | '+' | '[' | ']' | ':' | '<' | '>';