grammar ShellGrammar;

line: command (WS '|' WS command)* (WS bkg='&')?;
command: p=WORD (WS (extra | io))*;
extra: p=WORD;
io: '<' WS path=WORD     # in
    | '>' WS path=WORD   # out
    | '2>' WS path=WORD  # err
    | '>>' WS path=WORD  # add
    ;

WORD: (~[ \t\r\n])+;
WS: [ \t\r\n]+;