grammar ShellGrammar;

line: command (WS '|' WS command)* bkg='&'?;
command: p=WORD (WS extra)*;
extra: ((input | output) WS)? p=WORD;

input: '<';
output: '>'
    | '2>'
    | '>>'
    ;

WORD: (~[ \t\r\n])+;
WS: [ \t\r\n]+;