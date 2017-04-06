grammar ShellGrammar;

line: command (WS PIPELINE WS command)*;
command: program (WS extra)*;
extra: ((input | output) WS)? parameter;
program: WORD;
parameter: WORD;

input: '<';
output: '>'
    | '2>'
    | '>>'
    ;

WORD: (~[ \t\r\n])+;
PIPELINE: '|';
WS: [ \t\r\n]+;