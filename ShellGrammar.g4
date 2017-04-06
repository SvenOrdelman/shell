grammar ShellGrammar;

line: c+=command (WS '|' WS c+=command)*;
command: WORD (WS extra)*;
extra: ((input | output) WS)? WORD;

input: '<';
output: '>'
    | '2>'
    | '>>'
    ;

WORD: (~[ \t\r\n])+;
WS: [ \t\r\n]+;