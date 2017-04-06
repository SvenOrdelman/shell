grammar ShellGrammar;

line: command (WS PIPELINE WS command)*;
command: WORD (WS extra)*;
extra: ((input | output) WS)? WORD;

input: '<';
output: '>'
    | '2>'
    | '>>'
    ;

WORD: (~[ \t\r\n])+;
PIPELINE: '|';
WS: [ \t\r\n]+;